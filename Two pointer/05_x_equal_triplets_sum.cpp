#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    int n ; cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ;
    int x ; cin >> x ; 
    sort(a,a+n) ;

    for(int i=0; i<n; ++i){
       int l=i+1; 
       int r=n-1; 
       while(l<=r){
            int sum = a[i]+a[l]+a[r];
            if(sum==x) 
                cout << "(" << a[i] << "," << a[l] << "," << a[r] <<")\n" ;
            if(sum>x) r--;
            else l++ ;  
       }
    }
}