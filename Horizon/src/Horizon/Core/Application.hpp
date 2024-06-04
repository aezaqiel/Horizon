#pragma once

namespace Horizon {

    class Application
    {
    public:
        Application(const std::string& name = "Horizon");
        virtual ~Application();

        void Run();

    private:

    private:
        static Application* s_Instance;
    };

    Application* CreateApplication();

}
