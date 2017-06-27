#include <iostream>

using namespace std;

int main() {
    int n_sec;

    cin >> n_sec;
    n_sec = n_sec % 86400;

    cout << n_sec / 3600 << ':';
    n_sec -= n_sec / 3600 * 3600;
    if (n_sec < 600){
        cout << n_sec / 600;
        cout << n_sec / 60 << ':';
    }
    else {
        cout << n_sec / 60 << ':';
    }

    n_sec -= n_sec / 60 * 60;
    if (n_sec < 10){
        cout << n_sec / 600;
        cout << n_sec % 60;
    }
    else {
        cout << n_sec % 60;
    }


    return 0;
}