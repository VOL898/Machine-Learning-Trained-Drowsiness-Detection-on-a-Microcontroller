#pragma once
#include "IMPU.h"

class WMPU: public IMPU
{
	virtual void Init() override;
	virtual void getYawPitchRoll(float& y, float& p, float& r) override;

    void guessOffsets();
};
