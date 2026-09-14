# C & C++ Programming Practice Repository

[![Language: C](https://img.shields.io/badge/Language-C11-blue.svg?logo=c)](https://en.wikipedia.org/wiki/C11_(C_language_standard))
[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C.svg?logo=cplusplus)](https://isocpp.org/)
[![Compiler: Clang/GCC](https://img.shields.io/badge/Compiler-GCC%20%2F%20Clang-orange.svg)](https://gcc.gnu.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

A hands-on laboratory repository containing small programs, syntax drills, and object-oriented experiments written in modern C and C++.

## Description
This repository serves as a focused sandbox for practicing core features of both C and C++. It tracks experimental code covering memory layout, pointer mechanics, class design, encapsulation, operator overloading, input validation, and terminal I/O.

### Core Concepts Demonstrated
* **C Primitives** (`test.c`): Manual memory allocation (`malloc`, `free`), pointers, array indexing, and standard POSIX I/O.
* **C++ Class Design** (`class1.cpp`): Custom class definitions, constructor initialization lists, destructors, access specifiers (`public`, `private`), and method encapsulation.
* **Modular Experimentation** (`test.cpp`, `test2.cpp`, `test4.cpp`): Testing operator behavior, references versus pointers, pass-by-reference semantics, and stream formatting.

## Directory Structure
```text
C-CPP-Programming-Practice/
├── class1.cpp      # Object-oriented class construction and member functions
├── test.c          # Pure C11 pointer and memory allocation experiments
├── test.cpp        # C++ stream I/O and baseline arithmetic tests
├── test2.cpp       # Function overloading and scope resolution tests
├── test4.cpp       # Dynamic array handling and loop controls
├── yes.cpp         # High-throughput text generation benchmarking
└── README.md       # Repository documentation
```

## Requirements
* Compiler: GCC (`gcc`, `g++`) or Clang supporting C11 and C++17
* Make or CMake (optional)

## Installation & Compilation
Clone the repository:
```bash
git clone https://github.com/ADM1SH/C-CPP-Programming-Practice.git
cd C-CPP-Programming-Practice
```

Compile any C source file:
```bash
clang -std=c11 -Wall -Wextra -O2 -o test_c test.c
```

Compile any C++ source file:
```bash
clang++ -std=c++17 -Wall -Wextra -O2 -o class_demo class1.cpp
```

## Usage
Execute the compiled binary:
```bash
./class_demo
```

## Support
Open an issue on GitHub for queries:
https://github.com/ADM1SH/C-CPP-Programming-Practice/issues

## Roadmap
* [x] Implement fundamental C pointer exercises.
* [x] Construct C++ class models with constructors and destructors.
* [ ] Add template class and generic container implementations.
* [ ] Add RAII smart pointer (`std::unique_ptr`, `std::shared_ptr`) exercises.

## Contributing
1. Fork the repository.
2. Create a branch: `git checkout -b feature/smart-pointers`.
3. Ensure clean compilation with `-Wall -Wextra -Wpedantic`.
4. Open a Pull Request.

## Authors and Acknowledgment
* **Adam Anwar** (ADM1SH) - Programmer and maintainer.

## License
MIT License. See `LICENSE` for details.

## Project Status
Active practice sandbox. Continuously used for rapid syntax prototyping and systems testing.
