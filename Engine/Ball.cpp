#include "Ball.h"

void Ball::Update(Graphics& gfx, Platform& pltfrm)
{
	x += vx;
	y += vy;
	
	if (x <= 0)
	{
		vx = -vx;
		x = 1;
	}
	if (x + length >= gfx.ScreenWidth)
	{
		x = gfx.ScreenWidth - length - 1;
		vx = -vx;
	}

	if (y <= 0)
	{
		vy = -vy;
		y = 1;
	}

	if (y + height >= gfx.ScreenHeight)
	{
		y = gfx.ScreenHeight - height - 1;
		restart = true;
	}

	if (restart)
	{
		x = 400;
		y = 500;
		restart = false;
		pltfrm.RestartPos();
	}

	if (y + height >= pltfrm.Gety() && x >= pltfrm.Getx() && x <= pltfrm.Getx()
		+ pltfrm.GetLength()) vy = -vy;

	if (vx > 0 && y + height >= pltfrm.Gety() && x >= pltfrm.Getx()
		&& x <= pltfrm.Getx() + (pltfrm.GetLength() / 2))
	{
		vx = -vx;
	}
	
	if (vx < 0 && y + height >= pltfrm.Gety() && x >= (pltfrm.Getx() +
		(pltfrm.GetLength() / 2)) && x <= (pltfrm.Getx() + pltfrm.GetLength()))
	{
		vx = -vx;
	}
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