#include "geometry.h"
#include <iostream>
#include <vector>

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Square square(3);

    //vector: Circle도 넣고 rectangle도 넣고 square도 넣기
    std::vector<Shape*> shapes;
    shapes.push_back(&circle);
    shapes.push_back(&rectangle);
    shapes.push_back(&square);
    // Iterate through the vector and print the area of each shape
    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }
    // Clean up dynamically allocated memory if any
    // In this case, we are not dynamically allocating memory for shapes,
    return 0;
}
