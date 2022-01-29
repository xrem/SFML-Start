#include <SFML/Graphics.hpp>

using namespace sf;

const float delay = 500.0f;
Color white(255, 255, 255);
Color red(255, 0, 0);
Color yellow(255, 255, 0);
Color green(0, 255, 0);
Color transparent(0, 0, 0, 0);

bool red_enabled = false;
bool yellow_enabled = false;
bool green_enabled = false;
unsigned int tick = 0;

int WinMain() {
	RenderWindow window(VideoMode(373, 373), "Traffic lights");
	Clock clock;
	Texture traffic_light_texture;
	traffic_light_texture.loadFromFile("C:\\Users\\XAdmin\\source\\repos\\SFML-Start\\traffic_light.png");
	Texture light;
	light.loadFromFile("C:\\Users\\XAdmin\\source\\repos\\SFML-Start\\light.png");

	Sprite traffic_light(traffic_light_texture, IntRect(0, 0, 373, 373));
	Sprite red_light(light);
	Sprite yellow_light(light);
	Sprite green_light(light);
	red_light.setPosition(168, 98);
	yellow_light.setPosition(168, 168);
	green_light.setPosition(168, 238);


	bool isRunning = true;
	while (isRunning) {
		Event event;
		
		while (window.pollEvent(event)) {
			if (event.type == Event::EventType::Closed) {
				isRunning = false;
				window.close();
			}
		}

		if (clock.getElapsedTime().asMilliseconds() >= delay) {
			clock.restart();
			tick++;
			
			window.clear(white);
			switch (tick)
			{
				case 1:
					red_enabled = true;
					break;
				case 10:
					yellow_enabled = true;
					break;
				case 12:
					red_enabled = false;
					yellow_enabled = false;
					green_enabled = true;
					break;
				case 30:
					green_enabled = false;
					break;
				case 31:
					green_enabled = true;
					break;
				case 32:
					green_enabled = false;
					break;
				case 33:
					green_enabled = true;
					break;
				case 34:
					green_enabled = false;
					red_enabled = true;
					break;
				case 35:
					tick = 0;
					break;
			}

			// обработка состояние
			red_light.setColor(red_enabled ? red : transparent);
			yellow_light.setColor(yellow_enabled ? yellow : transparent);
			green_light.setColor(green_enabled ? green : transparent);
			
			window.draw(traffic_light);
			window.draw(red_light);
			window.draw(yellow_light);
			window.draw(green_light);

			window.display();
		}
	}

	return 0;
}