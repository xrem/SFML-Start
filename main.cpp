#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

// Для подсистемы Windows (без консоли), точку входа нужно называть WinMain
int WinMain() {
	// Окно, размером 800px на 600px, на котором бы будем рисовать.
	RenderWindow window(VideoMode(800, 600), "Roman Makarevich");

	bool isRunning = true;
	while (isRunning) {
		// Переменная для хранения последнего события.
		Event event;

		// Опрашиваем события которые произошли с окном
		while (window.pollEvent(event)) {
			// Проверяем что окно захотели закрыть
			if (event.type == Event::EventType::Closed) {
				isRunning = false;
				window.close();
			}
		}

		// Отрисовываем окно.
		window.display();
	}

	return 0;
}