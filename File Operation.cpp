#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s;
    ofstream out;
    out.open("sample.txt");
    out << "Hello \nREEEE";
    out.close();

    ifstream in;
    in.open("sample.txt");
    while (in.eof() == 0)
    {
        getline(in, s);
        cout << s << endl;
    }
    in.close();
    return 0;
}

