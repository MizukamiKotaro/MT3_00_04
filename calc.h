#pragma once
#include"MyVector2.h"
#include"MyVector3.h"

class calc
{
public:
	//正規化
	MyVector2 Normalize(const MyVector2& v);
	MyVector3 Normalize(const MyVector3& v);

	//内積
	float Dot(const MyVector2& v1, const MyVector2& v2);
	float Dot(const MyVector3& v1, const MyVector3& v2);

	//外積
	
};

