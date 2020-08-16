#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
void main()
{
	sf::RenderWindow window(sf::VideoMode(100, 100), "title", sf::Style::Default);
	sf::RectangleShape rect;


	while (window.isOpen())
	{
		sf::Event evt;
		while (window.pollEvent(evt))
		{
			if (evt.type == evt.Closed)
			{
				cout << "Closed\n";
				window.close();
			}
		}
	}
	system("pause");
}