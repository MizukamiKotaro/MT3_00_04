#pragma once
#include"MyVector3.h"

class MyMatrix4x4
{
public:
	static MyMatrix4x4 Add(const MyMatrix4x4& m1, const MyMatrix4x4& m2);

	static MyMatrix4x4 Subtract(const MyMatrix4x4& m1, const MyMatrix4x4& m2);

	static MyMatrix4x4 Multiply(const MyMatrix4x4& m1, const MyMatrix4x4& m2);

	static MyMatrix4x4 Multiply(const float& num, const MyMatrix4x4& m);

	static MyVector3 Multiply(const MyVector3& vector, const MyMatrix4x4& m);

	static MyMatrix4x4 Inverse(const MyMatrix4x4& m);

	//転置行列
	static MyMatrix4x4 Transpose(const MyMatrix4x4& m);

	//単位行列
	static MyMatrix4x4 MakeIdentity4x4();

	static MyMatrix4x4 MakeTranslateMatrix(const MyVector3& translate);

	static MyMatrix4x4 MakeScaleMatrix(const MyVector3& scale);

	static MyVector3 Transform(const MyVector3& vector, const MyMatrix4x4& m);

	static MyMatrix4x4 MakeRotateXMatrix(float radian);

	static MyMatrix4x4 MakeRotateYMatrix(float radian);

	static MyMatrix4x4 MakeRotateZMatrix(float radian);

public:
	float m[4][4];
};