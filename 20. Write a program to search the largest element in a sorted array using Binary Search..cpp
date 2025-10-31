#include <iostream>
using namespace std;
int main() {
    int n, i, l, r, m;
    cout << "Enter size: "; 
    cin >> n;
    int a[100];
    cout << "Enter sorted array:\n";
    for (i = 0; i < n; i++) 
        cin >> a[i];
    l = 0; r = n - 1;
    while (l < r) {
        m = (l + r + 1) / 2;
        if (a[m] >= a[0]) l = m;
        else r = m - 1;
    }
    cout << "Largest: " << a[l] << endl;
    return 0;
}

Output
Enter size : 5
Enter sorted array :
1 3 5 7 9
Largest : 9