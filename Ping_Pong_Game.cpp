// Ping_Pong_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int getRandomSpeed()
{
	srand(time(NULL));
	int a = 5;
	if (rand() % 2)
		a = -a;
	std::cout << a << std::endl;
	return a;
}

int main()
{
	bool gameOn = false;
	bool gameOver = false;

	int keyPressed_playerOne = 0;
	int keyPressed_playerTwo = 0;

	srand(time(0));
	int X = getRandomSpeed();
	int Y = getRandomSpeed();

    sf::RenderWindow window(sf::VideoMode(1000.f, 750.f), "Ping Pong Game");
    window.setFramerateLimit(60);

	sf::RectangleShape playerOne(sf::Vector2f(20.f, 75.f));
	playerOne.setPosition(sf::Vector2f(50.f, window.getSize().y / 2 - playerOne.getSize().y / 2));
	playerOne.setFillColor(sf::Color(0, 0, 0));
	int playerOneScore = 0;

	sf::RectangleShape playerTwo(sf::Vector2f(20.f, 75.f));
	playerTwo.setPosition(sf::Vector2f(window.getSize().x-50.f, window.getSize().y / 2 - playerTwo.getSize().y / 2));
	playerTwo.setFillColor(sf::Color(0, 0, 0));
	int playerTwoScore = 0;

	sf::RectangleShape square(sf::Vector2f(20.f, 20.f));
	square.setPosition(sf::Vector2f(window.getSize().x/2-square.getSize().x/2,window.getSize().y/2-square.getSize().y/2));
	square.setFillColor(sf::Color(0,0,0));

	sf::Font font;
	if (!font.loadFromFile("Fonts/Roboto-VariableFont_wdth,wght.ttf"))
		throw("Failed to load the Font");

	sf::Text playerOneScoreDisplay;
	playerOneScoreDisplay.setFont(font);
	playerOneScoreDisplay.setCharacterSize(50);
	playerOneScoreDisplay.setFillColor(sf::Color(0,0,0));
	playerOneScoreDisplay.setPosition(sf::Vector2f(window.getSize().x/2 - playerOneScoreDisplay.getCharacterSize(), 0.f));
	playerOneScoreDisplay.setString(std::to_string(playerOneScore));

	sf::Text playerTwoScoreDisplay;
	playerTwoScoreDisplay.setFont(font);
	playerTwoScoreDisplay.setCharacterSize(50);
	playerTwoScoreDisplay.setFillColor(sf::Color(0,0,0));
	playerTwoScoreDisplay.setPosition(sf::Vector2f(window.getSize().x / 2, 0.f));
	playerTwoScoreDisplay.setString(std::to_string(playerTwoScore));

	sf::Text gameOverText;
	gameOverText.setFont(font);
	gameOverText.setCharacterSize(100);
	gameOverText.setFillColor(sf::Color(0, 0, 0));
	gameOverText.setString("Game Over");
	gameOverText.setOrigin(sf::Vector2f(gameOverText.getLocalBounds().left + gameOverText.getLocalBounds().width / 2.f, gameOverText.getLocalBounds().top + gameOverText.getLocalBounds().height));
	gameOverText.setPosition(sf::Vector2f(window.getSize().x / 2.f, window.getSize().y / 2.f));

	sf::Text playerWonText;
	playerWonText.setFont(font);
	playerWonText.setCharacterSize(50);
	playerWonText.setFillColor(sf::Color(0, 0, 0));
	playerWonText.setString("Player One Won");
	playerWonText.setOrigin(sf::Vector2f(playerWonText.getLocalBounds().left + playerWonText.getLocalBounds().width / 2.f, playerWonText.getLocalBounds().top));
	playerWonText.setPosition(sf::Vector2f(window.getSize().x / 2.f, window.getSize().y / 2.f));


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
				window.close();
		}

		keyPressed_playerOne++;
		keyPressed_playerTwo++;

		//Player One Movement
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && keyPressed_playerOne >= 8 && playerOne.getPosition().y>=0)
		{
			playerOne.move(sf::Vector2f(0.f, -25.f));
			keyPressed_playerOne = 0;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && keyPressed_playerOne >= 8 && playerOne.getPosition().y<=window.getSize().y-playerOne.getSize().y)
		{
			playerOne.move(sf::Vector2f(0.f, 25.f));
			keyPressed_playerOne = 0;
		}

		//Player Two Movement
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && keyPressed_playerTwo >= 8 && playerTwo.getPosition().y >= 0)
		{
			playerTwo.move(sf::Vector2f(0.f, -25.f));
			keyPressed_playerTwo = 0;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && keyPressed_playerTwo >= 8 && playerTwo.getPosition().y <= window.getSize().y - playerTwo.getSize().y)
		{
			playerTwo.move(sf::Vector2f(0.f, 25.f));
			keyPressed_playerTwo = 0;
		}

		//Ball Movement
		if (gameOn)
			square.move(sf::Vector2f(X, Y));
		if (square.getPosition().y <= 0 || square.getPosition().y >= window.getSize().y - square.getSize().y)
			Y = -Y;
		if ((square.getGlobalBounds().intersects(playerOne.getGlobalBounds()) || square.getGlobalBounds().intersects(playerTwo.getGlobalBounds())) && (square.getPosition().x>=playerOne.getPosition().x+playerOne.getSize().x || square.getPosition().x+square.getSize().x<=playerTwo.getPosition().x))
			X = -X;
		if (square.getPosition().x <= 0)
		{
			playerOneScore++;
			std::cout << playerOneScore << std::endl;
			square.setPosition(sf::Vector2f(window.getSize().x / 2 - square.getSize().x / 2, window.getSize().y / 2 - square.getSize().y / 2));
			playerOneScoreDisplay.setString(std::to_string(playerOneScore));
			X = getRandomSpeed();
			Y = getRandomSpeed();
			gameOn = false;
		}
		if (square.getPosition().x >= window.getSize().x-square.getSize().x)
		{
			playerTwoScore++;
			std::cout << playerTwoScore << std::endl;
			square.setPosition(sf::Vector2f(window.getSize().x / 2 - square.getSize().x / 2, window.getSize().y / 2 - square.getSize().y / 2));
			playerTwoScoreDisplay.setString(std::to_string(playerTwoScore));
			X = getRandomSpeed();
			Y = getRandomSpeed();
			gameOn = false;
		}

		if (playerOneScore == 7)
		{
			playerWonText.setString("Player One Won");
			gameOver = true;
		}
		if (playerTwoScore == 7)
		{
			playerWonText.setString("Player Two Won");
			gameOver = true;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && !gameOn && !gameOver)
			gameOn = true;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && !gameOn && gameOver)
		{
			gameOver = false;
			playerOneScore = 0;
			playerTwoScore = 0;
		}

		window.clear(sf::Color(202,202,202));
		window.draw(playerOne);
		window.draw(playerTwo);
		window.draw(square);
		window.draw(playerOneScoreDisplay);
		window.draw(playerTwoScoreDisplay);
		if (gameOver)
		{
			window.draw(gameOverText);
			window.draw(playerWonText);
		}
		window.display();
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
