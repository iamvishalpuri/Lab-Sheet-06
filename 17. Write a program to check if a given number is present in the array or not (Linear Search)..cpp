#include <iostream>
using namespace std;
int main() {
    int n, i, x, f = 0;
    cout << "Enter size: "; 
    cin >> n;
    int a[100];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Check: "; c
        in >> x;
    for (i = 0; i < n; i++) if (a[i] == x) { f = 1; break; }
    if (f) cout << "Present\n"; else cout << "Not present\n";
    return 0;
}

Ouptut
Enter size : 4
Enter elements :
10 20 30 40
Check : 25
Not present