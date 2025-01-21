#ifndef APP_CLASS_H
#define APP_CLASS_H

#include "Engine.h"
#include "Vulkan.h"
#include "ResourceManager.h"
#include "Validation.h"
#include "Window.h"

class App
{
public:
    App();

    void run();

private:
    Engine* mEngine_instance;
    Vulkan* mVulkan_api;
    Window* mWindow;
    Validation* mValidation;
    
};

#endif