//https://codeforces.com/contest/1462/problem/A
#include<iostream>
using namespace std; 

void solve(){
    int n ;cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ;

    int l=0; 
    int r=n-1;
    while(l<r){
        cout << a[l] << " " <<a[r] << " " ;
        l++;
        r--; 
    }
    if(n&1){
        int mid = (n>>1);
        cout << a[mid] ;
    }
    cout << endl ;
}
int main(){
    int t; cin >> t ; while(t--)solve();
}