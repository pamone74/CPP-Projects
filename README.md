# C++ Projects - 42 Abu Dhabi 🚀

## 📌 Introduction
The goal of these modules is to introduce you to **Object-Oriented Programming (OOP)**. This will be the starting point of your C++ journey. While many languages are recommended for learning OOP, we chose **C++** because it is derived from **C**, a language you are already familiar with.

Since C++ is a complex language, we will be using the **C++98 standard** to keep things simple. Modern C++ introduces many new features, but to become a proficient C++ developer, it is up to you to explore beyond the **42 Common Core**.

🛠️ You will discover new concepts step by step, with exercises that progressively increase in complexity.

---

## 📜 General Rules

### 🏗️ Compiling
- Compile your code with `c++` using the following flags:
  ```sh
  -Wall -Wextra -Werror
  ```
- Your code should still compile if you add the flag:
  ```sh
  -std=c++98
  ```

### 📁 Formatting and Naming Conventions
- 📂 The exercise directories should be named as follows: `ex00`, `ex01`, ..., `exn`.
- 🏷️ Follow the naming conventions specified in the guidelines for:
  - Files, classes, functions, member functions, and attributes.
  - Class names should use **UpperCamelCase**.
  - File names should match the class name, e.g., for a class `BrickWall`:
    ```
    ├── BrickWall.hpp
    ├── BrickWall.cpp
    ```
- 🖥️ Unless specified otherwise, all output messages must end with a newline character and be displayed on **standard output**.
- 📏 No strict coding style is enforced, but ensure your code is **clean and readable** for peer evaluations.

### ✅ Allowed & ❌ Forbidden Features
- ✅ **Allowed:**
  - Most features from the **C++ Standard Library**.
  - Using C++-specific versions of standard C functions where applicable.
- ❌ **Forbidden:**
  - External libraries (including Boost and C++11+ features).
  - The functions: `printf()`, `malloc()`, `free()`.
  - The keywords `using namespace <ns_name>` and `friend`.
  - STL Containers (`vector`, `list`, `map`, etc.) and Algorithms (`<algorithm>` header) **before Module 08**.

### 🎨 Design Requirements 📔
- **🛑 Memory Management:** If you allocate memory using `new`, ensure proper deallocation to avoid memory leaks.
- **🛠️ Orthodox Canonical Form:** From **Module 02 to Module 09**, design your classes in the Orthodox Canonical Form unless stated otherwise.
- **📄 Header File Rules:**
  - 🚫 Avoid implementing functions inside header files (except for templates).
  - 🛑 Headers should include all their dependencies but must prevent multiple inclusions using include guards (`#ifndef`/`#define`).

### 📖 Read Me
- 📂 You may add additional files to structure your code better.
- 🧐 Some requirements may be implied in examples rather than explicitly stated in instructions.
- 📚 Read each module **completely** before starting.
- ⚡ **Think critically and apply your knowledge wisely!**

> [!WARNING]
> ⚠️  Regarding the Makefile for C++ projects, the same rules as in C apply (see the Norm chapter about the Makefile).

> [!TIP]
> 💡  You will have to implement a lot of classes. This can seem tedious, unless you’re able to script your favorite text editor.


> [!CAUTION]
> In order for you to progress and gain to tier skills there are don'ts and dos.
> ### ✅ Dos
> - Read Documentations , if documentation is confusing;
>   - Watch Youtube Videos 📹
>   - Consult Peers 👨‍🎓
>   - Try simple examples, this will make things clearer for you. 
> - Try more examples even if it doesnot make sense, it will help you in understanding and developing more practical logic.
> - Compete in coding quizes, these are very important in testing your skills.
> - Maintain proper documentation of your milestone 🚀 for future refernces.
> ### ❌ Don'ts
> - Copy pasting without having concrete ideas and logic behind the implementation.
>    - Craft your logic and algorithms, it's fine to copy paste part of it, may be 1 %. A
>    - Atleast contribute more than 70%, then the remaining percentage can be AI or copy paste.
> - Relaying on AI solutions

> [!IMPORTANT]
>  You are given a certain amount of freedom to complete the exercises.
 However, follow the mandatory rules and don’t be lazy. You would
 miss a lot of useful information! Do not hesitate to read about
 theoretical concepts.
---
---

## 🔧 Prerequisites

