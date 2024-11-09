/*#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int a[3]; 
		for(auto &x : a) cin >> x ; 

		for(int i=0; i<5; ++i)
			(*min_element(a,a+3))++ ; 

		cout << a[0]*a[1]*a[2] << endl ; 
	} 
}*/
/*#include<iostream>
using namespace std; 

int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		int n , k ; 
		cin >> n >> k ; 
		int a[k] , mx = 0 , sum = 0 ; 
		for(auto &x : a) 
			{
				cin >> x ;
				mx = max(mx,x-1+x); 
				sum+=x-1+x;
			} 
	/*	sort(a,a+k);
		int sum = 0 ; 
		for(int i=0; i<k-1; ++i)
			sum += (2*a[i])-1 ; 
		cout << sum-mx << endl ; 
	} 
	return 0; 
}*/