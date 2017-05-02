# include <Siv3D.hpp>
# include "Character.h"

void Main()
{
	Window::SetTitle(L"桜前線");
	
	Character player;

	while (System::Update())
	{
		player.draw();
	}
}
