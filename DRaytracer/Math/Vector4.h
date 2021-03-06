#pragma once
#ifndef VECTOR4_H_
#define VECTOR4_H_

struct Vector4
{
	double x;
	double y;
	double z;
	double w;

	Vector4();
	Vector4(double x, double y, double z, double w);

	bool operator==(const Vector4& other) const;
	bool operator!=(const Vector4& other) const;

	Vector4 operator+(const Vector4& other) const;
	Vector4 operator-(const Vector4& other) const;

	double dot(const Vector4& other) const;
	double length() const;
	Vector4 normalize() const;
};

Vector4 operator*(const Vector4& vec, float scalar);
Vector4 operator*(float scalar, const Vector4& vec);


#endif