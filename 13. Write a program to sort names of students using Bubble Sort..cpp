#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, i, j;
    string a[100], t;
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter names:\n";
    for (i = 0; i < n; i++) 
        getline(cin, a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) 
            { t = a[j]; 
              a[j] = a[j + 1]; 
              a[j + 1] = t;
            }
    cout << "Sorted names:\n";
    for (i = 0; i < n; i++) 
        cout << a[i] << endl;
    return 0;
}

Output
Enter number of students : 4
Enter names :
Priya
Aman
Zara
Bob
Sorted names :
Aman
Bob
Priya
Zara