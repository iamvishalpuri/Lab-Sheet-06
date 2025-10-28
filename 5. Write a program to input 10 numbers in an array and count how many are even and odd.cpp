#include <iostream>
using namespace std;
int main() {
    int a[10], i, e = 0, o = 0;
    cout << "Enter 10 numbers:\n";
    for (i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) e++; else o++;
    }
    cout << "Even: " << e << ", Odd: " << o << endl;
    return 0;
}