To run and compile C++ code, ensure that you have the following installed:
- **C++ compiler** (e.g., GCC or Clang)
- **IDE/Editor** (e.g., Visual Studio Code, CLion, or Code::Blocks)

---

## 📂 Project Modules

📌 The projects are organized in collapsible sections. Click to expand and read more details.

<details>
  <summary>
    0️⃣ Module 00 - Basics of C++
  </summary>
  
  **📚 Topics Covered:**
---
Here is a README file that explains the concepts you requested, such as namespaces, classes, member functions, stdio streams, initialization lists, static, const, and other basic C++ topics:

---

# C++ Basics: Understanding Key Concepts

This README explains some essential C++ concepts, including **Namespaces**, **Classes**, **Member Functions**, **Stdio Streams**, **Initialization Lists**, **Static**, **Const**, and other basic C++ topics. These concepts form the foundation for understanding how C++ programming works.

## 📚 Topics Covered

### 1. **Namespaces in C++**
- **Namespaces** are used to organize code into logical groups to prevent name conflicts, especially in larger programs or libraries.
- By default, C++ code is written in the `global` namespace, but it’s better to use namespaces for larger applications.

#### Syntax:
```cpp
namespace myNamespace {
    int myVariable = 10;
    void myFunction() {
        std::cout << "Hello from myNamespace!" << std::endl;
    }
}
```

- You can access variables or functions inside a namespace by qualifying them with the namespace name:
```cpp
myNamespace::myFunction();
```
- Alternatively, you can use the `using` keyword to avoid qualification:
```cpp
using namespace myNamespace;
myFunction();  // No need for 'myNamespace::'
```

For more details:
- [Namespaces in C++](https://www.geeksforgeeks.org/namespaces-in-cpp/)

---

### 2. **Classes and Objects in C++**
- **Classes** in C++ are user-defined data types that contain data members and member functions. They are the building blocks of object-oriented programming.
- **Objects** are instances of a class.

> When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created and the memory is allocated)

#### Syntax to define a class:
```cpp
class MyClass {
public:
    int myVariable;
    void myFunction() {
        std::cout << "Hello, World!" << std::endl;
    }
};
```

To create an object of the class:
```cpp
MyClass obj;
obj.myVariable = 5;
obj.myFunction();
```

