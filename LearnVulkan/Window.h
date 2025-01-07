#ifndef WINDOW_CLASS_H
#define WINDOW_CLASS_H

#include <GLFW/glfw3.h>

class Window
{
public:
    Window();

    bool init();
    bool shouldClose();

private:
    const uint16_t WIDTH = 800;
    const uint16_t HEIGHT = 600;

    GLFWwindow* mWindow;
    
};

#endif