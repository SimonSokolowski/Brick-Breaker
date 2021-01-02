#pragma once
#include "Graphics.h"
#include "Platform.h"

class Ball
{
public:
	void Update(Graphics& gfx, Platform& pltfrm);
	void Draw(Graphics& gfx);
    void SetVX();
    void SetVY();
    int GetX();
    int GetY();
	int GetLength();
	int GetHeight();
private:
	int x = 400;
	int y = 500;
	int vx = -3;
	int vy = 3;
	bool restart = false;
	static constexpr int length = 8;
	static constexpr int height = 8;
};

