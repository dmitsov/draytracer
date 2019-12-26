#include "Vector4.h"



Vector4::Vector4()
: x(0), y(0), z(0), w(0)
{
}

Vector4::Vector4(float newX, float newY, float newZ, float newW)
: x(newX), y(newY), z(newZ), w(newW)
{
}

bool Vector4::operator==(const Vector4& other) const
{
	return x == other.x && y == other.y && z == other.z && w == other.w;
}

bool Vector4::operator!=(const Vector4& other) const
{
	return !(*this == other);
}

Vector4 Vector4::operator+(const Vector4& other) const
{
	return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
}

Vector4 Vector4::operator-(const Vector4& other) const
{
	return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
}

Vector4 operator*(const Vector4& vec, float scalar)
{
	return Vector4(vec.x * scalar, vec.y * scalar, vec.z * scalar, vec.w * scalar);
}

Vector4 operator*(float scalar, const Vector4& vec)
{
	return Vector4(vec.x * scalar, vec.y * scalar, vec.z * scalar, vec.w * scalar);
}

