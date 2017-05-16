// Ch 12
// [[...]] is called an attribute, and can be used in many places in C++ syntax.
// [[noreturn]] indicates the function is not expected to return:
[[noreturn]] void exit(int);


// 12.6.2 Predefined Macros:

// - __cplusplus, defined in C++ compilation, but not in C, value is 201103L in C++11
// - __DATE__ date in Mmm dd yyyy, e.g. May 15 2016
// ... see macros.cpp
