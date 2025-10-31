#include <iostream>
using namespace std;
int main() {
    int n, i, x, c = 0;
    cout << "Enter size: "; 
    cin >> n;
    int a[100];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) 
        cin >> a[i];
    cout << "Find count of: "; 
    cin >> x;
    for (i = 0; i < n; i++) 
        if (a[i] == x)
            c++;
    cout << "Occurrences: " << c << endl;
    return 0;
}

Output
Enter size : 6
Enter elements :
5 3 5 2 5 1
Find count of : 5
Occurrences : 3