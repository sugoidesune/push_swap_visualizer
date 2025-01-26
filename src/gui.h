#pragma once

#include <SFML/Graphics.hpp>
#include <list>
#include "queues.h"
#include "pushswap.h" // Include the PushSwap header

class Gui {
public:
    Gui();
    ~Gui();
    void loop();
    void swapA();

private:
    std::list<int> _generateValues(const unsigned int size);
    void _updateBars();
    void _updateControls();
    void _drawBars();
    void _animateQueue(sf::Clock &clock);
    sf::Color _rgb(const double ratio);

    sf::RenderWindow _window;
    Queues queues;
    unsigned int generateNumberSize;
    int speed;
    enum class STATE { Stopped, Running, Reverse } state;
    float scale;
    std::vector<sf::RectangleShape> bars;
    std::string numbers;
    PushSwap pushswap;
};
