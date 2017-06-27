#include <iostream>
#include <cstdio>

using namespace std;

int first_fucntion(int a, int b, int c, int d) {
    int max_int = a;
    if (b > max_int) {
        max_int = b;
    }
    if (c > max_int) {
        max_int = c;
    }
    if (d > max_int) {
        max_int = d;
    }
    return max_int;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int answer = first_fucntion(a, b, c, d);

    cout << answer;

    return 0;
}