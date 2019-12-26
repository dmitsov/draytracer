#pragma once
#ifndef BOX_H_
#define BOX_H_

#include "BaseShape.h"

class Box : public BaseShape
{
public:
	Vector3 origin;
	double width;
	double height;

	Box();
	Box(const Vector3& o, double w, double h);


	virtual bool Intersect(const Ray& ray, SampleData& dist) const;
};

#endif
