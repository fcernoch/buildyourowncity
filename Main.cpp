#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Types.h"

static constexpr inline std::string_view title = "buildyourowncity";
static constexpr inline Types::u32 win_width = 800;
static constexpr inline Types::u32 win_height = 600;
int main()
{
	sf::RenderWindow win(sf::VideoMode({ win_width, win_height}), title);

	while (win.isOpen()) {
		while (const std::optional event = win.pollEvent()) {
			if (event->is<sf::Event::Closed>())
				win.close();
		}

		win.clear();
		win.display();
	}


	return EXIT_SUCCESS;
}