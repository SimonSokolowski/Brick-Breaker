#include "Platform.h"

void Platform::Update(MainWindow& wnd, Graphics& gfx)
{
	if (wnd.kbd.KeyIsPressed(VK_RIGHT)) vel.x= 2;
	else if (wnd.kbd.KeyIsPressed(VK_LEFT)) vel.x= -2;
	else vel.x= 0;

	if (pos.x<= 0) vel.x= 0, pos.x+= 2;
	if (pos.x+ length >= gfx.ScreenWidth) vel.x= 0, pos.x-= 2;

	pos.x+= vel.x;

}

void Platform::Draw(Graphics& gfx)
{
	for (int ix = pos.x; ix<  pos.x+ length; ix++)
	{
		for (int iy = pos.y; iy < pos.y+ height; iy++)
		{
			gfx.PutPixel(ix, iy, c);
		}
	}
}

void Platform::RestartPos()
{
	pos.x= 350;
	pos.y= 550;
}

Vec2 Platform::GetPos()
{
	return pos;
}

int Platform::GetLength()
{
	return length;
}
