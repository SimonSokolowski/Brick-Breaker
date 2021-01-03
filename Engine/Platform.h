#pragma once
#include "Graphics.h"
#include "Colors.h"
#include "MainWindow.h"
#include "Vec2.h"

class Platform
{
public:
	void Update(MainWindow& wnd, Graphics& gfx);
	void Draw(Graphics& gfx);
	void RestartPos();
	Vec2 GetPos();
	int GetLength();
private:
	static constexpr int length = 120;
	static constexpr int height = 8;
	Vec2 pos = Vec2(500, 600);
	Vec2 vel = Vec2(0, 0);
	Color c = {13, 15, 155};
};

