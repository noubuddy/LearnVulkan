#include "Vulkan.h"

Vulkan::Vulkan()
{
}

bool Vulkan::init()
{
    return createInstance();
}

bool Vulkan::createInstance()
{
    VkApplicationInfo appInfo{};
    appInfo.sType = VkStructureType::VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Vulkan";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "Vulkan Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
    
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledExtensionCount = glfwExtensionCount;
    createInfo.ppEnabledExtensionNames = glfwExtensions;
    createInfo.enabledLayerCount = 0;

    // std::vector<const char*> requiredExtensions;
    //
    // for(uint32_t i = 0; i < glfwExtensionCount; i++) {
    //     requiredExtensions.emplace_back(glfwExtensions[i]);
    // }
    //
    // requiredExtensions.emplace_back(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME);
    //
    // createInfo.flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
    //
    // createInfo.enabledExtensionCount = (uint32_t) requiredExtensions.size();
    // createInfo.ppEnabledExtensionNames = requiredExtensions.data();

    uint32_t propertyCount = 0;
    std::vector<VkExtensionProperties> extensions;
    vkEnumerateInstanceExtensionProperties(nullptr, &propertyCount, extensions.data()); // TODO: Finish this

    std::cout << "available extensions:\n";

    for (const auto& extension : extensions) {
        std::cout << '\t' << extension.extensionName << '\n';
    }

    if (VkResult result = vkCreateInstance(&createInfo, nullptr, &instance))
    {
        if (result == VK_SUCCESS)
            return true;
        
        throw std::runtime_error("failed to create instance!");
    }

    return false;
}
