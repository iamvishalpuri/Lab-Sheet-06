#include <iostream>
using namespace std;
int main() {
    int n, i, x, l, r, m, f = 0;
    cout << "Enter size: "; 
    cin >> n;
    int a[100];
    cout << "Enter sorted integers:\n";
    for (i = 0; i < n; i++) 
        cin >> a[i];
    cout << "Search: "; 
    >> x;
    l = 0; r = n - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == x) { f = 1; break; }
        if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    if (f) cout << "Found\n"; else cout << "Not found\n";
    return 0;
}

Output
Enter size : 5
Enter sorted integers :
1 3 5 7 9
Search : 6
Not found