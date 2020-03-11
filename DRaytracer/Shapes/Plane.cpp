#include "Plane.h"

Plane::Plane()
{
}

Plane::Plane(const Vector3& pos, const Vector3& n)
: position(pos), normal(n.normalize())
{
}

bool Plane::Intersect(const Ray& ray, SampleData& data) const
{
	Vector3 posToOrigin = ray.origin - position;
	double denom = ray.direction.dot(normal);
	if(denom > 1e-6)
	{
		Vector3 originToPosition = position - ray.origin;
		double distance = normal.dot(originToPosition) / denom;

		if(distance >= 0)
		{
			data.distance = distance;
			data.normal = (normal.dot(originToPosition * -1)) * normal;
		}
	}

	return false;
}


