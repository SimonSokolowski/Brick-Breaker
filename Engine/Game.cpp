#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
	for (int i = 0; i < BricksLength; i++)
	{	
		if (in >= 10)
		{
			y += bricks[i].GetHeight() + bricks[i].GetDist();
			in = 0;
		}
		bricks[i].SetCoords(x, y, i, in);
		in += 1;
	}
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	for (int i = 0; i < BricksLength; i++)
	{
		bricks[i].Collided(ball);
	}

	ball.Update(gfx, pltfrm);
	pltfrm.Update(wnd, gfx);
}

void Game::ComposeFrame()
{
	for (int i = 0; i < BricksLength; i++)
	{
		if (!bricks[i].GetCollided())
		bricks[i].Draw(gfx);
	}

	ball.Draw(gfx);
	pltfrm.Draw(gfx);
}