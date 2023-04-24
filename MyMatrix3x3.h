#pragma once
#include"MyVector2.h"

class MyMatrix3x3 
{
public:
	static MyMatrix3x3 Add(const MyMatrix3x3 m1, const MyMatrix3x3& m2);

	static MyMatrix3x3 Subtract(const MyMatrix3x3& m1, const MyMatrix3x3& m2);

	static MyMatrix3x3 Multiply(const MyMatrix3x3& m1, const MyMatrix3x3& m2);

	static MyMatrix3x3 Multiply(const float& num, const MyMatrix3x3& m);

	static MyVector2 Multiply(const MyVector2& vector, const MyMatrix3x3& m);

	static MyMatrix3x3 MakeAffineTransformMatrix(MyVector2& scale, float& radian, MyVector2& translate);

	static float SarrasRule(const MyMatrix3x3& m);

public:
	float m[3][3];
};

