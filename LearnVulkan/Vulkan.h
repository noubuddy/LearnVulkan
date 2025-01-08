#ifndef VULKAN_CLASS_H
#define VULKAN_CLASS_H

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>
#include <iostream>

class Vulkan
{
public:
    Vulkan();

    bool init();

private:

    bool createInstance();

    VkInstance instance;
    
};

#endif