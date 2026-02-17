#pragma once
#include <iostream>

// old C-style enum — avoid in modern C++
// leaks names into surrounding scope
enum Color { red, green, blue };     // red, green, blue are global names

// modern C++ — enum class (scoped enum)
// names are scoped, no leaks, no implicit int conversion
enum class Direction { North, South, East, West };


void enum_demo()
{
    Direction d = Direction::North;  // must qualify with Direction::
    Color     c = Color::red;

    // switch on enum class
    switch (d)
    {
        case Direction::North: std::cout << "North\n"; break;
        case Direction::South: std::cout << "South\n"; break;
        case Direction::East:  std::cout << "East\n";  break;
        case Direction::West:  std::cout << "West\n";  break;
    }

    // old enum implicitly converts to int — dangerous
    // enum class does NOT — you must be explicit
    // int i = c;                    // error — good
    int i = static_cast<int>(c);     // fine — intentional cast
    std::cout << "Color as int: " << i << "\n";   // 0

    // you can specify underlying type
    enum class Status : uint8_t { Ok = 0, Error = 1, Timeout = 2 };
    Status s = Status::Ok;
}