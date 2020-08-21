#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
void main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "title", sf::Style::Default);//this line creates a window for graphics
	sf::RectangleShape rect(sf::Vector2f(100.0f,100.0f));//this is creating a rectangular shape
	rect.setFillColor(sf::Color::Red);
	//this whole while is used for window event checking while opening 
	while (window.isOpen())
	{
		sf::Event evt;//this is creating variable of event 
		while (window.pollEvent(evt))//this while checks event occur or not
		{
			//this switch checks the event like close ,resize etc
			switch (evt.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized://execute if we resize the window
				cout << "the width" << evt.size.width << "height :" << evt.size.height << '\n';
				break;
			}
			if (evt.type == evt.Closed)//this if is used when we try to close the graphic window
			{
				cout << "Closed\n";
				window.close();
			}
			window.draw(rect);
			window.display();
		}
	}
	system("pause");
}