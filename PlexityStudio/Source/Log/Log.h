#pragma once
#include <memory>
#include <spdlog/logger.h>

namespace Plexity
{
	class Log
	{
	public:
		static void init();

		static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
	};
}

#define FATAL(...)			::Plexity::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define TRACE(...)			::Plexity::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ERROR(...)			::Plexity::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WARN(...)			::Plexity::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define INFO(...)			::Plexity::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DEBUG(...)			::Plexity::Log::GetCoreLogger()->debug(__VA_ARGS__)
