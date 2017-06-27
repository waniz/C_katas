#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << k - (k / n) * n;
    return 0;
}