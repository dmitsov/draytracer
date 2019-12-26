#pragma once
#ifndef SPHERE_H_
#define SPHERE_H_

#include "BaseShape.h"

class Sphere: public BaseShape
{
public:
	Vector3 center;
	double radius;

	Sphere();
	Sphere(const Vector3& c, double r);
	

	virtual bool Intersect(const Ray& ray, SampleData& dist) const;
};

#endif