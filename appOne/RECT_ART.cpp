#include "RECT_ART.h"
#include"RECT.h"
RECT_ART::RECT_ART() {
	Num = 50;
	Rects = new RECT1[Num];
}
RECT_ART::~RECT_ART() {
	delete[] Rects;
}
void RECT_ART::perform() {
	colorMode(RGB);
	clear(120, 220, 250);
	fill(214,255,117);
	rect(0, 0, width/2,height);
	for (int i = 0; i < Num; i++) {
		Rects[i].perform();
	}
}