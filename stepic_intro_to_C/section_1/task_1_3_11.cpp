#include <iostream>

using namespace std;

int main() {
    int s1, s2, s3, f1, f2, f3;

    cin >> s1 >> s2 >> s3 >> f1 >> f2 >> f3;
    cout << (f1 - s1) * 3600 + (f2 - s2) * 60 + (f3 - s3);

    return 0;
}