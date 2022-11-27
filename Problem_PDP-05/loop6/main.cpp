#include <iostream>

using namespace std;

int main()
{
    cout << "Program Ini Akan Berhenti JIka Anda Menginputkan Angka -99" << endl;
    int i, max, min;
    while(i != -99){
    cout << "Masukkan nilai : " << endl;
    cin >> i;
    if(i == -99){
        break;
    }
    if(i != -99){
        if(max < i){
            max = i;
        }
        if(min > i){
            min = i;
        }
    }
    }
    cout << "Max= " << max << endl;
    cout << "Min= " << min << endl;
    return 0;
}
