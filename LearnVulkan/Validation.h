#ifndef VALIDATION_CLASS_H
#define VALIDATION_CLASS_H

#include <vulkan/vulkan_core.h>
#include <vector>

class Validation
{
public:
    
    bool checkValidationLayerSupport();

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
