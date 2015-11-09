#include "Human.h"

namespace Entity
{
	Human::Human(GUI::BoardPanel* boardPanel)
		: Player()
	{
		this->boardPanel = boardPanel;
	}

	void Human::MakeMove()
	{
	}
}