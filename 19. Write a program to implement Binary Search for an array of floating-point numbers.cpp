#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i;
    float x, l = 0, r, m, a[100];
    bool f = false;
    cout << "Enter size: "; cin >> n;
    cout << "Enter sorted floats:\n";
    for (i = 0; i < n; i++) 
        cin >> a[i];
    cout << "Search: "; 
    cin >> x;
    r = n - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if (abs(a[(int)m] - x) < 0.0001) { f = true; break; }
        if (a[(int)m] < x) l = m + 1; 
        else r = m - 1;
    }
    if (f) cout << "Found\n"; else cout << "Not found\n";
    return 0;
}

Output
Enter size : 4
Enter sorted floats :
1.1 2.2 3.3 4.4
Search : 3.3
Found