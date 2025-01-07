#include "Engine.h"

Engine::Engine()
{
    mWindow = nullptr;
}

bool Engine::init()
{
    return true;
}

void Engine::update()
{
    while (!mWindow->shouldClose())
    {
        glfwPollEvents();
    }
}

void Engine::SetWindow(Window* pWindow)
{
    mWindow = pWindow;
}
