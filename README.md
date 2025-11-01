Vector3 C++ Library

A lightweight, header-only C++ library for 3D vector mathematics, designed with simplicity and performance in mind for applications like game development and graphics programming.

This library provides a Vector3 struct with overloaded operators and essential methods, allowing for intuitive and readable code.
Features

    Basic Arithmetic: Easily perform vector addition, subtraction, and scalar multiplication.

    Operator Overloading: Use standard operators (+, -, *, ==, <<) for a clean and expressive syntax.

    Header-Only: No need for a separate .cpp file. Just include Vector3.h in your project and you're ready to go.

    Essential Methods: Includes methods to calculate vector length and to normalize vectors, which are crucial for physics and movement.

Getting Started

To use the Vector3 library, simply download the Vector3.h file and include it in your C++ project.
Installation

No installation required! Just place Vector3.h in your project's include directory.
Usage Example

Here is a simple example demonstrating some of the library's capabilities.

#include "Vector3.h"
#include <iostream>

int main()
{
    // Create two vectors
    Vector3 pos(10.0f, 5.0f, 2.0f);
    Vector3 direction(3.0f, 4.0f, 1.0f);

    // Perform vector addition
    Vector3 newPos = pos + direction;
    std::cout << "New position: " << newPos << std::endl; // Output: New position: (13, 9, 3)

    // Perform scalar multiplication
    float speed = 2.0f;
    Vector3 scaledDirection = direction * speed;
    std::cout << "Scaled direction: " << scaledDirection << std::endl; // Output: Scaled direction: (6, 8, 2)

    // Normalize a vector and check its length
    Vector3 unitDirection = direction.normalized();
    std::cout << "Unit direction: " << unitDirection << std::endl; // Output: Unit direction: (0.5883, 0.7844, 0.1961)
    std::cout << "Unit direction length: " << unitDirection.length() << std::endl; // Output: Unit direction length: 1

    return 0;
}
