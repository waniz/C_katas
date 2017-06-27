#include <iostream>

using namespace std;

int main() {
    int digits;

    cin >> digits;

    if (digits / 1000 == digits % 10){
        //cout << digits / 1000 << digits % 10;
        if (digits / 100 % 10 == digits / 10 % 10){
            cout << 1;
        }
        else{
            //cout << digits / 100 % 10 << digits % 10;
            cout << 0;
        }
    }	
    else{
        cout << 0;
    }

    
    return 0;
}