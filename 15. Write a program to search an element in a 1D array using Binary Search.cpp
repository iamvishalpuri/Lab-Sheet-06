#include <iostream>
using namespace std;
int main() {
    int n, i, x, l, r, m, f = 0;
    cout << "Enter size: "; 
    cin >> n;
    int a[100];
    cout << "Enter sorted elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Search: ";
    cin >> x;
    l = 0; r = n - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == x) { f = 1; break; }
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    if (f) cout << "Found at index " << m << endl;
    else cout << "Not found\n";
    return 0;
}

Output
Enter size : 5
Enter sorted elements :
10 20 30 40 50
Search : 30
Found at index 2