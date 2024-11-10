#include<iostream> 
#include<algorithm>
using namespace std; 

int main(){
    /*
        input = {5,32,1,7,10,50,19,21,2}
        output = 21 , 2 , 19

        input = {5,32,1,7,10,50,19,21,0}
        output : no such troplet exist 
    */
    int n ; cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ; 
    sort(a,a+n);
    bool f= false ; 
    for(int i=n-1; i>=0; --i){
        int l = 0 ; 
        int r = i-1 ; 
        while(l<r){
            int sum = a[l]+a[r];
            if(a[i]==sum){
                cout << "(" <<a[i]<<" " << a[l]<< " " << a[r] << ")\n" ; 
                f = true ; 
            }
            if(a[i]>sum) l++ ; 
            else r--;
        }
    }
    if(!f) cout << "no such triplet exist\n" ;
}