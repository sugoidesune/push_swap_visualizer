#pragma once

#include <SFML/Graphics.hpp>
#include <list>
#include "queues.h"

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
    enum class STATE { Stopped, Running, Paused } state;
    float scale;
    std::vector<sf::RectangleShape> bars;
};
