#include "Bricks.h"

void Bricks::SetCoords(int inx, int iny, int i, int i_n)
{
	y = iny;
	x = inx;

	if (i_n >= 1)
	{
		x = x + (length + dist) * (i_n);
	}
}

void Bricks::Draw(Graphics& gfx)
{
	for (int posX = x; posX < x + length; posX++)
		for (int posY = y; posY < y + height; posY++)

			gfx.PutPixel(posX, posY, c);
}

void Bricks::Collided(Ball& ball)
{
	if (!collided)
	{
		if (ball.GetPos().x >= x && ball.GetPos().x <= x + length)
		{
			if (ball.GetPos().y <= y + height && ball.GetPos().y + ball.GetHeight()
				>= y)
			{
				ball.SetVY();
				collided = true;
			}
		}
		else if (ball.GetPos().y >= y && ball.GetPos().y <= y + height)
		{
			if (ball.GetPos().x + ball.GetLength() >= x && ball.GetPos().x <= 
				x + length)
			{
				ball.SetVX();
				collided = true;
			}
		}
	}
}

int Bricks::GetX()
{
	return x;
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
