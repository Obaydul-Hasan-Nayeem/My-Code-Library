#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs;
    ofstream ofs;

    ifs.open("input.txt");
    ofs.open("output.txt");

    int x;
    double y, z;

    ifs >> x >> y >> z;
    cout << x << " " << y << " " << z << "\n"; // printing to the output file
//  ofs << "Hello World\n";

    ofs << x << " " << y << " " << z << "\n"; // printing to the output file

    ifs.close();
    ofs.close();

    return 0;
}
