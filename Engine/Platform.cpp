#include "Platform.h"

void Platform::Update(MainWindow& wnd, Graphics& gfx)
{
	if (wnd.kbd.KeyIsPressed(VK_RIGHT)) vx = 2;
	else if (wnd.kbd.KeyIsPressed(VK_LEFT)) vx = -2;
	else vx = 0;

	if (x <= 0) vx = 0, x += 2;
	if (x + length >= gfx.ScreenWidth) vx = 0, x -= 2;

	x += vx;

}

void Platform::Draw(Graphics& gfx)
{
	for (int ix = x; ix <  x + length; ix++)
	{
		for (int iy = y; iy < y + height; iy++)
		{
			gfx.PutPixel(ix, iy, c);
		}
	}
}

void Platform::RestartPos()
{
	x = 350;
	y = 550;
}

int Platform::Getx()
{
	return x;
}

int Platform::Gety()
{
	return y;
}

int Platform::GetLength()
{
	return length;
}
