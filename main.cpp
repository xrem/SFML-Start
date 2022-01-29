/*
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace sf;

const float radius = 70.0f;
const int width = 800;
const int height = 600;

// Для подсистемы Windows (без консоли), точку входа нужно называть WinMain
int WinMain() {
	// Окно, размером 800px на 600px, на котором бы будем рисовать.
	RenderWindow window(VideoMode(width, height), "Roman Makarevich");

	// Создали фигуру типа Круг
	CircleShape circle(radius);
	// и разместили её в центре экрана
	circle.move(width / 2.0 - radius, height / 2.0 - radius);

	// Спрайт - Sprite - Фигура + её поведение + текстура
	// Текстура - картинка, которую вы накладываете поверх объекта

	// Загрузка текстуры в контейнер
	std::string path_to_texture = "C:\\Users\\XAdmin\\source\\repos\\SFML-Start\\texture.png";
	Texture texture;
	texture.loadFromFile(path_to_texture);

	std::string path_to_brick_wall = "C:\\Users\\XAdmin\\source\\repos\\SFML-Start\\brick_wall.png";
	Texture brick_wall;
	brick_wall.loadFromFile(path_to_brick_wall);
	brick_wall.setRepeated(true);

	std::string path_to_rainbow_texture = "C:\\Users\\XAdmin\\source\\repos\\SFML-Start\\rainbow.png";
	Texture rainbow_texture;
	rainbow_texture.loadFromFile(path_to_rainbow_texture);
	
	// Создаём объект к которому применяем текстуру (спрайт)
	Sprite squareSprite(texture);
	Sprite wall(brick_wall, IntRect(0, 0, width, 4 * 28));
	wall.move(0, 140);
	Sprite red(rainbow_texture, IntRect(202, 0, 98, 98));
	red.move(width - 98, 0);

	// Используя класс круга создали другие фигуры (Триугольник, квадрат, 8-уг. 16-уг.)
	CircleShape triangle(radius, 3);
	RectangleShape square(Vector2f(radius * 2.0f, radius * 2.0f));
	CircleShape octogon(radius, 8);
	CircleShape hexogon(radius, 16);
	// Переместили на ту же поцизию, где находится круг
	triangle.setPosition(circle.getPosition());
	square.setPosition(circle.getPosition());
	octogon.setPosition(circle.getPosition());
	hexogon.setPosition(circle.getPosition());
	// Сдвигаем фигуры отностительно круга
	triangle.move(0, -height / 4);
	hexogon.move(0, height / 4);
	square.move(-width / 4, 0);
	octogon.move(width / 4, 0);

	// Многоугольник по точкам
	ConvexShape star;
	// Задаём кол-во точек
	star.setPointCount(10);
	star.setPoint(0, Vector2f(400.0f, 100.0f));
	star.setPoint(1, Vector2f(450.0f, 200.0f));
	star.setPoint(2, Vector2f(700.0f, 200.0f));
	star.setPoint(3, Vector2f(500.0f, 300.0f));
	star.setPoint(4, Vector2f(600.0f, 500.0f));
	star.setPoint(5, Vector2f(400.0f, 400.0f));
	star.setPoint(6, Vector2f(200.0f, 500.0f));
	star.setPoint(7, Vector2f(300.0f, 300.0f));
	star.setPoint(8, Vector2f(100.0f, 200.0f));
	star.setPoint(9, Vector2f(350.0f, 200.0f));
	// Задаём жёлтый цвет заливки путем смешивания красного и зелёного
	star.setFillColor(Color(255, 255, 0));
	const Color green(0x15FA2CFF);
	circle.setOutlineColor(green);
	triangle.setOutlineColor(green);
	square.setOutlineColor(green);
	octogon.setOutlineColor(green);
	hexogon.setOutlineColor(green);
	circle.setOutlineThickness(5.0f);
	triangle.setOutlineThickness(5.0f);
	square.setOutlineThickness(5.0f);
	octogon.setOutlineThickness(5.0f);
	hexogon.setOutlineThickness(5.0f);

	// Объявяем таймер
	Clock clock;
	// 60 Frame Per Second (1000ms / 60 frames) = 16.6ms;
	const float delay = 16.66667f;

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

		// Перерисовываем сцену если время пришло.
		if (clock.getElapsedTime().asMilliseconds() < delay) {
			// Добавляем искустевенную задержку
			continue;
		}
		else {
			clock.restart();
		}

		star.rotate(1);
		square.rotate(1);

		window.clear();

		// Рисуем многоугольник звезда
		window.draw(star);
		// Добавляем круг на холст.
		window.draw(circle);
		// Добавляем прочие фигуры
		window.draw(triangle);
		window.draw(square);
		window.draw(octogon);
		window.draw(hexogon);
	
		// Рисуем спрайт
		window.draw(squareSprite);
		//window.draw(wall);
		window.draw(red);

		// Отрисовываем окно.
		window.display();
	}

	return 0;
}
*/