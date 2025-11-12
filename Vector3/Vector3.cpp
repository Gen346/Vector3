#include "Vector3.h"

template <typename T>
void Vector3<T>::normalize()
{
	T length = sqrtf(mX * mX + mY * mY + mZ * mZ);

	if (length != 0)
	{
		mX / length;
		mY / length;
		mZ / length;
	}
}

template <typename T>
T length()
{
	return sqrtf(mX * mX + mY * mY + mZ * mZ);
}