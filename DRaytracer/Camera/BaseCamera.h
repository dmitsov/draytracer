#pragma once
#include "../Math/Vector3.h"
#include "../Math/Ray.h"

#ifndef BASE_CAMERA_H_
#define BASE_CAMERA_H_

class BaseCamera
{
protected:
	Vector3 position;

public:
	BaseCamera();
	BaseCamera(const Vector3& position);

	virtual Ray GetRay(double x, double y) const = 0;
};

#endif