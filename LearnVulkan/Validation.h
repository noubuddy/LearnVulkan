#ifndef VALIDATION_CLASS_H
#define VALIDATION_CLASS_H

#include <GLFW/glfw3.h>

#include <vulkan/vulkan_core.h>
#include <vector>

#include <iostream>

class Validation
{
public:
    
    bool checkValidationLayerSupport();
    std::vector<const char*> getRequiredExtensions();

    void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
    
    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageType, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, void* pUserData);

#ifdef NDEBUG
    const bool enableValidationLayers = false;
#else
    const bool enableValidationLayers = true;
#endif
    
    std::vector<const char*> validationLayers = {
        "VK_LAYER_KHRONOS_validation"
    };
};

#endif
