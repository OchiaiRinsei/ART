#pragma once
#include "ART.h"
class RAIN_ART :
    public ART
{
    int Num = 0;
 //�|�C���^�[�̎g�p��class��t�����include���Ȃ��Ă���
    class RAIN* Rains = nullptr;//(0�����邾��)
public:
    RAIN_ART();
    ~RAIN_ART();
    void perform();
};

