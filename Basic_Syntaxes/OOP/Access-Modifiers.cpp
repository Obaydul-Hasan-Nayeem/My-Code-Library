// Total Access Modifiers: public, private, protected

#include <bits/stdc++.h>
using namespace std;

class User
{
protected:
    string name;

public:
    string address;
};

class Admin : User
{
private:
    string designation;

public:
    void set(string nm, string dg, string ad)
    {
        name = nm;
        designation = dg;
        address = ad;
    }

    void print()
    {
        cout << name << " (protected) \n";
        cout << designation << " (private) \n";
        cout << address << " (public)\n";
    }
};

int main()
{
    Admin ad;
    ad.set("Nayeem", "Software Engineer", "Barishal");
    ad.print();
}
