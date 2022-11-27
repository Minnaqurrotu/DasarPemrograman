#include <iostream>

using namespace std;

int main()
{
    cout << "Program Ini Akan Berhenti JIka Anda Menginputkan Angka -99" << endl;
    int i;
    while(i != -99){
    cout << "Masukkan nilai : " << endl;
    cin >> i;
    if(i == -99)
        break;
    }
    cout << "Keluar karena break" << endl;
    return 0;
}
