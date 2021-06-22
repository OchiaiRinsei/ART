#pragma once
#include"libOne.h"
class SQUARE
{
	float Len=0;
	COLOR Color;
	VECTOR2 Pos, Vec;
	float Angle = 0;
	float AngSpeed;
public:
	SQUARE();
	~SQUARE();
	void init();
	void perform();
};

