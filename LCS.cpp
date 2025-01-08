#include<iostream>
#include<string.h>
using namespace std; 

int maxEq(int a, int b) {
    return a >= b ? a : b;
}

int main() {
    char X[100], Y[100];
    cin >> X >> Y; 

    int n = strlen(X), m = strlen(Y);
    int C[m+1][n+1];
    
    for (int i = 0; i <= m; ++i) C[i][0] = 0;
    for (int i = 0; i <= n; ++i) C[0][i] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            C[i][j] = X[i-1] == Y[j-1] ? C[i-1][j-1] + 1 : maxEq(C[i][j-1], C[i-1][j]);
        }
    }

    string res;
    int k = 0, i = m, j = n;
    
    while (C[i][j]) {
        if (X[i-1] == Y[j-1]) 
            res += X[i-1],i--, j--;
        else 
            (C[i][j-1] >= C[i-1][j]) ? j-- : i--;
    }

    // res[k] = '\0'; 

    cout << (res) << endl;
}