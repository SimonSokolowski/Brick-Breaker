#include "Ball.h"

void Ball::Update(Graphics& gfx, Platform& pltfrm, float dt)
{
	x += vx * dt * 60;
	y += vy * dt * 60;
	
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
	const int intx = int(x);
	const int inty = int(y);

	gfx.PutPixel(intx + 0, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 0, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 0, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 0, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 1, inty + 1, 255, 255, 255);
	gfx.PutPixel(intx + 1, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 1, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 1, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 1, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 1, inty + 6, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 0, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 1, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 6, 255, 255, 255);
	gfx.PutPixel(intx + 2, inty + 7, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 0, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 1, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 6, 255, 255, 255);
	gfx.PutPixel(intx + 3, inty + 7, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 0, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 1, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 6, 255, 255, 255);
	gfx.PutPixel(intx + 4, inty + 7, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 0, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 1, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 6, 255, 255, 255);
	gfx.PutPixel(intx + 5, inty + 7, 255, 255, 255);
	gfx.PutPixel(intx + 6, inty + 1, 255, 255, 255);
	gfx.PutPixel(intx + 6, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 6, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 6, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 6, inty + 5, 255, 255, 255);
	gfx.PutPixel(intx + 6, inty + 6, 255, 255, 255);
	gfx.PutPixel(intx + 7, inty + 2, 255, 255, 255);
	gfx.PutPixel(intx + 7, inty + 3, 255, 255, 255);
	gfx.PutPixel(intx + 7, inty + 4, 255, 255, 255);
	gfx.PutPixel(intx + 7, inty + 5, 255, 255, 255);
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