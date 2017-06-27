#include <iostream>

using namespace std;

int main() {
    int h, a, b, cur_level, days;
    bool below = true;

    cin >> h >> a >> b;
    
    cur_level = 0;
    days = 0;
    while (below){
        cur_level += a;
        days += 1;
        if (cur_level >= h){
            cout << days;
            below = false;
        }
        cur_level -= b;  

    }
    
    return 0;
}