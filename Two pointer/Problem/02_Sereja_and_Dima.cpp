//https://codeforces.com/problemset/problem/381/A
#include<iostream>
using namespace std; 

int main(){
	int n ;cin >> n ; 
	int a[n] ; for(int &x:a) cin >> x ;
	int l=0; 
	int r=n-1;
	int she = 0 , dima = 0 ; 
	int i = 0 ; 
	while(l<=r){
		if(i&1){
			if(a[l]>a[r]) dima+=a[l++] ; 
			else dima += a[r--];
		}
		else{
			if(a[l]>a[r]) she+=a[l++] ; 
			else she += a[r--];
		}
		i++;
	}
	cout << she << " " << dima << endl ; 
}