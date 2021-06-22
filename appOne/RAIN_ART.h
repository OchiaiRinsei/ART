#pragma once
#include "ART.h"
class RAIN_ART :
    public ART
{
    int Num = 0;
 //ポインターの使用はclassを付ければincludeしなくていい
    class RAIN* Rains = nullptr;//(0が入るだけ)
public:
    RAIN_ART();
    ~RAIN_ART();
    void perform();
};

