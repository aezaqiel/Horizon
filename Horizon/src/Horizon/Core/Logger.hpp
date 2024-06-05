#pragma once

#include <spdlog/spdlog.h>

namespace Horizon {

    class Logger
    {
    public:
        static void Init();
        inline static const std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }
    private:
        static std::shared_ptr<spdlog::logger> s_Logger;
    };

}

#ifndef NDEBUG
    #define HTRACE(...)    ::Horizon::Logger::GetLogger()->trace(__VA_ARGS__)
    #define HDEBUG(...)    ::Horizon::Logger::GetLogger()->debug(__VA_ARGS__)
    #define HINFO(...)     ::Horizon::Logger::GetLogger()->info(__VA_ARGS__)
    #define HWARN(...)     ::Horizon::Logger::GetLogger()->warn(__VA_ARGS__)
    #define HERROR(...)    ::Horizon::Logger::GetLogger()->error(__VA_ARGS__)
    #define HCRITICAL(...) ::Horizon::Logger::GetLogger()->critical(__VA_ARGS__)
#else
    #define HTRACE(...)
    #define HDEBUG(...)
    #define HINFO(...)
    #define HWARN(...)
    #define HERROR(...)
    #define HCRITICAL(...)
#endif
