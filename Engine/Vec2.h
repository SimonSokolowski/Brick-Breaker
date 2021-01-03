#pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_in, float y_in);
	Vec2 operator+(const Vec2& rhs) const; // lhs + rhs
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator*(float rhs) const; // lhs * rhs
	Vec2& operator*=(float rhs);
	Vec2 operator-(const Vec2& rhs) const; // lhs - rhs
	Vec2& operator-=(const Vec2& rhs);
	float GetLength() const;
	float GetLengthSq() const;
public:
	float x;
	float y;
};