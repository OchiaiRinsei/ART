#include "RECT.h"
RECT1::RECT1() {
	Len = random() % 250 + 30.0f;
	float hue = random() % 360;
	Angle = random(0.0f, 360.0f);
	AngSpeed = 3.0f;
	if (int i = random() % 2 == 0) {
		AngSpeed = -AngSpeed;
	}
	Color = COLOR(hue, 128, 255, 128);
	Pos.x = random() % (int)width;
	Pos.y = random() % (int)height;
	Vec.x = random(-5.0, 5.0f);
	Vec.y = random(-5.0, 5.0f);
}
RECT1::~RECT1() {
}
void RECT1::perform() {
	Pos += Vec;
	Angle += AngSpeed;
	if (Pos.x < -Len)Vec.x = -Vec.x;
	else if (Pos.x > width)Vec.x = -Vec.x;
	else if (Pos.y < -Len)Vec.y = -Vec.y;
	else if (Pos.y > height)Vec.y = -Vec.y;
	noStroke();
	colorMode(HSV);
	angleMode(DEGREES);
	fill(Color);
	rect(Pos.x, Pos.y, Len,Len,Angle);
}