#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int hola;
    cout<<&hola<<endl;
    
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(void*) << endl;

    return 0;
}