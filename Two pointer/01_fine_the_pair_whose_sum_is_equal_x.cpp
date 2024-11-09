#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    /*
        n
        a1,a2,a3,...,an
        x
        we want to identify which pair is equal to x
        example(a1,a3) = x 

        for(int i=0; i<n-1; ++i){
            for(int j=i+1; j<n; j++){
                if(a[i]+a[j]==x)cout << "Yes";
            }
        }
        TLE : O(n^2)
        we should reduce the time 
    */
   //is there any pair sum = x ? 
    int n ; cin >> n ; 
    int a[n] ;for(int &x:a) cin >> x ; 
    sort(a,a+n); 
    int x ; cin >> x ; 
    for(int x:a) cout << x << " " ; 
    cout << endl ; 

    //two pointer algorithm
    int i=0,j=n-1,ans = 0;
    while(i<=j){
        if(a[i]+a[j]==x){
            ans = x ; 
            break ; 
        }
        if(a[i]+a[j]>x) j--;
        else i++;
    }
    cout << (ans>0?"YES\n":"NO\n") ; 
}