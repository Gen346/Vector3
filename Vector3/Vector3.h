#pragma once
#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>
#include <iostream>

struct Vector3
{
	Vector3() : x(0), y(0), z(0) {};
	Vector3(float x, float y, float z) : x(x), y(y), z(z) {};

	float x;
	float y;
	float z;

	inline Vector3 operator+(const Vector3& rhs) const
	{
		return { x + rhs.x, y + rhs.y, z + rhs.z };
	}

	inline Vector3 operator-(const Vector3& rhs) const
	{
		return { x - rhs.x, y - rhs.y, z - rhs.z };
	}

	inline Vector3 operator*(float scalar) const
	{
		return { x * scalar, y * scalar, z * scalar };
	}

	friend inline Vector3 operator*(float scalar, const Vector3& rhs)
	{
		return { scalar * rhs.x, scalar * rhs.y, scalar * rhs.z };
	}

	inline bool operator==(const Vector3& rhs) const
	{
		const float EPS = 1e-6f;

		return std::fabs(x - rhs.x) < EPS && std::fabs(y - rhs.y) < EPS && std::fabs(z - rhs.z) < EPS;
	}

	friend inline std::ostream& operator<<(std::ostream& os, const Vector3& rhs)
	{
		os << "(" << rhs.x << ", " << rhs.y << ", " << rhs.z << ")";
		return os;
	}

	void normalize()
	{
		float length = sqrtf(x * x + y * y + z * z);

		if (length != 0)
		{
			x / length;
			y / length;
			z / length;
		}
	}
	float length() const
	{
		return sqrtf(x * x + y * y + z * z);
	}
};

#endif