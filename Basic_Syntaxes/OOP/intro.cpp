#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }
};

class Rectangle
{
public:
    int width, height;

    // area
    int calculate_area()
    {
        return width*height;
    }

    // perimeter
    int calculate_perimeter()
    {
        return 2 * (width + height);
    }

    Student s2; // object
};

// recursive class
class Person
{
public:
    string name;
    Person *father, *mother;

    void print_info() {
        cout << name << " " << father->name << " " << mother->name << "\n";
    }
};

// driver code
int main()
{
    // an object to the Student class
    Student s;
    s.name = "Nayeem";
    s.std_id = 14;
    s.age = 22;
    s.fathers_name = "Khalilur Rahman";
    s.mothers_name = "Kohinur Begum";

    s.print_information();

    cout << "\n";

    // an object to the Rectangle class
    Rectangle r1;
    r1.height = 5;
    r1.width = 10;

    cout << "Area: " << r1.calculate_area() << "\nPerimeter: " << r1.calculate_perimeter() << "\n";

    r1.s2.name = "Obaydul Hasan Nayeem";
    r1.s2.print_information();

    cout << "\n";

    // an object to the Person class
    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "Tanvir";
    p.father->name = "Khokon";
    p.mother->name = "Sheuly";

    p.print_info();

    return 0;
}

