#include <iostream> 
using namespace std; 

// Define the Employee class
class Employee {
public:
    int id; // Data member (instance variable) to store employee ID
    string name; // Data member (instance variable) to store employee name
    float salary; // Data member (instance variable) to store employee salary

    // Constructor for the Employee class
    Employee(int i, string n, float s) {
        id = i; // Assign parameter i to data member id
        name = n; // Assign parameter n to data member name
        salary = s; // Assign parameter s to data member salary
    }

    // Member function to display employee information
    void display() {
        cout << id << "  " << name << "  " << salary << endl; // Print id, name, and salary
    }
};

// Main function
int main(void) {
    // Create Employee object e1 and initialize with id, name, and salary
    Employee e1 = Employee(01, "Nguyen The Ngo", 500);

    // Create Employee object e2 and initialize with id, name, and salary
    Employee e2 = Employee(02, "Chau Van Kim Cuong", 1000);

    // Call display() function to show information of object e1
    e1.display();

    // Call display() function to show information of object e2
    e2.display();

    return 0; 
}

