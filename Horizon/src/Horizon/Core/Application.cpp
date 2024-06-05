#include "hpch.hpp"

#include "Application.hpp"
#include "Logger.hpp"

namespace Horizon {

    Application* Application::s_Instance = nullptr;

    Application::Application(const std::string& name)
    {
        if (s_Instance != nullptr) {
            HERROR("Application already created (can only create one)");
        }

        s_Instance = this;

        Logger::Init();

        (void)name;
    }

    Application::~Application()
    {
        s_Instance = nullptr;
    }

    void Application::Run()
    {
        HINFO("Running...");
    }

}
