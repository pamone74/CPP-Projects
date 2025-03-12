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

## 📂 Project Modules

📌 The projects are organized in collapsible sections. Click to expand and read more details.

<details>
  <summary>
    0️⃣ Module 00 - Basics of C++
  </summary>
  
  **📚 Topics Covered:**
---
### Classes and Objects 
  - Class is a user defined datatype which holds it own data members and member functions, which can be accessed and used by creating an instance of that class.
      - For more details:
          - [Classes & Objects](https://www.geeksforgeeks.org/c-classes-and-objects/)
          - [YouTube](https://youtu.be/x8T0eSPeydA?si=v6bHuHIWnLxSnd_D)
  > When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created and the memory is allocated)
    
  - Class is defined in C++ using keyword  ```class```  followed by the class name.
  #### Syntax:
    ```
    class ClassName {
       access_specifier:
       // Body of the class
    };
      ```
---

### Member Functions
  <p>
    These are function defined inside the class and operate on the objects of that class. They have access to all memebers (variables and other functions) of the class.
  </p>
  
  > Member function can be defined either inside or outside of the class definition.
  
  - When defined inside class, they are implicitly inline meaning that the ``compiler`` attempts to expand them at the point of call to reduce function call overhead.
      - Source 👉 [Member function](https://www.learncpp.com/cpp-tutorial/member-functions/)
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
### Memory Allocation in C++

In C++, memory can be allocated in two primary areas: **Stack** and **Heap**.

#### Stack Memory
- **Stack allocation** happens automatically during function calls. Memory is allocated for local variables and function calls in the call stack.
- Memory is **automatically destroyed** when the function ends and goes out of scope.
- The **stack** is **fast** but has a limited size, so allocating too many large local variables could lead to a **stack overflow**.

#### Example:
```cpp
void exampleFunction() {
    int x = 10; // x is allocated on the stack
    // x will be destroyed when the function exits
}
```
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
Sources:
- [Stack vs Heap Memory Allocation](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)
- [new and delete Operators in C++ For Dynamic Memory](https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/)
    
---
  ### Summary
  |  No  | Topic         |  Link   |  Youtube |
|-----:|---------------|---------|----------|
|  1️⃣ |Basics of OOP   |   [GeeksforGeeks](https://www.geeksforgeeks.org/introduction-of-object-oriented-programming/)    | |
|  2️⃣ |Classes and Objects| [Classes & Objects](https://www.geeksforgeeks.org/c-classes-and-objects/)       |[YouTube](https://youtu.be/x8T0eSPeydA?si=v6bHuHIWnLxSnd_D)|
|  3️⃣ |Member Functions | [Member Functions](https://www.learncpp.com/cpp-tutorial/member-functions/)        | |
|  4️⃣ | Access Modifiers | [Access Modifiers](https://www.programiz.com/cpp-programming/access-modifiers)        | |
|  5️⃣ | Memory Allocation | [Stack vs Heap Memory Allocation](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)        | |

---
  **📝 Exercises:**
  - Exercise 00: Megaphone
![Screenshot_12-3-2025_64915_cdn intra 42 fr](https://github.com/user-attachments/assets/1db8e78a-2e86-478d-bad7-8d0122d85f45)
### Logic Flowchart
![CPP Documentatio](https://github.com/user-attachments/assets/e7324249-4f8a-4393-add2-3b5c8a491c77)

## To test This project:
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

More modules will be added as the project progresses! 🚀

