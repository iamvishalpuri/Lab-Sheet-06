#include <iostream>
using namespace std;
int main() {
    int n, i, s = 0;
    cout << "Enter size: ";
    cin >> n;
    int a[10];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    cout << "Sum = " << s;
    return 0;
}

Output
Enter size : 4
Enter elements :
5 10 15 20
Sum = 50