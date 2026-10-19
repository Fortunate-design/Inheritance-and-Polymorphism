#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Employee : public Person {
protected:
    int employeeID;
    double salary;

public:
    void setEmployeeDetails(int id, double s) {
        employeeID = id;
        salary = s;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 2
class Lecturer : public Employee {
private:
    string department;

public:
    void setDepartment(string d) {
        department = d;
    }

    void displayLecturerDetails() {
        displayPersonDetails();
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Lecturer lecturer;

    lecturer.setPersonDetails("Desire", 30);
    lecturer.setEmployeeDetails(102, 1500000);
    lecturer.setDepartment("Computer Engineering");

    cout << "UNIVERSITY LECTURER DETAILS" << endl;
    lecturer.displayLecturerDetails();

    return 0;
}