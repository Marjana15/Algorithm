#include <iostream>
using namespace std;

int main() {
    int code;
    cin >> code;

    int code1 = code / 10;
    int code2= code % 10;

    int swapped_code = code2 * 10 + code1;

    cout << swapped_code << endl;
    return 0;
}
