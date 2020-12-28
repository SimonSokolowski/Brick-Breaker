#pragma once
#include "Graphics.h"
#include "Colors.h"
#include "MainWindow.h"

class Platform
{
public:
	void Update(MainWindow& wnd, Graphics& gfx);
	void Draw(Graphics& gfx);
	int Getx();
	int Gety();
	int GetLength();
private:
	static constexpr int length = 120;
	static constexpr int height = 8;
	int x = 350;
	int y = 550;
	int vx = 0;
	Color c = {13, 15, 155};
};

