#pragma once

#include <spdlog/logger.h>

namespace http_bridge
{
	// not thread safe wrt self or library's usage of logger
	// call early
	void set_default_logger(const std::shared_ptr<spdlog::logger>& glb_logger_mt);
}
