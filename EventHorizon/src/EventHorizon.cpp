#include <Horizon/Horizon.hpp>
#include <Horizon/Core/EntryPoint.hpp>

class EventHorizon : public Horizon::Application
{
public:
    EventHorizon()
    {
    }

    ~EventHorizon() = default;
};

Horizon::Application* Horizon::CreateApplication()
{
    return new EventHorizon();
}
