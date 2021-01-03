#pragma once
#include "Graphics.h"
#include "Platform.h"
#include "Vec2.h"

class Ball
{
public:
	void Update(Graphics& gfx, Platform& pltfrm, float dt);
	void Draw(Graphics& gfx);
    void SetVX();
    void SetVY();
	Vec2 GetPos() const;
	int GetLength() const;
	int GetHeight() const;
private:
	Vec2 pos = Vec2(600.0f,600.0f);
	Vec2 vel = Vec2(3.0f,3.0f);
	bool restart = false;
	static constexpr int length = 8;
	static constexpr int height = 8;
};

