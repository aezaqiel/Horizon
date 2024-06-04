#pragma once

#include "Application.hpp"

extern Horizon::Application* Horizon::CreateApplication();

int main(void)
{
    Horizon::Application* app = Horizon::CreateApplication();
    app->Run();
    delete app;
}
