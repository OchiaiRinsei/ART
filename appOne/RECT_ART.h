#pragma once
#include "ART.h"
class RECT_ART :
    public ART
{
    int Num = 0;
    class RECT1* Rects;
public:
    RECT_ART();
    ~RECT_ART();
    void perform();
};
