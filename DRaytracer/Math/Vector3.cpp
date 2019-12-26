#include "Vector3.h"

Vector3::Vector3()
: x(0), y(0), z(0)
{
}

Vector3::Vector3(double x, double y, double z)
: x(x), y(y), z(z)
{}

bool Vector3::operator==(const Vector3& other) const
{
	return x == other.x && y == other.y && z == other.z;
}

bool Vector3::operator!=(const Vector3& other) const
{
	return !(*this == other);
}

Vector3 Vector3::operator+(const Vector3& other) const
{
	return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const
{
	return Vector3(x - other.x, y - other.y, z - other.z);
}

double Vector3::dot(const Vector3& other) const
{
	return x * other.x + y * other.y + z * other.z;
}

Vector3 operator*(const Vector3& vec, float scalar)
{
	return Vector3(vec.x * scalar, vec.y * scalar, vec.z * scalar);
}

Vector3 operator*(float scalar, const Vector3& vec)
{
	return Vector3(vec.x * scalar, vec.y * scalar, vec.z * scalar);
}



