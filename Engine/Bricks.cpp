#include "Bricks.h"

void Bricks::SetCoords(Vec2 pos_in, int i, int i_n)
{
	pos = pos_in;

	if (i_n >= 1)
	{
		pos.x = pos.x + (length + dist) * (i_n);
	}
}

void Bricks::Draw(Graphics& gfx)
{
	for (int posX = pos.x; posX < pos.x+ length; posX++)
		for (int posY = pos.y; posY < pos.y + height; posY++)

			gfx.PutPixel(posX, posY, c);
}

void Bricks::Collided(Ball& ball)
{
	if (!collided)
	{
		if (ball.GetPos().x > pos.x && ball.GetPos().x < pos.x + length)
		{
			if (ball.GetPos().y < pos.y + height && ball.GetPos().y + ball.GetHeight()
				> pos.y)
			{
				ball.SetVY();
				collided = true;
			}
		}
		else if (ball.GetPos().y > pos.y && ball.GetPos().y < pos.y + height)
		{
			if (ball.GetPos().x + ball.GetLength() > pos.x && ball.GetPos().x <
				pos.x + length)
			{
				ball.SetVX();
				collided = true;
			}
		}
	}
}

Vec2 Bricks::GetPos()
{
	return pos;
}

int Bricks::GetDist()
{
	return dist;
}

int Bricks::GetLength()
{
	return length;
}

int Bricks::GetHeight()
{
	return height;
}

bool Bricks::GetCollided()
{
	return collided;
}
