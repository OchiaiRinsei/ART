#pragma once
class ART
{
public:
	ART(){}
//���N���X�̃f�X�g���N�^�ɂ�virtual��K���t����
	virtual ~ART(){}
	//�K���p������֐��� =0 ��t���ď������z�֐��ɂ���
	virtual void perform()=0;
};

