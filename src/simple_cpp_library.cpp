#include "simple_cpp_library.hpp"

#include <boost/algorithm/string.hpp>

namespace SimpleCppLibrary {

std::string toUpper(const std::string_view _string) {
    std::string result{ _string };
    boost::algorithm::to_upper(result);
    return result;
}

std::string toLower(const std::string_view _string) {
    std::string result{ _string };
    boost::algorithm::to_lower(result);
    return result;
}

} // namespace SimpleCppLibrary
