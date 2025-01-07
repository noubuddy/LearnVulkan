#include "App.h"


App::App()
{
    mEngine_instance = new Engine();
    mVulkan_api = new Vulkan();
    mWindow = new Window();
}

void App::run()
{
    mWindow->init();
    mVulkan_api->init();
    mEngine_instance->init();

    mEngine_instance->SetWindow(mWindow);
    
    mEngine_instance->update();
    core::rm::ResourceManager::cleanup();
}
