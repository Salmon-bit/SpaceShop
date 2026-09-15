#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main()
{
	RenderWindow window(VideoMode({200, 200}), "Space Shop");
	CircleShape shape(100.f);
	shape.setFillColor(Color::Green);

	while (window.isOpen())
	{
		while (const optional event = window.pollEvent())
		{
			if (event -> is < Event::Closed>())
				window.close();
				cout << "Closing Window..." << endl;
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
