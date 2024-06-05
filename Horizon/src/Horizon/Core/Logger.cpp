#include "hpch.hpp"

#include "Logger.hpp"

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

namespace Horizon {

    std::shared_ptr<spdlog::logger> Logger::s_Logger;

    void Logger::Init()
    {
        std::vector<spdlog::sink_ptr> logSinks;
        logSinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
        logSinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("Horizon.log", true));

        logSinks[0]->set_pattern("%^[%T] %n: %v%$");
		logSinks[1]->set_pattern("[%T] [%l] %n: %v");

        s_Logger = std::make_shared<spdlog::logger>("HAZEL", begin(logSinks), end(logSinks));
        s_Logger->set_level(spdlog::level::trace);
        s_Logger->flush_on(spdlog::level::trace);
    }

}
