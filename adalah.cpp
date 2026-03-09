#include <iostream>
using namespace std;

int main()
{
    int x;
    
    x = rand() % 10;

    if (x == 5)
    {
        x = x + 1;
        cout << "Nilai x Sudah dikoreksi menjadi : " << x << endl;
    }
cout << "Bilangan yang diberikan = " << x;
}