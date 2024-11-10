#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std; 

int main(){
    int n ; cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ; 
    /*
        N
        a1,a2,a3,a4,....,aN
        x

        a1,a3,a(n-1) 's sum is = x 
        value of three pair is calles triplets

        triplets zero mean , troplets sum = 0
        n=0
        1 -1 0 2 -2 3
        (1 , -1 , 0)
        (0 , 2 , -2)
        //brute force algo
        for(int i = 0 to n ){
            for(int j = i+1 to n ){
                for(int k = j+1 to n){
                    if(a[i]+a[j]+a[k]==0)
                        cout << a[i,j,k];
                }
            }
        }
        TLE : O(n^3) 
    */
    for(int i=0; i<n; ++i){
        unordered_set<int> s; 
        for(int j=i+1; j<n; ++j){
            int x = -(a[i]+a[j]) ; 
            /*
                a1 + a2 = -a3 
                a3 = -(a1+a2)
                then triplets zero 
            */
            if(s.find(x)!=s.end())
                cout << "(" << x << "," << a[i] << "," << a[j] << ")" << endl ; 
            else
                s.insert(a[j]);
        }
    }
}