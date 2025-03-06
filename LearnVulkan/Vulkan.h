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
    void setValidationInstance(Validation* t_validation_instance);
    void setupDebugMessenger();

private:

    bool createInstance();

    VkResult CreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pDebugMessenger);
    void DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT debugMessenger, const VkAllocationCallbacks* pAllocator);

    VkInstance instance;
    Validation* mValidation;
    VkDebugUtilsMessengerEXT debugMessenger;
    
};

#endif