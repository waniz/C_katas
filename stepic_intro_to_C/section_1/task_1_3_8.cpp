#include <iostream>

using namespace std;

int main() {
    int user_1, user_2, user_3;
    int answer = 0;

    cin >> user_1 >> user_2 >> user_3;

    if (user_1 % 2 == 0) {
        answer = user_1  / 2;
    }
    else {
         answer = user_1  / 2 + 1;
    }

    if (user_2 % 2 == 0) {
        answer += user_2  / 2;
    }
    else {
         answer += user_2  / 2 + 1;
    }

    if (user_3 % 2 == 0) {
        answer += user_3  / 2;
    }
    else {
         answer += user_3  / 2 + 1;
    }

    cout << answer;
    return 0;
}