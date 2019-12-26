#pragma once
#include "Vector3.h"
#include "Vector4.h"

#ifndef MATRIX_4X4_H_
#define MATRIX_4X4_H_


struct Matrix4x4
{
	static const int SIZE_N = 4;
	static const int ROW_SIZE_BYTES = sizeof(double) * SIZE_N;
	double data[SIZE_N][SIZE_N];

	Matrix4x4();
	Matrix4x4(double* row0, double* row1, double* row2, double* row3);
	Matrix4x4(const Matrix4x4& other);

	Matrix4x4 operator+(const Matrix4x4& other) const;
	Matrix4x4 operator-(const Matrix4x4& other) const;
	Matrix4x4 operator*(const Matrix4x4& other) const;

	Vector3 operator*(const Vector3& other) const;
	Vector4 operator*(const Vector4& other) const;

	float getDeterminant() const;

};

Matrix4x4 operator*(const Matrix4x4& mat, float scalar);
Matrix4x4 operator*(float scalar, const Matrix4x4& mat);

Matrix4x4 Translate(const Vector3& other);

#endif