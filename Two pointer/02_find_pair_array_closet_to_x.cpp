#include<iostream>
#include<algorithm>
using namespace std; 

void solve(int a[],int n,int x){
    int i=0; 
    int j=n-1;
    int dif = INT_MAX ;
    int value1 , value2 ;  
    while(i<=j){
        int sum = a[i]+a[j] ; 
        if(dif > abs(sum-x)){
            value1 = a[i] ; 
            value2 = a[j] ;
            dif = abs(sum-x);
        }
        if(sum>x) j--;
        else i++;
    }
    cout << value1 << " " << value2 << endl ; 
}
int main(){
    int n ; cin >> n ; 
    int a[n] ; for(int &x:a) cin >> x ; 
    sort(a,a+n);
    int x ; cin >> x ; 
    /*
        N 
        a1,a2,a3,...,an
        x
        which pair sum is closest to x 

        1 2 3 4 5 
        x = 7
        (5,1) pair is closet to 5
        1--> 6 --> abs(6-7) = 1
        2--> 5 --> abs(5-7) = 2
        3--> 4 --> abs(4-7) = 3
        here the minimum difference pair is closest 
    */
    solve(a,n,x);
}