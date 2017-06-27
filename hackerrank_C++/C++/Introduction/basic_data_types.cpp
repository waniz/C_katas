#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int input_1;
    long int input_2;
    long long int input_3;
    char input_4;
    float input_5;
    double input_6;

    scanf("%d %ld %lld %c %f %lf", &input_1, &input_2, &input_3, &input_4, &input_5, &input_6);

    printf("%d", input_1);
    printf("\n");
    printf("%ld", input_2);
    printf("\n");
    printf("%lld", input_3);
    printf("\n");
    printf("%c", input_4);
    printf("\n");        
    printf("%f", input_5);
    printf("\n");
    printf("%lf", input_6);
    printf("\n");
                        
    return 0;
}