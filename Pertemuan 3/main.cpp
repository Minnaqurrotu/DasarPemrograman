#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int u = 18;
    float t = 155;
    char ub = 'L';
    string ubs = "155";

    cout << "Umur saya: " << u;
    cout << endl;
    cout << "Tinggi saya: " << t;
    cout << endl;
    cout << "Ukuran baju saya: " << ub;
    cout << endl;

    int a;
    cout << "\nMasukkan angka: ";
    cin >> a;
    cout << "Angka anda: " << a + u;

    return 0;
}
