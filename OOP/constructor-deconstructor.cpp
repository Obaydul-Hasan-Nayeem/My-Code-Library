/// constructor
// eta akta function jeta kono akta class er variable gulo k set kore dey.
// ai function e return type dite hoy na
// parameter na diye object declare kora jabe na

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int age;
    string fathersName;
    string mothersName;

    // constructor
    Student(string nm, int idd, int ag, string fnm, string mnm) {
        name = nm;
        id = idd;
        age = ag;
        fathersName = fnm;
        mothersName = mnm;
    }

    Student(string nm, int idd) {
        name = nm;
        id = idd;
    }

    Student() {

    }


    void print_information() {
        cout << name << "\n";
        cout << id << "\n";
        cout << age << "\n";
        cout << fathersName << "\n";
        cout << mothersName << "\n\n";
    }
};

int main()
{
    Student s1("Nayeem", 14, 22, "Khalil", "Kohinur");
    s1.print_information();

    Student s2("Nayeem", 14);
    s2.print_information();

    Student s3;
    //s3.print_information();

    return 0;
}
