#include <iostream>
using namespace std;

int main() {

    int col_s, row_s, col_f, row_f;

    cin >> col_s >> row_s >> col_f >> row_f;

    if ((col_s == col_f) && (row_s != row_f) or (col_s != col_f) && (row_s == row_f)) {
        cout << "YES";
    }
    else {
        cout << "NO";    
    }

    return 0;
}