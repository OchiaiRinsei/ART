#pragma once
#include "ART.h"
class BUBBLE_ART :
    public ART
{
    int Num = 0;
//ポインターの使用はクラスを付ければincludeしなくていい
    class BUBBLE* Bubbles;
public:
    BUBBLE_ART();
    ~BUBBLE_ART();
    void perform();
};

