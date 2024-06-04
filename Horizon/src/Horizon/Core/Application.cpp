#include "hpch.hpp"

#include "Application.hpp"

namespace Horizon {

    Application* Application::s_Instance = nullptr;

    Application::Application(const std::string& name)
    {
        if (s_Instance != nullptr) {
            std::cerr << "Application already created (can only create one)" << std::endl;
        }

        s_Instance = this;

        (void)name;
    }

    Application::~Application()
    {
        s_Instance = nullptr;
    }

    void Application::Run()
    {
        std::cout << "Running..." << std::endl;
    }

}
