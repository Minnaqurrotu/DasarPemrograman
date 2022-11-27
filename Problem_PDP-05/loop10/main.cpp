#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i < 8; i++){
        cout << "Looping yang ke - " << i << endl;
        for(int j = 1; j <= 10; j++){
            cout << "- angka " << j << endl;
            if(j == 10){
                cout <<""<< endl;
            }
        }
    }
    return 0;
}
