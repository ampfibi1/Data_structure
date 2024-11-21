#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n ;cin >> n ; 
	int a[n];
	int mx = 0 ; 
	for(int &x:a){ cin >> x ; mx = max(mx,x); } 

	int c[mx+1] = {} ;
	for(int i=0; i<n; ++i) c[a[i]]++;

	int pre_sum[mx+2] = {} ;
	
	for(int i=1; i<mx+3; ++i)
		pre_sum[i] = pre_sum[i-1] + c[i-1] ;


	int output_array[n] ; 
	for(int i=0; i<n; ++i)
		output_array[--pre_sum[a[i]+1]] = a[i] ;
	
  
	for(int x:output_array) cout << x << " " ; 
}