#include "Sphere.h"
#include <cmath>

#define pow2(x) x * x;

Sphere::Sphere()
: radius(0)
{
}

Sphere::Sphere(const Vector3& c, double r)
: center(c), radius(r)
{
}

//TODO: finish this
bool Sphere::Intersect(const Ray& ray, SampleData& data) const
{
	double A = pow2(ray.direction.x) + pow2(ray.direction.y) + pow2(ray.direction.z);

	double B = 2 * (ray.direction.x * (ray.origin.x - center.x) 
				+ ray.direction.y * (ray.origin.y - center.y)
				+ ray.direction.z * (ray.origin.z - center.z));

	double C = pow2(ray.origin.x - center.x) + pow2(ray.origin.y - center.y) + pow2(ray.origin.z - center.z) - pow2(radius);

	double D = pow2(B) - 4 * A * C;

	if(D > 0)
	{
		double t1 = (-B + sqrt(D)) / (2 * A);
		double t2 = (-B - sqrt(D)) / (2 * A);

		if (t1 < 0)
		{
			return false;
		}

		data.distance = t2 >= 0 ? t2 : t1;

	}
	else if(D == 0)
	{
		double t = -B / (2 * A);

		if(t < 0)
		{
			return false;
		}

		data.distance = t;
	}
	else
	{
		return false;
	}

	data.point = ray.GetPoint(data.distance);
	data.normal = data.point - center;

	return true;
}


