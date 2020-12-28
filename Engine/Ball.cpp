#include "Ball.h"

void Ball::Update(Graphics& gfx, Platform& pltfrm)
{
	if (x <= 0) vx = -vx;
	if (x + 8 >= gfx.ScreenWidth) vx = -vx;

	if (y <= 0) vy = -vy;
	if (y + 8 >= gfx.ScreenHeight) vy = -vy;

	if (y + 8 >= pltfrm.Gety() + (pltfrm.GetLength()/2) && x >= 
		pltfrm.Getx() && x <= pltfrm.Getx() + pltfrm.GetLength())
		vy = -vy, vx = -vx;

	if (y + 8 >= pltfrm.Gety() && x >= pltfrm.Getx() && x <= pltfrm.Getx()
		+ pltfrm.GetLength()) vy = -vy, vx = -vx;

	x += vx;
	y += vy;
}

void Ball::Draw(Graphics& gfx)
{
	gfx.PutPixel(x + 0, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 0, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 0, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 0, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 6, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 0, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 6, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 7, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 0, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 6, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 7, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 0, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 6, 255, 255, 255);
	gfx.PutPixel(x + 4, y + 7, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 0, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 6, 255, 255, 255);
	gfx.PutPixel(x + 5, y + 7, 255, 255, 255);
	gfx.PutPixel(x + 6, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 6, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 6, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 6, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 6, y + 5, 255, 255, 255);
	gfx.PutPixel(x + 6, y + 6, 255, 255, 255);
	gfx.PutPixel(x + 7, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 7, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 7, y + 4, 255, 255, 255);
	gfx.PutPixel(x + 7, y + 5, 255, 255, 255);
}

void Ball::SetVX()
{
	vx = -vx;
}

void Ball::SetVY()
{
	vy = -vy;
}

int Ball::GetX()
{
	return x;
}

int Ball::GetY()
{
	return y;
}

int Ball::GetLength()
{
	return length;
}

int Ball::GetHeight()
{
	return height;
}
