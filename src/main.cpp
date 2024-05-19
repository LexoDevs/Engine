
#include "app.hpp"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {

    std::cout << "Cargando shaders:";

    system("C:/dev/Lexon2/Lexon/Engine/shaders/compile.bat");

    lve::FirstApp app{};

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}