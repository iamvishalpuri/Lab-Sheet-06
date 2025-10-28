#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;
    cout << "Enter rows and columns: "; 
cin >> r >> c;
    int a[10][10];
    cout << "Enter matrix:\n";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) cin >> a[i][j];
    cout << "Matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}

Output
Enter rows and columns: 2 3
Enter matrix :
1 2 3
4 5 6
Matrix :
    1 2 3
    4 5 6