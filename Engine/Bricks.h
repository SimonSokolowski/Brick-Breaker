#pragma once
#include "Graphics.h"
#include "Colors.h"
#include "Ball.h"

class Bricks
{
public:
	void Draw(Graphics& gfx);
	void SetCoords(Vec2 pos_in, int i, int i_n);
	void Collided(Ball& ball);
	bool GetCollided();
	Vec2 GetPos();
	int GetDist();
	int GetLength();
	int GetHeight();
private:
	static constexpr int ScreenWidth = Graphics::ScreenWidth;
	static constexpr int dist = 4;
	static constexpr int numBricks = 10;
	static constexpr int length = (ScreenWidth - (dist* numBricks))
		/ (numBricks);
	static constexpr int height = 30;
	Vec2 pos;
	bool collided = false;
	bool collidedy = false;
	bool collidedx = false;
	Color c = { 255,255,255 };
};