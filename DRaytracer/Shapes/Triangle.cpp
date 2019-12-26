#include "Triangle.h"

Triangle::Triangle()
{
}

Triangle::Triangle(const Vector3& p0, const Vector3& p1, const Vector3& p2)
{
	points[0] = p0;
	points[1] = p1;
	points[2] = p2;
}

Triangle::Triangle(const Vector3* pArr)
{
	points[0] = pArr[0];
	points[1] = pArr[1];
	points[2] = pArr[2];
}

bool Triangle::Intersect(const Ray& ray, SampleData& dist) const
{
	return false;
}


