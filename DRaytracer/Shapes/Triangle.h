#pragma once
#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "BaseShape.h"

class Triangle : public BaseShape
{
public:
	Vector3 points[3];

	Triangle();
	Triangle(const Vector3& p1, const Vector3& p2, const Vector3& p3);
	Triangle(const Vector3* pArr);

	virtual bool Intersect(const Ray& ray, SampleData& dist) const;
};

#endif
