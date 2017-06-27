#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int col_s, row_s, col_f, row_f;

    cin >> col_s >> row_s >> col_f >> row_f;

    if ((abs(col_s - col_f) == 2 and abs(row_s - row_f) == 1) or (abs(col_s - col_f) == 1 and abs(row_s - row_f) == 2)) {
        cout << "YES";
    }
    else {
        cout << "NO";    
    }

    return 0;
}