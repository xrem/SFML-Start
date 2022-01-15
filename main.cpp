#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

// ��� ���������� Windows (��� �������), ����� ����� ����� �������� WinMain
int WinMain() {
	// ����, �������� 800px �� 600px, �� ������� �� ����� ��������.
	RenderWindow window(VideoMode(800, 600), "Roman Makarevich");

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

		// ������������ ����.
		window.display();
	}

	return 0;
}