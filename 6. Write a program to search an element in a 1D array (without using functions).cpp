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
    cout << "Enter element to search: ";
    cin >> x;
    for (i = 0; i < n; i++) {
        if (a[i] == x) { f = 1; break; }
    }
    if (f) cout << "Found at index " << i << endl;
    else cout << "Not found\n";
    return 0;
}

Output
Enter size : 5
Enter elements :
10 20 30 40 50
Enter element to search : 30
Found at index 2