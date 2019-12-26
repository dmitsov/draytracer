#include "Matrix4x4.h"
#include <string.h>
#include <cassert>

Matrix4x4::Matrix4x4()
{
	memset(data[0], 0, sizeof(double) * 4);
	memset(data[1], 0, sizeof(double) * 4);
	memset(data[2], 0, sizeof(double) * 4);
	memset(data[3], 0, sizeof(double) * 4);
}

Matrix4x4::Matrix4x4(double* row0, double* row1, double* row2, double* row3)
{
	assert(sizeof(row0) / sizeof(double) == SIZE_N);
	assert(sizeof(row1) / sizeof(double) == SIZE_N);
	assert(sizeof(row2) / sizeof(double) == SIZE_N);
	assert(sizeof(row3) / sizeof(double) == SIZE_N);

	memcpy_s(data[0], ROW_SIZE_BYTES, row0, ROW_SIZE_BYTES);
	memcpy_s(data[1], ROW_SIZE_BYTES, row1, ROW_SIZE_BYTES);
	memcpy_s(data[2], ROW_SIZE_BYTES, row2, ROW_SIZE_BYTES);
	memcpy_s(data[3], ROW_SIZE_BYTES, row3, ROW_SIZE_BYTES);
}

Matrix4x4::Matrix4x4(const Matrix4x4& other)
{
	memcpy_s(data[0], ROW_SIZE_BYTES, other.data[0], ROW_SIZE_BYTES);
	memcpy_s(data[1], ROW_SIZE_BYTES, other.data[1], ROW_SIZE_BYTES);
	memcpy_s(data[2], ROW_SIZE_BYTES, other.data[2], ROW_SIZE_BYTES);
	memcpy_s(data[3], ROW_SIZE_BYTES, other.data[3], ROW_SIZE_BYTES);
}

