#pragma once
# include <Siv3D.hpp>

class Character
{
public:
	Character();
	~Character();
	void draw();

private:
	Rect character;
	int32 x;
	int32 y;
	int32 width;
	int32 height;
};