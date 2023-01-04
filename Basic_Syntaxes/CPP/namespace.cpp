#include<iostream>

// using namespace std;

//namespace std {
//    cout
//}

int x = 5;

namespace info {
    int x = 10;
}

int main()
{
    std::cout << x << "\n";
    std::cout << info::x << "\n";

    return 0;
}
