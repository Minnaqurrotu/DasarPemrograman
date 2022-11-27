#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    float rata_rata;
    for(int i = 1; i <= 20; i++){
        cout << i << endl;

        sum = sum + i;
        rata_rata = sum / 20;
    }
        cout << "Jumlah= " << sum << endl;
        cout << "Rata-rata= " << rata_rata << endl;
    return 0;
}
