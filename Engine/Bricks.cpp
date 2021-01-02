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
		if (ball.GetX() >= x && ball.GetX() <= x + length)
		{
			if (ball.GetY() <= y + height && ball.GetY() + ball.GetHeight()
				>= y)
			{
				ball.SetVY();
				collided = true;
			}
		}
		else if (ball.GetY() >= y && ball.GetY() <= y + height)
		{
			if (ball.GetX() + ball.GetLength() >= x && ball.GetX() <= 
				x + length)
			{
				ball.SetVX();
				collided = true;
			}
		}
	}

	//if (!collidedx)
	//{
	//	if (((ball.GetX() >= x && ball.GetX() <= x + length) || (ball.GetX() +
	//		ball.GetLength() > x && ball.GetX() + ball.GetLength() <= x +
	//		length)) && ((ball.GetY() <= y + height && ball.GetY() +
	//			ball.GetHeight() >= y)))
	//	{
	//		collided = true, collidedx = true, ball.SetVX();
	//	}
	//}
	//
	//if (!collidedy)
	//{ 
	//	if (((ball.GetY() >= y && ball.GetY() <= y + height) || (ball.GetY()
	//		+ ball.GetHeight() >= y && ball.GetY() + ball.GetHeight() <= y 
	//		+ height)) && ((ball.GetX() + ball.GetLength() >= x && ball.GetX()
	//		<= x + length)))
	//	{
	//		collided = true, collidedy = true, ball.SetVY();
	//	}
	//}
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
