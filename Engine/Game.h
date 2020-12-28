#pragma once
#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Ball.h"
#include "Platform.h"
#include "Bricks.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
private:
	MainWindow& wnd;
	Graphics gfx;

	Platform pltfrm;
	Ball ball;

	static const int BricksLength = 50;
	static const int BricksHeight = 5;
	int in = 0;
	int x = 2;
	int y = 4;
	Bricks bricks[BricksLength];
};