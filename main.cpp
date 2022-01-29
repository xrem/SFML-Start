/*
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace sf;

const float radius = 70.0f;
const int width = 800;
const int height = 600;

// ��� ���������� Windows (��� �������), ����� ����� ����� �������� WinMain
int WinMain() {
	// ����, �������� 800px �� 600px, �� ������� �� ����� ��������.
	RenderWindow window(VideoMode(width, height), "Roman Makarevich");

	// ������� ������ ���� ����
	CircleShape circle(radius);
	// � ���������� � � ������ ������
	circle.move(width / 2.0 - radius, height / 2.0 - radius);

	// ������ - Sprite - ������ + � ��������� + ��������
	// �������� - ��������, ������� �� ������������ ������ �������

	// �������� �������� � ���������
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
	
	// ������ ������ � �������� ��������� �������� (������)
	Sprite squareSprite(texture);
	Sprite wall(brick_wall, IntRect(0, 0, width, 4 * 28));
	wall.move(0, 140);
	Sprite red(rainbow_texture, IntRect(202, 0, 98, 98));
	red.move(width - 98, 0);

	// ��������� ����� ����� ������� ������ ������ (�����������, �������, 8-��. 16-��.)
	CircleShape triangle(radius, 3);
	RectangleShape square(Vector2f(radius * 2.0f, radius * 2.0f));
	CircleShape octogon(radius, 8);
	CircleShape hexogon(radius, 16);
	// ����������� �� �� �� �������, ��� ��������� ����
	triangle.setPosition(circle.getPosition());
	square.setPosition(circle.getPosition());
	octogon.setPosition(circle.getPosition());
	hexogon.setPosition(circle.getPosition());
	// �������� ������ ������������� �����
	triangle.move(0, -height / 4);
	hexogon.move(0, height / 4);
	square.move(-width / 4, 0);
	octogon.move(width / 4, 0);

	// ������������� �� ������
	ConvexShape star;
	// ����� ���-�� �����
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
	// ����� ����� ���� ������� ����� ���������� �������� � �������
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

	// �������� ������
	Clock clock;
	// 60 Frame Per Second (1000ms / 60 frames) = 16.6ms;
	const float delay = 16.66667f;

	bool isRunning = true;
	while (isRunning) {
		// ���������� ��� �������� ���������� �������.
		Event event;

		// ���������� ������� ������� ��������� � �����
		while (window.pollEvent(event)) {
			// ��������� ��� ���� �������� �������
			if (event.type == Event::EventType::Closed) {
				isRunning = false;
				window.close();
			}
		}

		// �������������� ����� ���� ����� ������.
		if (clock.getElapsedTime().asMilliseconds() < delay) {
			// ��������� ������������� ��������
			continue;
		}
		else {
			clock.restart();
		}

		star.rotate(1);
		square.rotate(1);

		window.clear();

		// ������ ������������� ������
		window.draw(star);
		// ��������� ���� �� �����.
		window.draw(circle);
		// ��������� ������ ������
		window.draw(triangle);
		window.draw(square);
		window.draw(octogon);
		window.draw(hexogon);
	
		// ������ ������
		window.draw(squareSprite);
		//window.draw(wall);
		window.draw(red);

		// ������������ ����.
		window.display();
	}

	return 0;
}
*/