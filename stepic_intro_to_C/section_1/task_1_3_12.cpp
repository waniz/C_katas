#include <iostream>

using namespace std;

int main() {
    int v, t;

    cin >> v >> t;
    if (v > 0){
        cout << v * t % 109;
    }
    else{
        if ( (v * t) % 109 == 0) {
            cout << 0;
        }
        else{
            cout << 109 + (v * t) % 109;
        }
        
    }

    if (v == 0){
        cout << 109;
    }
    return 0;
}