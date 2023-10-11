#pragma once
class IMPU
{
	public:
		virtual void Init() = 0;
		virtual void getYawPitchRoll(float& y, float& p, float& r) = 0;

};

