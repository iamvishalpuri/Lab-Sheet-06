#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns of A: "; cin >> r1 >> c1;
    cout << "Enter rows and columns of B: "; cin >> r2 >> c2;
    if (c1 != r2) { cout << "Cannot multiply!\n"; return 0; }
    int a[10][10], b[10][10], m[10][10] = { 0 };
    cout << "Enter matrix A:\n";
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++) cin >> a[i][j];
    cout << "Enter matrix B:\n";
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++) cin >> b[i][j];
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++) m[i][j] += a[i][k] * b[k][j];
    cout << "Product:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) 
            cout << m[i][j] << " ";
            cout << endl;
    }
    return 0;
}

Output
Enter rows and columns of A : 2 3
Enter rows and columns of B : 3 2
Enter matrix A :
1 2 3
4 5 6
Enter matrix B :
7 8
9 10
11 12
Product :
58 64
139 154