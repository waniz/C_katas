#include <stdio.h>
#include <time.h>
 
void fun()
{
    printf("fun() starts \n");
    int c = 0;
    for (int a = 1; a < 100000; a++) {
        for (int b = 1; b < 11; b++) {
            if (a == b) {
                c++;
            }
        }
    }
    printf("fun() ends \n");
}
 
int main()
{
    clock_t t;
    t = clock();
    fun();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}