#include <gtest/gtest.h>

#include "simple_cpp_library.hpp"

namespace SimpleCppLibrary::Tests {

TEST(SimpleCppLibrary, ToUpper) {
    const std::string string{"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 123456789 .,;"};
    const auto result = SimpleCppLibrary::toUpper(string);
    ASSERT_EQ(result, "ABCDEFGHIJKLMNOPQRSTUVWXYZ ABCDEFGHIJKLMNOPQRSTUVWXYZ 123456789 .,;");
}

TEST(SimpleCppLibrary, ToLower) {
    const std::string string{ "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 123456789 .,;" };
    const auto result = SimpleCppLibrary::toLower(string);
    ASSERT_EQ(result, "abcdefghijklmnopqrstuvwxyz abcdefghijklmnopqrstuvwxyz 123456789 .,;");
}

} // namespace SimpleCppLibrary::Tests
