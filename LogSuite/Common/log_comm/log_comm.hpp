#pragma once

#include "../include/log_types.hpp"

namespace LogSuite
{
namespace Common
{

class LogCommClient
{
    virtual void sendItem(std::list<Item_t> items) = 0;
protected:
    char* serialize(std::list<Item_t> items);
};

class LogCommService
{
    virtual std::list<Item_t> receive() = 0;
protected:
    std::list<Item_t> unserialize(char* buffer);
};

}
}
