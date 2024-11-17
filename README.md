# C++ Module 02 - Ad-hoc Polymorphism, Operator Overloading, and Orthodox Canonical Class Form

In this module, you will learn how to work with fixed-point numbers, a number type that offers a valuable balance between performance, accuracy, range, and precision. Fixed-point numbers are particularly useful in applications like computer graphics, sound processing, and scientific programming. This module focuses on implementing a fixed-point number class using the Orthodox Canonical Form, a C++ convention for creating classes with proper constructors, destructors, and assignment operators.

## Project Purpose

The purpose of this module is to familiarize you with the implementation of fixed-point numbers and enhance your understanding of object-oriented programming (OOP) concepts like ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Form. You will build a class that supports various functionalities like conversion between fixed-point and other number types, arithmetic operations, comparison operators, and geometric operations.

This project will help you practice essential C++ skills, including operator overloading, class design, and memory management.

## Exercises Overview

### Exercise 00: My First Class in Orthodox Canonical Form

- **Objective**: Implement a basic `Fixed` class representing fixed-point numbers with a static constant for fractional bits (set to 8). Implement basic member functions for getting and setting raw fixed-point values, and include the necessary constructors, assignment operators, and destructor.

- **Why We Created This Class**: This exercise introduces the Orthodox Canonical Form and sets the foundation for working with fixed-point numbers. It provides the necessary structure and methods to work with this type of number in C++.

### Exercise 01: Towards a More Useful Fixed-Point Number Class

- **Objective**: Enhance the `Fixed` class by adding constructors that convert from integers and floating-point numbers to fixed-point values. Implement functions to convert fixed-point values back to floating-point numbers and integers. Add an overload for the insertion operator to print fixed-point numbers.

- **Why We Created This Class**: This exercise adds important functionality to the `Fixed` class, allowing it to interact more flexibly with other data types. It prepares the class for more complex operations and showcases the power of type conversions in C++.

### Exercise 02: Now We're Talking

- **Objective**: Overload comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`) and arithmetic operators (`+`, `-`, `*`, `/`). Implement increment/decrement operators (both pre- and post-). Add static functions for finding the minimum and maximum of two fixed-point numbers.

- **Why We Created This Class**: This exercise demonstrates how to overload operators in C++, allowing the `Fixed` class to support direct arithmetic and comparison operations. It also introduces static member functions to simplify comparisons between two fixed-point numbers.

### Exercise 03: BSP (Barycentric Coordinates)

- **Objective**: Implement a function that checks whether a point is inside a triangle using fixed-point numbers for geometric operations.

- **Why We Created This Class**: This exercise applies the `Fixed` class in a real-world context, using fixed-point numbers for geometric calculations. It demonstrates how the class can be used in different scenarios beyond basic number representation.

## Compilation and Testing

Each exercise is contained within its own directory (`ex00/`, `ex01/`, `ex02/`, and `ex03/`). Navigate to the appropriate directory, compile the code using the provided `Makefile`, and run the program to test your implementation.

### Example:

```bash
cd ex00
make
./your_executable
