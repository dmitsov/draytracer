#pragma once
#include "../Math/Vector3.h"
#include "../Shapes/BaseShape.h"

#ifndef PLANE_H_
#define PLANE_H_

class Plane : public BaseShape
{
private:
	Vector3 normal;
	Vector3 position;
public:
	Plane();
	Plane(const Vector3& pos, const Vector3& n);

	virtual bool Intersect(const Ray& ray, SampleData& data) const;
};

#endif // 
