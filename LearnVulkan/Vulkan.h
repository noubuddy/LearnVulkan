#ifndef VULKAN_CLASS_H
#define VULKAN_CLASS_H

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>
#include <iostream>
#include "Validation.h"

class Vulkan
{
public:
    Vulkan();

    bool init();
    void setValidationInstance(const Validation* t_validation_instance);

private:

    bool createInstance();

    std::vector<const char*> getRequiredExtensions();

    VkInstance instance;
    const Validation* mValidation;
    
};

#endif