#include "Ray.h"

Ray::Ray()
{
}

Ray::Ray(const Vector3& o, const Vector3& dir)
: origin(o), direction(dir)
{
}

Vector3 Ray::GetPoint(double t) const
{
	return origin + direction * t;
}
