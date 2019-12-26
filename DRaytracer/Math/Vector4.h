#pragma once
#ifndef VECTOR4_H_
#define VECTOR4_H_

struct Vector4
{
	float x;
	float y;
	float z;
	float w;

	Vector4();
	Vector4(float x, float y, float z, float w);

	bool operator==(const Vector4& other) const;
	bool operator!=(const Vector4& other) const;

	Vector4 operator+(const Vector4& other) const;
	Vector4 operator-(const Vector4& other) const;
};

Vector4 operator*(const Vector4& vec, float scalar);
Vector4 operator*(float scalar, const Vector4& vec);


#endif