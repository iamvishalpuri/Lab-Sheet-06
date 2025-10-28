#include <iostream>
using namespace std;
int main() {
    int n, i;
    cout << "Enter size: ";
    cin >> n;
    int a[100];
    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Array: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

Output
Enter size : 5
Enter 5 elements :
10 20 30 40 50
Array : 10 20 30 40 50