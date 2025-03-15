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
     Module 0️⃣0️⃣ - Basics of C++
  </summary>
  
  **📚 Topics Covered:**
  - Namespaces
  - Classes
  - Memeber Functions
  - Stdio streams
  - Initilization List
  - Static , const and some basic stuff
---
# C++ Basics: Understanding Key Concepts
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
  <summary>Module 0️⃣1️⃣- Memeory Allocation, pointers to memebers, references and switch statment</summary>
  
  **📚 Topics Covered:**
  - Memory Allocation
  - Pointers to Member
  - References & Switch Statements
---
## Table of Contents
- [Memory Allocation](#Memory-Allocation)
  - [Heap Memory in C++](#Heap-Memory-In-C++)
    - [Key Points](#key-points)
    - [Syntax](#syntax)
  - [Static Memory Allocation](#static-memory-allocation)
- [Pointers to Member Functions](#pointers-to-member-functions)
  - [Definition](#definition)
  - [Syntax](#syntax)
  - [Example Usage](#example-usage)
- [References in C++](#references-in-c)
  - [Definition](#definition-1)
  - [Examples](#examples)
- [Switch Statements in C++](#switch-statements-in-c)
  - [Definition](#definition-2)
  - [Syntax](#syntax-1)
  - [Example Usage](#example-usage-1)
- [Sources](#sources)

## Memory Allocation
Memory allocation in C++ refers to the process of reserving memory space for variables, objects, and data structures. There are two primary types of memory allocation:
- Heap and Stack
### Heap Memory in C++

Heap allocation is used for **dynamic memory** that needs to be manually managed by the programmer. This memory is allocated during the program's runtime and must be freed manually.

### Key Points:
- The **heap** is more **flexible** than the stack, as it allows you to allocate memory dynamically at runtime.
- However, if the memory is not freed properly, it can cause **memory leaks**.
- Memory in the heap persists until it is explicitly freed using `delete`.

### Syntax:

- **Allocate memory on the heap** using `new`.
- **Free memory** using `delete`.

### Syntax Example:
```cpp
// Allocating memory on the heap
Obj* obj = new Obj;  // Allocates memory for Obj on the heap

// Freeing memory
delete obj;  // Frees the memory allocated for Obj
``` 
   
---
### Static Memory Allocation
- Memory is allocated at compile time.
- The size is fixed and determined before program execution.
- Variables declared inside functions and global/static variables use static memory allocation.
  
### Example

In the given example, when `main()` executes, memory is allocated for the global variable `name`, which stores the return value of the `ReturnString()` function. This function takes a string as a parameter, and in this case, it receives the return value of the `Name()` function, which returns the string `"Pamone"`.  


![image](https://github.com/user-attachments/assets/4d185c6a-886f-42c3-baae-82ed77496268)


### **Step-by-Step Execution of the Program**

#### **Step 1: Memory Allocation for Global Variable**  
- The global variable `name` is declared but uninitialized at the start.  

#### **Step 2: `main()` Function Execution Begins**  
- The program enters the `main()` function.

#### **Step 3: Calling `ReturnString(Name())`**  
- `ReturnString(Name())` is evaluated.  
- To do this, the program must first execute `Name()`.

#### **Step 4: Execution of `Name()`**  
- The function `Name()` is called.  
- It simply returns the string `"Pamone"`.  
- Execution of `Name()` ends, and control goes back to `ReturnString()`.

#### **Step 5: Execution of `ReturnString()`**  
- `ReturnString()` receives `"Pamone"` as an argument.  
- It returns the same string `"Pamone"`.  
- Execution of `ReturnString()` ends.

#### **Step 6: Assigning the Returned Value to `name`**  
- The global variable `name` is now assigned `"Pamone"`.

#### **Step 7: Printing the Value**  
- `std::cout << name << std::endl;` prints `"Pamone"` to the console.

#### **Step 8: Program Ends**  
- `return 0;` is executed, and the program terminates successfully.

---

### **Final Output:**  
```
Pamone
```

---
## **Pointers to Member Functions**

### **Definition**
A **pointer to a member function** allows calling a class method dynamically at runtime, without knowing which function will be executed beforehand.

### **Syntax**
```cpp
typedef void (ClassName::*PointerType)();
```
- `ClassName::*PointerType` → Pointer to a member function of `ClassName`.
- `void (...)` → The function returns `void` and takes no parameters.

### **Example Usage**
```cpp
#include <iostream>

class Harl {
public:
    void debug() { std::cout << "Debugging...\n"; }
    void info() { std::cout << "Information...\n"; }
};

typedef void (Harl::*HarlMemFn)();

int main() {
    Harl h;
    HarlMemFn func = &Harl::info; // Pointer to member function
    (h.*func)(); // Call the function dynamically
    return 0;
}
```
**Output:**
```
Information...
```

---

## **References in C++**

### **Definition**
A reference is an alias for an existing variable. It provides an alternative name for a variable without creating a copy.

### **Examples**
#### **Basic Reference Usage**
```cpp
#include <iostream>

int main() {
    int x = 10;
    int &ref = x; // ref is a reference to x
    ref = 20;     // Modifies x
    std::cout << "x: " << x << std::endl; // Output: x: 20
    return 0;
}
```

#### **Reference as Function Parameter**
```cpp
#include <iostream>

void modify(int &ref) {
    ref += 10;
}

int main() {
    int num = 5;
    modify(num);
    std::cout << "Modified num: " << num << std::endl; // Output: Modified num: 15
    return 0;
}
```

---

## **Switch Statements in C++**

### **Definition**
A `switch` statement is used for multi-way branching based on an integer or character expression.

### **Syntax**
```cpp
switch(expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    default:
        // Code to execute if no case matches
}
```

### **Example Usage**
```cpp
#include <iostream>

int main() {
    int choice = 2;
    switch (choice) {
        case 1:
            std::cout << "You chose option 1." << std::endl;
            break;
        case 2:
            std::cout << "You chose option 2." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }
    return 0;
}
```

**Output:**
```
You chose option 2.
```

---

## **Sources**
1. **C++ Reference** - [cppreference.com](https://en.cppreference.com/)
2. **GeeksforGeeks - C++ Pointers to Member Functions** - [geeksforgeeks.org](https://www.geeksforgeeks.org/)
3. **cplusplus.com - C++ References** - [cplusplus.com](https://www.cplusplus.com/doc/tutorial/references/)
4. **C++ Switch Statements** - [cplusplus.com](https://www.cplusplus.com/doc/tutorial/control/)
5. [Stack vs Heap Memory Allocation](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)
6. [new and delete Operators in C++ For Dynamic Memory](https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/)

---
### **📌 Notes:**
- Pointers to member functions are useful in event handling and dynamic method invocation.
- References avoid unnecessary copying of data, improving performance.
- `switch` statements are best used when dealing with multiple discrete values.

## 📝 Summary

| No. | Topic                    | Link                                      |
|-----|--------------------------|-------------------------------------------|
| 1️⃣  | Pointers and References  | [Pointers](https://www.geeksforgeeks.org/pointers-in-c/) |
| 2️⃣  | Pointers to Member Functions|[Pointers to Member Function](https://www.geeksforgeeks.org/) |
| 3️⃣  | C++ References           | [Refernces](https://www.cplusplus.com/doc/tutorial/references/) |
| 4️⃣  | C++ Switch Statements | [Switch Statement](https://www.cplusplus.com/doc/tutorial/control/) |
| 5️⃣  | Stack vs Heap Memory Allocation | [Stack vs Heap Memory Allocation](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)|
| 6️⃣  | Dynamic Memory - Heap |  [new and delete Operators in C++ For Dynamic Memory](https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/)|


</details>

---


<details>

  <summary>📌 Module 01</summary>
  

  
</details>


## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

