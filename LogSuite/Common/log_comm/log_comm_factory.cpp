
#include "log_comm_factory.hpp"

namespace LogSuite
{
namespace Common
{

std::shared_ptr<LogCommClient> logClientFactory(String_t name)
{
    if (name == myText("SharedMemory"))
    {
    }
    return nullptr;
}

std::shared_ptr<LogCommService> logServiceFactory(String_t name)
{
    if (name == myText("SharedMemory"))
    {
    }
    return nullptr;
}

}
}
