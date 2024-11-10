#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    int n ; cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ; 
    sort(a,a+n);

    int x ; cin >> x ;

    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            int l = j+1 ; 
            int r = n-1 ; 
            while(l<=r){
                int sum = a[i]+a[j]+a[l]+a[r];
                if(sum==x)
                    cout << "(" <<a[i]<< "," << a[j]<<"," << a[l]<<"," << a[r] << ")" << endl ; 
                if(sum<x)l++;
                else r--;
            }
        }
    }
}