#include <iostream>

using namespace std;

int main()
{
    unsigned int num, f1, f2, f3, answer;
    cin >> num;

    f1 = 1;
    f2 = 2;
    answer = 0;

    while (f2 < num){
        if (f2 % 2 == 0){
            answer += f2;
        }
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    cout << answer;
    return 0;
}
