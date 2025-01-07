#include "Window.h"

Window::Window()
{
    mWindow = nullptr;
}

bool Window::init()
{
    glfwInit();
    
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    mWindow = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);

    return true;
}

bool Window::shouldClose()
{
    if (glfwWindowShouldClose(mWindow))
    {
        return true;
    }

    return false;
}
