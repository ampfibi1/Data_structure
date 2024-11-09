#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    int n ; cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ; 
    int b[n] ; for(int &x:b) cin >> x ; 
    int x; cin >> x ; 

    //two pointer algo
    int l = 0 ; 
    int r = n-1 ; 
    int dif = INT_MAX ; 
    int il , ir ; 
    while(l<n && r>=0){
        int sum = a[l]+b[r];
        if(abs(sum-x)<dif){
            il = l ; ir = r ; 
            dif = abs(sum-x);
        }
        if(sum>x) r--;
        else l++; 
    }
    cout << a[il] << "," << b[ir] << endl ; 
}