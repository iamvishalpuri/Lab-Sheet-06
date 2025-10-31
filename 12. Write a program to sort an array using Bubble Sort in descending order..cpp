#include <iostream>
using namespace std;
int main() {
    int n, i, j, t;
    cout << "Enter size: "; cin >> n;
    int a[100];
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] < a[j + 1]) 
            {  t = a[j]; 
               a[j] = a[j + 1]; 
               a[j + 1] = t; 
            }
    cout << "Sorted in descending: ";
    for (i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}

Output
Enter size : 5
Enter elements :
10 20 30 40 50
Sorted in descending: 50 40 30 20 10