#include <SFML/Graphics.hpp>

class button
{
public:
	int x;
	int y;

	button(int x, int y);
	void buttonInit();
	void display();
};

//constructor
button::button(int x, int y)
{
	this->x = x;
	this->y = y;
}

void button::buttonInit() {
	sf::RectangleShape but1(sf::Vector2f(120, 50));
	but1.setSize(sf::Vector2f(400, 100));
	but1.setPosition(sf::Vector2f(this->x, this->y));
}

void button::display() {
	window.draw(but1);
}