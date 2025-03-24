# Learn-C_Plus_plus
## Learn_Cpp_From-A_To_Z
The main existense of this Repo and it's main Goal to guide you through C++.
everything and anything will you will find it here.

#   Programming in C++ 

##   Objectives

* Setting up the language environment, compiler, IDE, CMake Build System
* First C++ program with console and file stream IO, exception handling
* Variables, pointers, and references
* Using the `const` keyword
* Using `struct` as an aggregate, defining own data types
* Using strings, arrays, and vectors
* Applying C++ type conversions (casts)
* Initialization and assignment
* Functions with call-by-value and call-by-reference
* Integration of standard C/C++ libraries

##   Timeframe

Attendance is mandatory for the labs. [cite: 1]

Lab 1 is due by the 3rd lab session. Therefore, there are 2 weeks of processing time available. [cite: 2]

The acceptance will be done by the lab staff. [cite: 3]

Successful acceptance during the lab time is necessary for the issuing of the lab certificate. [cite: 3]

The task should be completed in a team of max. 2 people or, if necessary, alone. [cite: 4]

##   Task Description

1.  Use a compiler environment of your choice and create a new C++ project in an IDE of your choice with the following files:

    * `main.cpp`, including the entry function `int main(int argc, char *argv)`
    * `labor1.[c h]pp`, as files for the functions to be implemented by you
    * `CMakeLists.txt`, as a project description file for the CMake build system [cite: 5]
2.  Write executable C++ program code that fulfills the following requirements:

###   Table:

|   Requirement   |   Description   | Fulfilled |
| :-------------: | :----------------------------------------------------: |:---------:|
|        1        | In the "main" function, store the program arguments (`argv`) in a C++ string vector and output all elements in a for loop using `cout`. |     X     |
|        2        | Assignment of a program argument to a floating-point variable, with conversion from "string" to "double". |     X     |
|        3        | Program further functionality (the other requirements in the table) in the files "labor1.[h c]pp". |     X     |
|        4        | Application of any transcendental mathematical function from "cmath" to the above variable and storage of the result in a variable. |     X     |
|        5        | Type conversion by means of C++ cast of the above variable into an integer value and assignment into an integer variable. |     X     |
|        6        | Definition and call of a function that receives the above integer value as an argument and changes it in the scope of the caller. Use "const" correctly in the argument list of the function declaration, if necessary! |     X     |
|        7        | Output the integer value in hexadecimal formatting in the console, use iostream for this. |     X     |
|        8        | Definition of an own data type "Person" (e.g., first name (string), last name (string), date of birth (string), age in years (int), days (int) and hours (int)) based on a structure. |           |
|        9        | Create a vector of persons. |           |
|       10        | Read in the person data from a file with C++ ifstream. |           |
|       11        | Catch C++ exceptions when reading the file (e.g., file not present). |           |
|       12        | File name should be determined by the user via argv. |           |
|       13        | Calculate the age from the date of birth in hours, days, years, use std::chrono and/or ctime for this (e.g., given date of birth 3.4.1983, from this calculation of the age e.g., 40 years 0 days and 4 hours). Output the age in years in text form on the console, example calculated age = 43.123 years, from this the output on the console "Person is forty-three years old!" (omit decimal places). |           |
|       14        | Use "array<string const, XXX> const {}" here for the text templates of your numbers (note, for example, the number 47 can be composed of "seven" + "and" + "forty" from strings). The date of birth should only be after 1.1.1900. |           |
|       15        | Use the "range-based loop" for iteration with type inference to iterate through the vectors! |           |
|       16        | Use C++ Stream IO for text input/output! |           |
|    17 - 20    | Use appropriate built-in data types or std::string and std::vector! Pay attention to signedness! Use the type inference "auto" at least once for the return value of a function! Initialize all variables in C++11 style! `int a {5}` without =! Use references for function arguments, if possible! Assignment operator |           |
|        21        | Use "const" whenever possible! |           |
|        22        | Only declare the public functions (i.e., those called in main.cpp) in the file labor1.hpp. |           |

##   Questions about the Lab Experiment

Must be answered to receive the certificate:

* When do I use pointers? [cite: 8, 9]
* When do I use references? [cite: 8, 9]
* What is the difference between pointers and references? [cite: 9]
* What is "const" used for? [cite: 9]
* What is call-by-value and call-by-reference? [cite: 10]
* Differences and use cases?
    A function declaration includes a pointer as an argument, e.g., "void func(int \*value);". [cite: 10, 11]
* To what extent can/must the call of this function be understood as call-by-value? [cite: 11]

##   Appendix

###   References

* <https://cmake.org/cmake/help/latest/guide/tutorial/index.html> [cite: 11]
* <https://en.cppreference.com/w/cpp/container/array> [cite: 11]
* <https://en.cppreference.com/w/cpp/container/vector> [cite: 11]
* <https://en.cppreference.com/w/cpp/string> [cite: 11]
* <https://en.cppreference.com/w/cpp/io/basic_iostream> [cite: 12]
* <https://en.cppreference.com/w/cpp/io/basic_fstream> [cite: 12]
* <https://en.cppreference.com/w/cpp/io/basic_ifstream> [cite: 12]
* <https://en.cppreference.com/w/cpp/keyword/auto> [cite: 12]
* <https://en.cppreference.com/w/cpp/keyword/const> [cite: 12]
* <https://en.cppreference.com/w/cpp/language/initialization> [cite: 12]
* <https://en.cppreference.com/w/cpp/language/try_catch> [cite: 12]
* <https://en.cppreference.com/w/cpp/io/basic_ios/exceptions> [cite: 12]
* <https://en.cppreference.com/w/cpp/error/invalid_argument> [cite: 12]
* <https://en.cppreference.com/w/cpp/language/main_function> [cite: 12]
* <https://en.cppreference.com/w/cpp/chrono/system_clock/now> [cite: 12]
* <https://en.cppreference.com/w/cpp/chrono/c/tm> [cite: 12]
* <https://en.cppreference.com/w/cpp/chrono/c/time_t> [cite: 12]
* <https://en.cppreference.com/w/cpp/chrono/c/ctime> [cite: 12]
* <https://man7.org/linux/man-pages/man3/strptime.3.html> [cite: 12]
* <https://en.cppreference.com/w/cpp/chrono/duration> [cite: 12]
* <https://en.cppreference.com/w/cpp/chrono/duration/duration_cast> [cite: 12]
* <https://www.tenouk.com/Module22.html> [cite: 12]
* <http://www.cplusplus.com/doc/tutorial/typecasting/> [cite: 12]
* <https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_Pointer_Reference.html> [cite: 12]
* <https://en.cppreference.com/w/cpp/string/basic_string/stof> [cite: 12]
* <https://en.cppreference.com/w/cpp/header/cmath> [cite: 12]
* <https://en.cppreference.com/w/cpp/header/iomanip> [cite: 12]
* <https://en.cppreference.com/w/cpp/io/manip> [cite: 12]

###   File format for input data, e.g., file "data.txt":

