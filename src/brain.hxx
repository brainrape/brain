#ifndef __BRAIN_HXX__
#define __BRAIN_HXX__

#include "layer.hxx"
#include "source.hxx"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>



#define MAX_LAYERS 16
#define MAX_SOURCES 16


struct BrainInfo{
};


class Brain{
private:

    BrainInfo info; 

    Layer* layers[MAX_LAYERS];
    Source* sources[MAX_SOURCES];

    sf::RenderWindow* window;

    bool _stop;

    void init_render();
    void render();
    void close_render();
    void render_fps();

    void step();

public:

    Brain();
    ~Brain();

    void run();
    void add_source(Source* source);
    void add_layer(Layer* layer);

    void input();

    friend class Layer;
    friend class Source;
};


#endif
