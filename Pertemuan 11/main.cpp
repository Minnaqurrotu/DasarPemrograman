#include <iostream>

using namespace std;

int main()
{
    // 1,3,5,7,8,10,12   31
    // 4,6,9,11  30

    int tanggal, bulan;

    cout << "Masukkan tanggal: ";
    cin >> tanggal;
    cout << "Masukkan bulan: ";
    cin >> bulan;

    if ((tanggal >= 1 && tanggal <= 31) && (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12))
    {
        cout << "tanggal valid";
    }
    else if ((tanggal >= 1 && tanggal <= 31) && (bulan == 9 || bulan == 4 || bulan == 6 || bulan == 11))
    {
        cout << "tanggal valid";
    }
    else if (tanggal >= 1 && tanggal <= 28 && bulan == 2)
    {
        cout << "tanggal valid";
    }
    else
    {
        cout << "tanggal tidak valid";
    }
    return 0;
}
