#include "Character.h"

Character::Character()
{
	x = 0;
	y = 0;
	width = 20;
	height = 20;
	character.setPos(x, y);
	character.setSize(width, height);
}

Character::~Character()
{
}

// •`‰æŠÖ”
void Character::draw() {
	character.draw(Palette::Lightgreen);
}