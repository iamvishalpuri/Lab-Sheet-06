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

Output
Enter 10 numbers:
1 2 3 4 5 6 7 8 9 10
Even : 5, Odd : 5