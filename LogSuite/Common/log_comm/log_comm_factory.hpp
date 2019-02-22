#pragma once

#include "log_comm.hpp"
#include <memory>

namespace LogSuite
{
namespace Common
{

std::shared_ptr<LogCommClient> logClientFactory(String_t name);
std::shared_ptr<LogCommService> logServiceFactory(String_t name);

}
}