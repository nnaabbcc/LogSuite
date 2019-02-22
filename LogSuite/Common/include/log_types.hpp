#pragma once

#include "log_types.h"
#include <string>

namespace LogSuite
{
namespace Common
{

using Severity = LogSeverity;
using Volume = LogVolume;

#ifdef UNICODE
using myString = std::wstring;
#else
using myString = std::string;
#endif

}
}