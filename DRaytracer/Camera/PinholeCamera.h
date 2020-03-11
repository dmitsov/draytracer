#pragma once
#ifndef PINHOLE_CAMERA_H_
#define PINHOLE_CAMERA_H_

#include "BaseCamera.h"

class PinholeCamera : public BaseCamera
{
	Vector3 position;
	Vector3 front;
	Vector3 up;
	Vector3 right;

	double fieldOfView;

private:
	PinholeCamera();
	PinholeCamera(const Vector3& pos, const Vector3& up, double fov);

	virtual Ray GetRay(double x, double y) const;
};


#endif // !PINHOLE_CAMERA_H_


