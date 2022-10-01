#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int answer, num;
    cin >> num;

    num -= 1;
    answer = (3 * (num / 3 + 1)) * (num / 3) + (5 * (num / 5 + 1)) * (num / 5) - (15 * (num / 15 + 1)) * (num / 15);

    cout << answer / 2 << endl;
    return 0;
}
