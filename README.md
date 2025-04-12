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



```md


## Objectives
- OOP with C++
- Set up a project structure with multiple files
- Use CMake to create a main program and a library
- Use namespaces effectively
- Create a class hierarchy with simple inheritance
- Implement constructors and destructors
- Copy and move constructor, the meaning of “r-value” as a temporary value
- Use abstract classes, pure virtual, and virtual functions
- Overload functions and operators
- Use smart pointers
- Use iterators
- Differences between stack and heap
- C++ implementation of design patterns (here, the Factory pattern)


## Task Description
Use a compiler environment of your choice and create a new C++ project in an IDE of your choice with the following files and requirements:

1. `main.cpp`, including the entry point function `int main(int argc, char *argv[])`
2. `CMakeLists.txt`, as the project description file for the CMake build system
3. One `.cpp`/`.hpp` file per class, with the same name as the class

Write C++ program code that meets the following requirements:

### Part A.1
Create a new class `A` with the following requirements:

- **Private attribute** `_nptr` as a pointer to an `int`, initialized with `nullptr`
- **Private attribute** `_aptr` as a pointer to an `int` array, initialized with `nullptr`
- **Explicit constructor** (c’tor):
  - Takes an `int` argument.
  - Allocates an `int` on the heap.
  - Lets `_nptr` point to the newly allocated `int`.
  - Allocates an `int` array on the heap with 5 elements.
  - Lets `_aptr` point to the first element of the `int` array.
  - Initializes the value of the newly allocated `int` (pointed to by `_nptr`) with the constructor argument.
  - Initializes all elements of the `int` array (pointed to by `_aptr`) with 42.
  - Prints to `cout` the initialization value:  
    ```
    class A constructor: <value>
    ```
- **Destructor** (d’tor):
  - Prints the `int` value pointed to by `_nptr`:
    ```
    class A destructor: <value>
    ```
  - Frees `_nptr` on the heap.
  - Frees `_aptr` on the heap.
  - Prints `nullptr` if `_nptr` no longer points to an `int` (use “Yoda notation” in your `if` statement!):
    ```
    class A destructor: nullptr
    ```

For the following program code:
```cpp
A a1{3};
```
the class `A` should output:
```
class A constructor: 3
class A destructor: 3
```

### Part A.2
Extend class `A` with a copy constructor, which prints:
```
class A copy constructor: <value>
```
when called. The copy constructor should create a deep copy of the object.

For the following program code:
```cpp
A a1{3};
A a2{a1};
A a3{A{4}};
```
the class `A` should output:
```
class A constructor: 3
class A copy constructor: 3
class A constructor: 4
class A destructor: 4
class A destructor: 3
class A destructor: 3
```

### Part A.3
Extend class `A` with a move constructor, which prints:
```
class A move constructor: <value>
```
when called. The move constructor should exchange the pointers `_nptr` and `_aptr` with those of the move object using `std::swap`.

For the following program code:
```cpp
vector<A> v;
v.push_back(A{5});
```
the class `A` should output:
```
class A constructor: 5
class A move constructor: 5
class A destructor: nullptr
class A destructor: 5
```

### Part A.4
Extend class `A` with a copy assignment operator, which prints:
```
class A copy assignment operator: <value>
```
when called. The copy assignment operator should also check whether the object is assigning itself (e.g., `a5 = a5`). If so, simply return `*this` without allocating new memory. Otherwise, it should create a deep copy.

For the following program code:
```cpp
A a5{7};
A a6{8};
a6 = a5;
```
the class `A` should output:
```
class A constructor: 7
class A constructor: 8
class A copy assignment operator: 7
class A destructor: 7
class A destructor: 7
```

### Part A.5
Extend class `A` with a move assignment operator, which prints:
```
class A move assignment operator: <value>
```
when called. Once again, use `std::swap` to exchange the contents of `_nptr` and `_aptr` with those of the move object.

For the following program code:
```cpp
A a7{9};
a7 = A{10};
```
the class `A` should output:
```
class A constructor: 9
class A constructor: 10
class A move assignment operator: 10
class A destructor: 9
class A destructor: 10
```

### Part A.6
Now use the move function `std::move` to force “move semantics” when creating a new instance of class `A`.

For the following program code:
```cpp
A a8{11};
A a9{move(a8)};
```
the class `A` should output:
```
class A constructor: 11
class A move constructor: 11
class A destructor: 11
class A destructor: nullptr
```

### Questions for Part A:
1. Why is no copy constructor called for `A a3{A{4}};` in Part A.2?
2. Why does `class A destructor: nullptr` appear in Part A.3?
3. Why does `class A destructor: 9` appear in Part A.5?
4. How does Part A.6 behave differently from Part A.2?

---

## Part B
Implement a factory for dishes in C++ following the “Factory” design pattern. Fulfill the following requirements:

| **Requirement** | **Description**                                                                                                                                                                                                                                              | **Fulfilled** |
|-----------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------|
| 1               | Create your factory in a separate library called `dishlib`. Create a subdirectory and the corresponding `CMakeLists.txt` file, and place all the library’s `.cpp` and `.hpp` files in that subdirectory.                                                                 |               |
| 2               | Include your library in the main program. Modify the `CMakeLists.txt` file of the main program accordingly.                                                                                                                                                  |               |
| 3               | Encapsulate all classes of `dishlib` in the namespace `dishlib`.                                                                                                                                                                                             |               |
| 4               | Implement an abstract class `AbstractDish` in `dishlib` with the following public attributes and methods:<br><br>- `Prepare()`, which should later be implemented by derived classes (i.e., pure virtual) to prepare a dish,<br>- `GetDishName()`, which returns the name of the dish,<br>- `GetIngredients()`, which returns all ingredients as a vector,<br>- `GetNumberIngredients()`, which returns the number of ingredients.<br><br>And the following protected attributes/methods (decide whether they should be `protected` or `private` as needed):<br><br>- `AddIngredients()`, which adds ingredients to the dish,<br>- `vIngredients` a vector of ingredients,<br>- `dishName` the name of the dish.<br><br>Delete the default constructor.<br>Set the destructor to default (must it also be virtual?).<br>Create an explicit constructor with the dish name as a parameter. When this constructor is called, the dish name should be initialized. |               |
| 5               | Implement specialized classes `VegetableSoup` and `PizzaMargherita` in `dishlib` that derive from `AbstractDish`. Implement `Prepare()`, which should add ingredients via `AddIngredients()` and print the preparation steps to the console. Delete their default constructors. Create explicit constructors with the dish name as an argument. |               |
| 6               | Implement a `DishFactory` class in `dishlib` to create `AbstractDish` objects with the following public attributes/methods:<br><br>- `DishType` an enum class to identify the possible dishes,<br>- `CreateDish()`, which, based on a `dishType` argument of type `DishType`, creates new dish objects on the heap, calls `Prepare()`, and returns them as `unique_ptr<AbstractDish>`. |               |
| 7               | Implement a `Customer` class in your main program with the following public attributes/methods:<br><br>- `ServeDish()`, which takes a `dish` as an argument (reference to `unique_ptr<AbstractDish>`),<br>- `EatDish()`, which “consumes” the served `dish` object, leaving a nullptr behind.<br><br>And the following protected attributes/methods (decide whether they should be `protected` or `private`):<br><br>- `customerDish` a `unique_ptr` pointing to the served dish,<br>- `customerName` the customer’s name.<br><br>Delete the default constructor. Create an explicit constructor with the customer’s name as a parameter. When this constructor is called, the customer’s name should be initialized. |               |
| 8               | Implement a vector `vDishes` of dishes in your main program. Use `unique_ptr<AbstractDish>`.                                                                                                                                                                  |               |
| 9               | Use the factory to create dishes and add them to the vector. Use move semantics here!                                                                                                                                                                        |               |
| 10              | Sort the dishes in the vector based on the number of ingredients. Use `std::sort` with a lambda expression.                                                                                                                                                  |               |
| 11              | Output the sorted dishes by name along with their number of ingredients.                                                                                                                                                                                     |               |
| 12              | Create a vector of customers. Again, use `unique_ptr`.                                                                                                                                                                                                       |               |
| 13              | Serve your dishes to the customers by calling `ServeDish()`. Use move semantics! Then update the vector accordingly, i.e., remove the now invalid element.                                                                                                                                 |               |
| 14              | Have the customers consume the dishes using a range-based loop and the `EatDish()` method.                                                                                                                                                                   |               |
| 15              | Avoid duplicating code!                                                                                                                                                                                                                                      |               |
| 16              | Encapsulate all attributes/methods as much as possible!                                                                                                                                                                                                      |               |
| 17              | Use built-in data types wisely, also pay attention to signed/unsigned for integer types!                                                                                                                                                                     |               |
| 18              | Avoid copying objects as far as possible!                                                                                                                                                                                                                    |               |
| 19              | Use `iostream` for text input and output!                                                                                                                                                                                                                    |               |
| 20              | Use `std::string` for strings!                                                                                                                                                                                                                               |               |
| 21              | Wherever sensible, use `const` and references!                                                                                                                                                                                                               |               |

---

## Appendix

### References
- [https://cmake.org/cmake/help/latest/command/add_subdirectory.html](https://cmake.org/cmake/help/latest/command/add_subdirectory.html)
- [https://cmake.org/cmake/help/latest/command/include_directories.html](https://cmake.org/cmake/help/latest/command/include_directories.html)
- [https://cmake.org/cmake/help/latest/command/target_link_libraries.html](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)
- [https://cmake.org/cmake/help/latest/command/add_library.html](https://cmake.org/cmake/help/latest/command/add_library.html)
- [https://cmake.org/cmake/help/latest/guide/tutorial/index.html](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
- [https://en.cppreference.com/w/cpp/language/initialization](https://en.cppreference.com/w/cpp/language/initialization)
- [https://en.cppreference.com/w/cpp/language/nullptr](https://en.cppreference.com/w/cpp/language/nullptr)
- [https://en.cppreference.com/w/cpp/language/explicit](https://en.cppreference.com/w/cpp/language/explicit)
- [https://en.cppreference.com/w/cpp/language/function#Deleted_functions](https://en.cppreference.com/w/cpp/language/function#Deleted_functions)
- [https://en.cppreference.com/w/cpp/language/new](https://en.cppreference.com/w/cpp/language/new)
- [https://en.cppreference.com/w/cpp/language/delete](https://en.cppreference.com/w/cpp/language/delete)
- [https://en.cppreference.com/w/cpp/language/constructor](https://en.cppreference.com/w/cpp/language/constructor)
- [https://en.cppreference.com/w/cpp/language/destructor](https://en.cppreference.com/w/cpp/language/destructor)
- [https://en.cppreference.com/w/cpp/algorithm/copy](https://en.cppreference.com/w/cpp/algorithm/copy)
- [https://en.cppreference.com/w/cpp/algorithm/fill_n](https://en.cppreference.com/w/cpp/algorithm/fill_n)
- [https://en.cppreference.com/w/cpp/language/default_constructor](https://en.cppreference.com/w/cpp/language/default_constructor)
- [https://en.cppreference.com/w/cpp/language/copy_constructor](https://en.cppreference.com/w/cpp/language/copy_constructor)
- [https://en.cppreference.com/w/cpp/language/move_constructor](https://en.cppreference.com/w/cpp/language/move_constructor)
- [https://en.cppreference.com/w/cpp/language/copy_assignment](https://en.cppreference.com/w/cpp/language/copy_assignment)
- [https://en.cppreference.com/w/cpp/language/move_assignment](https://en.cppreference.com/w/cpp/language/move_assignment)
- [https://en.cppreference.com/w/cpp/algorithm/move](https://en.cppreference.com/w/cpp/algorithm/move)
- [https://en.cppreference.com/w/cpp/algorithm/swap](https://en.cppreference.com/w/cpp/algorithm/swap)
- [https://en.cppreference.com/w/cpp/container/vector](https://en.cppreference.com/w/cpp/container/vector)
- [https://en.cppreference.com/w/cpp/keyword/virtual](https://en.cppreference.com/w/cpp/keyword/virtual)
- [https://en.cppreference.com/w/cpp/memory/unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)
- [https://en.cppreference.com/w/cpp/container/vector/push_back](https://en.cppreference.com/w/cpp/container/vector/push_back)
- [https://en.cppreference.com/w/cpp/container/vector/erase](https://en.cppreference.com/w/cpp/container/vector/erase)
- [https://en.cppreference.com/w/cpp/language/auto](https://en.cppreference.com/w/cpp/language/auto)
- [https://en.cppreference.com/w/cpp/language/enum](https://en.cppreference.com/w/cpp/language/enum)
- [https://en.cppreference.com/w/cpp/language/access](https://en.cppreference.com/w/cpp/language/access)
- [https://en.cppreference.com/w/cpp/language/abstract_class](https://en.cppreference.com/w/cpp/language/abstract_class)
- [http://www.cplusplus.com/reference/string/string/](http://www.cplusplus.com/reference/string/string/)
- [https://en.cppreference.com/w/cpp/language/override](https://en.cppreference.com/w/cpp/language/override)
- [https://en.cppreference.com/w/c/language/value_category](https://en.cppreference.com/w/c/language/value_category)
- [https://en.cppreference.com/w/cpp/algorithm/sort](https://en.cppreference.com/w/cpp/algorithm/sort)
- [https://en.cppreference.com/w/cpp/language/lambda](https://en.cppreference.com/w/cpp/language/lambda)
- [https://www.oreilly.com/library/view/head-first-design/0596007124/ch04.html](https://www.oreilly.com/library/view/head-first-design/0596007124/ch04.html)
- [https://github.com/jmossberg/rvalues-move-semantics-cpp](https://github.com/jmossberg/rvalues-move-semantics-cpp)
```


