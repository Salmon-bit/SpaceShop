#include <iostream>

#include <SFML/Graphics.hpp>

#include "settings.hpp"

using namespace sf;
using namespace std;

int main()
{
	RenderWindow window(VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), WINDOW_TITLE);
	CircleShape shape(100.f);
	shape.setFillColor(Color::Green);

	while (window.isOpen())
	{
		while (const optional event = window.pollEvent())
		{
			if (event -> is < Event::Closed>()) {
				window.close();
				cout << "Closing Window..." << endl;
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
