#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;
    cout << "Enter rows and columns: "; cin >> r >> c;
    int a[10][10], b[10][10], s[10][10];
    cout << "Enter matrix A:\n";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) cin >> a[i][j];
    cout << "Enter matrix B:\n";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) cin >> b[i][j];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) s[i][j] = a[i][j] + b[i][j];
    cout << "Sum:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) cout << s[i][j] << " ";
        cout << endl;
    }
    return 0;
}

Output
Enter rows and columns: 2 2
Enter matrix A :
1 2
3 4
Enter matrix B :
5 6
7 8
Sum :
6 8
10 12