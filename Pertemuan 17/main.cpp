#include <iostream>

using namespace std;

int main()
{
    while (true) {
    cout << endl;
    cout << " === Daftar Menu === " << endl;
    cout << "1. Nasi Kerikil" << endl;
    cout << "2. Rica-Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;
    cout << "4. Kepiting Resto" << endl;

    int x;
    cout << "Masukkan kode menu: ";
    cin >> x;
    cout << endl;

    switch (x) {
    case 1:
        cout << "1. Nasi Kerikil" << endl;
        break;
    case 2:
        cout << "2. Rica-Rica Bekicot" << endl;
        break;
    case 3:
        cout << "3. Pepes Brotowali" << endl;
        break;
    case 4:
        cout << "4. Kepiting Resto" << endl;
        break;
    default:
        cout << "Maaf, kode menu tidak ditemukan";

        }
    }
    return 0;
}
