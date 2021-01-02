#pragma once
#include "Graphics.h"
#include "Platform.h"

class Ball
{
public:
	void Update(Graphics& gfx, Platform& pltfrm, float dt);
	void Draw(Graphics& gfx);
    void SetVX();
    void SetVY();
    int GetX();
    int GetY();
	int GetLength();
	int GetHeight();
private:
	float x = 400;
	float y = 500;
	float vx = -4;
	float vy = 4;
	bool restart = false;
	static constexpr int length = 8;
	static constexpr int height = 8;
};

