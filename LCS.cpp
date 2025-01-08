#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int m, n, i, j;
    char X[100], Y[100];
    cout << "Enter the first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;
 
    m = strlen(X);
    n = strlen(Y);
 
    cout << "Length 1: " << m << endl;
    cout << "Length 2: " << n << endl;
 
    int c[m+1][n+1];
 
    for(i=0; i<=m; i++)
    {
        c[i][0] = 0;
    }
 
    for(i=0; i<=n; i++)
    {
        c[0][i] = 0;
    }
 
    /*cout << "Matrix:" <<endl;
 
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << c[i][j] << "   ";
        }
        cout << endl;
    }*/
 
 
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(X[i-1] == Y[j-1])
            {
                c[i][j] = c[i-1][j-1] + 1;
            }
            else
            {
                if(c[i][j-1] >= c[i-1][j])
                {
                    c[i][j] = c[i][j-1];
                }
                else
                {
                    c[i][j] = c[i-1][j];
                }
            }
        }
    }
 
 
    cout << "Matrix:" <<endl;
 
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << c[i][j] << "   ";
        }
        cout << endl;
    }
 
    char sub[100];
    int k=0;
    i=m;
    j=n;
 
    while(c[i][j])
    {
        if(X[i-1] == Y[j-1])
        {
            sub[k]=X[i-1];
            i--;
            j--;
            k++;
        }
        else if(c[i][j-1] >= c[i-1][j])
        {
            j--;
        }
        else
        {
            i--;
        }
    }
 
    cout << "String: " << strrev(sub);
 
    return 0;
}