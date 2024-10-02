#include<iostream>
using namespace std; 

int left_occ(int a[],int size,int key)
{
	int s=0 , e=size; 
	int mid = s +(e-s)/2 ;
	int ans = -1 ; 
	while(s<=e)
	{
		if(a[mid] == key)
		{
			ans = mid ; 
			e = mid-1; 
		}
		if(a[mid]<key) s = mid +1 ; 
		else e = mid -1 ; 
		mid = s + (e-s)/2 ; 
	}
	return ans ; 
}
int right_occ(int a[],int size,int key)
{
	int s=0 , e=size; 
	int mid = s +(e-s)/2 ;
	int ans = -1 ; 

	while(s<=e)
	{
		if(a[mid] == key)
		{
			ans = mid ; 
			s = mid+1; 
		}
		if(a[mid]>key) e = mid -1; 
		else s = mid +1  ; 
		mid = s + (e-s)/2 ; 
	}
	return ans ; 
}
int main()
{
	int n, k ; cin >> n >> k; 
	int a[n]; 
	for(auto &x : a) cin >> x ; 

	int left = left_occ(a,n,k); 
	int right = right_occ(a,n,k); 

	cout << left << " " << right << endl ; 
}