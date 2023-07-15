#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    int digit1 = num / 10000;
    int digit2 = num % 10;

    int sum = digit1 + digit2;

    cout << sum << endl;

    return 0;
}

