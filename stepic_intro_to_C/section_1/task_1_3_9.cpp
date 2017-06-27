#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    int rub, semirub;

    cin >> a >> b >> n;
    rub = a * n + (b * n) / 100;
    semirub = (b * n) % 100;
    
    cout << rub << ' ' << semirub;
    return 0;
}