#ifndef ENGINE_CLASS_H
#define ENGINE_CLASS_H
#include "Window.h"

class Engine
{
public:
    Engine();

    bool init();
    void update();

    void SetWindow(Window* pWindow);

private:

    Window* mWindow;
    
};

#endif