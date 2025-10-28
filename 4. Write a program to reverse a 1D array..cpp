#include <iostream>
using namespace std;
int main() {
    int n, i, t;
    cout << "Enter size: "; cin >> n;
    int a[100];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n / 2; i++) {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    cout << "Reversed: ";
    for (i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}

Output
Enter size : 5
Enter elements :
10 20 30 40 50
Reversed : 50 40 30 20 10