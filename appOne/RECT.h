#pragma once
#include"libOne.h"
class RECT1
{
	float Len = 0;
	COLOR Color;
	VECTOR2 Pos, Vec;
	float Angle;
	float AngSpeed;
public:
	RECT1();
	~RECT1();
	void perform();
};

