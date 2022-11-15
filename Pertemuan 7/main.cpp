#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int temperatur = -2;

    if ((temperatur % 2 == 0 && temperatur < 0 )|| temperatur % 2 == 0 && temperatur == 0) {
    cout << "ice" << endl;
    } else if (temperatur % 2 == 0 && temperatur > 100) {
    cout << "gas" << endl;
    } else {
    cout << "liquid" << endl;
    }
    return 0;
}
