//SoundSet.h

#ifndef SOUNDSET_H
#define SOUNDSET_H

#include "StateManager.h"
#include "IOsound.h"
#include <sstream>

class SoundSet : public StateManager
{
public:
	virtual int Run(sf::RenderWindow &window);
private:
	sf::Event event;
	int volume;
	int selection;
	std::stringstream selectionStream;
	bool running;
	sf::Clock clock;
	float elapsedTime;
};

#endif