For more details:
- [Classes & Objects in C++](https://www.geeksforgeeks.org/c-classes-and-objects/)

---

### 3. **Member Functions in C++**
- **Member functions** are functions defined inside a class and are used to manipulate the class’s data members.

#### Example:
 
  #### Example inside
  ```
  class Box {
    public:
      double length; // Length of a box
    // Member function to calculate volume
      double getVolume() {
        return length * breadth * height;
    }
  };
  ```
  #### Example outside
  ```
    class Box {
    public:
      double length; // Length of a box
        
      double getVolume(); // Declaration of member function
  };
  ```
  ```
  double Box::getVolume() {
  return length * breadth * height;
  }
  ```
 > Member function can be defined either inside or outside of the class definition.
  
  - When defined inside class, they are implicitly inline meaning that the ``compiler`` attempts to expand them at the point of call to reduce function call overhead.
For more details:
- [Member Functions in C++](https://www.learncpp.com/cpp-tutorial/member-functions/)

---

### 4. **Stdio Streams in C++**
- **Standard Input and Output** in C++ is handled through streams. The standard streams are:
  - `std::cin` for input
  - `std::cout` for output
  - `std::cerr` for error output
  - `std::clog` for logging output

#### Example:
```cpp
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;
    return 0;
}
```

For more details:
- [Standard Streams in C++](https://www.geeksforgeeks.org/standard-streams-cpp/)

---

### 5. **Initialization Lists in C++**
- **Initialization lists** are used in constructors to initialize data members directly before the constructor body executes.

#### Syntax:
```cpp
class Box {
public:
    double length, breadth, height;

    // Constructor with initialization list
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}
};
```

- Initialization lists are more efficient because they directly initialize members rather than assigning values in the constructor body.

For more details:
- [Constructor Initialization Lists in C++](https://www.geeksforgeeks.org/initialization-list-in-c/)

---

### 6. **Static Members in C++**
- **Static members** are shared by all objects of a class. They belong to the class rather than individual instances.
- Static members are useful for properties or functions that are common to all instances of a class.

#### Example:
```cpp
class MyClass {
public:
    static int count;  // Static member

    MyClass() {
        count++;  // Increment count every time an object is created
    }
};

// Initialization of static member
int MyClass::count = 0;
```

For more details:
- [Static Members in C++](https://www.geeksforgeeks.org/static-members-in-cpp/)

---

### 7. **Const Members in C++**
- **Const members** in C++ are used to make variables or functions read-only. Once a variable is declared `const`, its value cannot be changed after initialization.
- You can also declare `const` member functions, which ensure that they do not modify any member variables of the class.

#### Example:
```cpp
class Box {
public:
    const double length;  // Constant member variable

    // Constructor with initialization list
    Box(double l) : length(l) {}
};
```

#### Const Member Function:
```cpp
class Box {
public:
    double length;

    // Const member function that does not modify class members
    double getLength() const {
        return length;
    }
};
```

For more details:
- [Const in C++](https://www.geeksforgeeks.org/const-keyword-in-cpp/)

---

### 8. **Other Basic Concepts**
- **Pointer Basics**: Pointers are used to store the memory address of variables.
  - Example:
  ```cpp
  int x = 10;
  int *ptr = &x;  // ptr stores the address of x
  ```

- **References**: References are used as an alias for existing variables, making it easier to modify the variable directly.
  - Example:
  ```cpp
  int x = 10;
  int &ref = x;  // ref is a reference to x
  ```

For more details:
- [Pointers in C++](https://www.geeksforgeeks.org/pointers-in-c/)
- [References in C++](https://www.geeksforgeeks.org/references-in-c/)

---

  ### Access Modifiers C++
  - One of the main features of object-oriented programming languages such as C++ is data hiding.
  - Data hiding refers to restricting access to data members of a class. This is to prevent other functions and classes from tampering with the class data.
      - There are three ```Access Modifiers```:
          - Public
              - ```Public``` Keyword is used to create public members (data and functions), the public members are accessible from any part of the program.
            
          - Private
              - ```Private``` Keyword is used to create private members (data and functions), the private members are accessible only within the class.
          - Protected
              - ```Protected``` The protected members can be accessed within the class and from the derived class.
  - Source 👉 [Access Modifiers](https://www.programiz.com/cpp-programming/access-modifiers)
---

## 📝 Summary

| No. | Topic                    | Link                                      |
|-----|--------------------------|-------------------------------------------|
| 1️⃣  | Namespaces in C++         | [Namespaces](https://www.geeksforgeeks.org/namespaces-in-cpp/) |
| 2️⃣  | Classes and Objects       | [Classes & Objects](https://www.geeksforgeeks.org/c-classes-and-objects/) |
| 3️⃣  | Member Functions          | [Member Functions](https://www.learncpp.com/cpp-tutorial/member-functions/) |
| 4️⃣  | Stdio Streams in C++      | [Standard Streams](https://www.geeksforgeeks.org/standard-streams-cpp/) |
| 5️⃣  | Initialization Lists      | [Initialization Lists](https://www.geeksforgeeks.org/initialization-list-in-c/) |
| 6️⃣  | Static Members            | [Static Members](https://www.geeksforgeeks.org/static-members-in-cpp/) |
| 7️⃣  | Const Members             | [Const in C++](https://www.geeksforgeeks.org/const-keyword-in-cpp/) |
| 8️⃣  | Pointers and References   | [Pointers](https://www.geeksforgeeks.org/pointers-in-c/) |





  **📝 Exercises:**
  - Exercise 00: Megaphone
![Screenshot_12-3-2025_64915_cdn intra 42 fr](https://github.com/user-attachments/assets/1db8e78a-2e86-478d-bad7-8d0122d85f45)
### Logic Flowchart
![CPP Documentatio](https://github.com/user-attachments/assets/e7324249-4f8a-4393-add2-3b5c8a491c77)

---

## 🧑‍💻 Usage
- [x] **Step 1:** Git clone
``` https://github.com/pamone74/CPP-Projects```
- [x] **Step 2:** Run
```cd ex00```
- [x] **Step 3:** Run
```Makefile```
- [x] **Step 4:** Run
```./megaphone```
  
</details>

<details>

  <summary>📌 Module 01</summary>
  
  _(Details to be added)_
  
</details>

<details>
  <summary>📌 Module 02</summary>
  
  _(Details to be added)_
  
</details>

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

