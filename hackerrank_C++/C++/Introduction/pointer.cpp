#include <cstdio>

using namespace std;

void update(int *a, int *b) {
    int sum = *a + *b;
    int absDiff = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDiff;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
