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

int main(){
	string x,y; cin >> x>> y ;
	int n = x.size() , m = y.size();
	int v[n+1][m+1] ;

	for(int i=0; i<=n; ++i)v[i][0]=0;
	for(int i=0; i<=m; ++i)v[0][i]=0;

	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			v[i][j] = (x[i-1]==y[j-1])?v[i-1][j-1]+1:max(v[i-1][j],v[i][j-1] );
		}
	}

	string ans ; 
	int i=n,j=m;
	while(v[i][j]){
		if(x[i-1]==y[j-1])
			ans+=x[i-1],i--,j--;
		else
			v[i-1][j]>=v[i][j-1]?i--:j--;
		
	}
	cout << ans << endl ; 
} 