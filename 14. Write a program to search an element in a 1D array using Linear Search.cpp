#include <iostream>
using namespace std;
int main() {
    int n, i, x, p = -1;
    cout << "Enter size: "; 
    cin >> n;
    int a[100];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) 
        cin >> a[i];
    cout << "Search: "; 
    cin >> x;
    for (i = 0; i < n; i++) 
        if (a[i] == x) 
        { p = i; 
          break; }
    if (p != -1) cout << "Found at index " << p << endl;
    else cout << "Not found\n";
    return 0;
}

Output
Enter size : 5
Enter elements :
10 20 30 40 50
Search : 25
Not found