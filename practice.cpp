/*
#include<iostream>
using namespace std; 

/*int par(int a[],int l,int h){
	int pi = a[h] , i = l-1;

	for(int j=l; j<h; ++j)
		if(a[j]<=pi)
			swap(a[++i],a[j]);

	swap(a[++i],a[h]);
	return i;
}
int par(int a[],int l,int h){
	int pi = a[l] , i = l ; 
	for(int j=l+1; j<=h; ++j)
		if(a[j]<=pi) swap(a[++i],a[j]);
	swap(a[i],a[l]);
	return i ; 
}
void quickSort(int a[],int l,int h){
	if(l>=h) return;

	int pi = par(a,l,h);
	quickSort(a,l,pi-1);
	quickSort(a,pi+1,h);
}

//Counting Sort
void countSort(int a[],int l,int h){
	int mx = 0 ; 
	for(int i=0; i<h; ++i) mx=max(mx,a[i]);
	
	int count[mx+1] ={};
	for(int i=0; i<h; ++i) count[a[i]]++; 

	int pre_sum[mx+1] = {};
	for(int i=1; i<=mx; ++i)
		pre_sum[i]=pre_sum[i-1]+count[i] ;

	int output[h] ; 
	for(int i=0; i<h; ++i){
		output[--pre_sum[a[i]]] = a[i] ; 
	}
	for(int x:output) cout << x << " " ; 
}
int main(){
	int n ; cin >> n ; int a[n];
	for(int &x:a) cin >> x ;

	//quickSort(a,0,n-1);
	countSort(a,0,n);

	//for(int x:a) cout << x<< " ";
}*/
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

    char res[100];
    int k = 0, i = m, j = n;
    
    while (C[i][j]) {
        if (X[i-1] == Y[j-1]) {
            res[k++] = X[i-1];
            i--, j--;
        } else {
            (C[i][j-1] >= C[i-1][j]) ? j-- : i--;
        }
    }

    res[k] = '\0'; 

    cout << strrev(res) << endl;
}
