// here I used the arithmetic progression formula.
// S(n) = (2a + d * (n - 1)) * n / 2
// where n is a number of members of the sum.
// a is a first number of the sum.
// d is a step of the arithmetic progression.
// a and d are the same.
// This means that the formula can be shortened.
// S(n) = d * (n + 1) * n / 2

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
