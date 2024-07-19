#include <iostream>
#include <chrono>

// Base class Shape with virtual methods
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual ~Shape() = default;
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Method to calculate area
    double calculateArea() const override {
        return width * height;
    }

    // Method to calculate perimeter
    double calculatePerimeter() const override {
        return 2 * (width + height);
    }
};

// Derived class Circle inheriting from Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Method to calculate area
    double calculateArea() const override {
        return 3.1459 * radius * radius;
    }

    // Method to calculate perimeter
    double calculatePerimeter() const override {
        return 2 * 3.1459 * radius;
    }
};

// Function to test dynamic polymorphism performance
void test_dynamic_polymorphism() {
    Rectangle rect(5, 10);
    Circle circ(7);
    Shape* shapes[] = { &rect, &circ };
    for (int i = 0; i < 1000000; ++i) {
        for (Shape* shape : shapes) {
            shape->calculateArea();
            shape->calculatePerimeter();
        }
    }
}

int main() {
    // Measure execution time for dynamic polymorphism
    auto start = std::chrono::high_resolution_clock::now();
    test_dynamic_polymorphism();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Dynamic polymorphism duration: " << duration.count() << " seconds" << std::endl;
    return 0;
}
