#pragma once
#include "ART.h"
class BUBBLE_ART :
    public ART
{
    int Num = 0;
//�|�C���^�[�̎g�p�̓N���X��t�����include���Ȃ��Ă���
    class BUBBLE* Bubbles;
public:
    BUBBLE_ART();
    ~BUBBLE_ART();
    void perform();
};

