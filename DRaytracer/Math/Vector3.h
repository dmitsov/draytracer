#pragma once
#ifndef VECTOR3_H_
#define VECTOR3_H_

struct Vector3
{
	double x;
	double y;
	double z;

	Vector3();
	Vector3(double x, double y, double z);

	bool operator==(const Vector3& other) const;
	bool operator!=(const Vector3& other) const;
	
	Vector3 operator+(const Vector3& other) const;
	Vector3 operator-(const Vector3& other) const;

	double dot(const Vector3& other) const;
	double length() const;
	Vector3 normalize() const;

};

Vector3 operator*(const Vector3& other, double scalar);
Vector3 operator*(double scalar, const Vector3& other);

#endif // !VECTOR3_H_


