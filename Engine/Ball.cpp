#include "Ball.h"

void Ball::Update(Graphics& gfx, Platform& pltfrm, float dt)
{
	pos += vel * dt * 60;
	
	if (pos.x <= 0)
	{
		vel.x = -vel.x;
		pos.x = 1;
	}
	if (pos.x + length >= gfx.ScreenWidth)
	{
		pos.x = gfx.ScreenWidth - length - 1;
		vel.x = -vel.x;
	}

	if (pos.y <= 0)
	{
		vel.y = -vel.y;
		pos.y = 1;
	}

	if (pos.y + height >= gfx.ScreenHeight)
	{
		pos.y = gfx.ScreenHeight - height - 1;
		restart = true;
	}

	if (restart)
	{
		pos.x = 400;
		pos.y = 500;
		restart = false;
		pltfrm.RestartPos();
	}

	if (pos.y + height >= pltfrm.GetPos().y && pos.x >= pltfrm.GetPos().x && 
		pos.x <= pltfrm.GetPos().x + pltfrm.GetLength()) vel.y = -vel.y;

	if (vel.x> 0 && pos.y + height >= pltfrm.GetPos().y && pos.x >= 
		pltfrm.GetPos().x && pos.x <= pltfrm.GetPos().x + 
		(pltfrm.GetLength() / 2))
	{
		vel.x= -vel.x;
	}
	
	if (vel.x< 0 && pos.y + height >= pltfrm.GetPos().y && pos.x >= 
		(pltfrm.GetPos().x + (pltfrm.GetLength() / 2)) && pos.x <= 
		(pltfrm.GetPos().x + pltfrm.GetLength()))
	{
		vel.x= -vel.x;
	}
}

void Ball::Draw(Graphics& gfx)
{
	const int intx = int(pos.x);
	const int inty = int(pos.y);

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
	vel.x = -vel.x;
}

void Ball::SetVY()
{
	vel.y = -vel.y;
}

Vec2 Ball::GetPos() const
{
	return pos;
}


int Ball::GetLength() const
{
	return length;
}

int Ball::GetHeight() const
{
	return height;
}