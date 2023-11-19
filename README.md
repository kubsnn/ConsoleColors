# C++ Colors

![Build CI](https://github.com/kubsnn/Colors/actions/workflows/ci.yml/badge.svg)

## Description

This is a simple header-only library for printing colored text in the terminal.

## Usage

```cpp
#include <iostream>
#include <colors.hpp>

int main() {
    std::cout << cc::darkred << "Hello, " << cc::red << "World!" << std::endl;
    return 0;
}
```

## Colors

<img src="./assets/colors.png" width="400" height="381">
