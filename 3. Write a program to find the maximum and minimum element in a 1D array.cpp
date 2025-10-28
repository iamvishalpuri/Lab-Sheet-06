#include <iostream>
using namespace std;
int main() {
    int n, i, max, min;
    cout << "Enter size: ";
    cin >> n;
    int a[100];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout << "Max = " << max << ", Min = " << min << endl;
    return 0;
}

Output
Enter size : 6
Enter elements :
3 8 1 9 4 2
Max = 9, Min = 1