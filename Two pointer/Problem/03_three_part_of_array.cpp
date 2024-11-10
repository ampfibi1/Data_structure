//https://codeforces.com/contest/1006/problem/C
#include<iostream>
using namespace std; 

int main(){
	int n ;cin >> n ; 
	int a[n] ; for(int &x:a) cin >> x ; 

	long long sum1 = 0 , sum2 = 0 , ans = 0 ; 
	int l = 0 ; 
	int r = n-1 ; 
	while(l<=r){
		if(sum1<sum2)
			sum1 += a[l++] ; 
		else
			sum2 += a[r--] ;
		if(sum1==sum2) ans = sum1 ;
	}
	cout << ans << endl ; 
}