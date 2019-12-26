#pragma once
#include "Vector3.h"

#ifndef RAY_H_
#define RAY_H_

struct Ray
{
	Vector3 origin;
	Vector3 direction;

	Ray();
	Ray(const Vector3& o, const Vector3& dir);

	Vector3 Interpolate(float t);
};

#endif