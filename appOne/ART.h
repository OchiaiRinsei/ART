#pragma once
class ART
{
public:
	ART(){}
//基底クラスのデストラクタにはvirtualを必ず付ける
	virtual ~ART(){}
	//必ず継承する関数は =0 を付けて純粋仮想関数にする
	virtual void perform()=0;
};

