#include <exception>
#include <iostream>
#include <ostream>

#include "App.h"

int main()
{
    App* app = new App();

    try
    {
        app->run();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
