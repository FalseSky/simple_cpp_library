#ifndef __SIMPLE_CPP_LIBRARY_HPP__
#define __SIMPLE_CPP_LIBRARY_HPP__

#include <string>

#if defined(_WIN32) || defined(_WIN64)
    #ifdef SIMPLE_CPP_LIBRARY_EXPORTS
        #define SIMPLE_CPP_LIBRARY_API __declspec(dllexport)
    #else
        #define SIMPLE_CPP_LIBRARY_API __declspec(dllimport)
    #endif
#elif defined(__APPLE__) || defined(__linux__)
    #ifdef SIMPLE_CPP_LIBRARY_EXPORTS
        #define SIMPLE_CPP_LIBRARY_API __attribute__((visibility("default")))
    #else
        #define SIMPLE_CPP_LIBRARY_API
    #endif
#else
    #define SIMPLE_CPP_LIBRARY_API
#endif

namespace SimpleCppLibrary {

SIMPLE_CPP_LIBRARY_API std::string toUpper(const std::string_view _string);
SIMPLE_CPP_LIBRARY_API std::string toLower(const std::string_view _string);

} // namespace SimpleCppLibrary

#endif // __SIMPLE_CPP_LIBRARY_HPP__
