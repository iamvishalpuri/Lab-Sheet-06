#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;
    cout << "Enter rows and columns: "; cin >> r >> c;
    int a[10][10], b[10][10], d[10][10];
    cout << "Enter matrix A:\n";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];
            cout << "Enter matrix B:\n";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) 
            cin >> b[i][j];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) d[i][j] = a[i][j] - b[i][j];
    cout << "Difference:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) 
            cout << d[i][j] << " ";
            cout << endl;
    }
    return 0;
}

Output
Enter rows and columns: 2 2
Enter matrix A :
5 6
7 8
Enter matrix B :
1 2
3 4
Difference :
4 4
4 4