#include <iostream>
#include <chrono>

// Base class template using CRTP
template <typename Derived>
class Shape {
public:
    // Interface methods that call the derived class's specific methods
    double getArea() const {
        return static_cast<const Derived*>(this)->calculateArea();
    }

    double getPerimeter() const {
        return static_cast<const Derived*>(this)->calculatePerimeter();
    }
};

// Derived class Rectangle inheriting from Shape<Rectangle>
class Rectangle : public Shape<Rectangle> {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Method to calculate area
    double calculateArea() const {
        return width * height;
    }

    // Method to calculate perimeter
    double calculatePerimeter() const {
        return 2 * (width + height);
    }
};

// Derived class Circle inheriting from Shape<Circle>
class Circle : public Shape<Circle> {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Method to calculate area
    double calculateArea() const {
        return 3.1459 * radius * radius;
    }

    // Method to calculate perimeter
    double calculatePerimeter() const {
        return 2 * 3.1459 * radius;
    }
};

// Function to test static polymorphism performance
void test_static_polymorphism() {
    Rectangle rect(5, 10);
    Circle circ(7);
    for (int i = 0; i < 1000000; ++i) {
        rect.getArea();
        rect.getPerimeter();
        circ.getArea();
        circ.getPerimeter();
    }
}

int main() {
    // Measure execution time for static polymorphism
    auto start = std::chrono::high_resolution_clock::now();
    test_static_polymorphism();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Static polymorphism duration: " << duration.count() << " seconds" << std::endl;
    return 0;
}
