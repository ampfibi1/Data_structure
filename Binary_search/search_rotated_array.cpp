#include<iostream>
using namespace std; 

int find_pivart(int a[],int size)
{
	int s = 0 , e = size-1; 
	int mid = s + (e-s)/2; 
	while(s<e)
	{
		if(a[mid]>=a[0]) s = mid + 1 ; 
		else e = mid ; 
		mid = s+(e-s)/2 ;
	}
	return s ; 
}
int binary_search(int a[],int s,int e,int key)
{
	int mid = s + (e-s)/2 ; 

	while(s<=e)
	{
		if(a[mid] == key) return mid ;
		if(a[mid]>key) e = mid -1 ; 
		else s = mid+1 ; 
		mid = s+(e-s)/2; 
	}

	return -1;
}
int main()
{
	int n , key ; cin >> n >> key ;
	int a[n] ; 
	for(auto &x : a) cin >> x ; 

	int pivart = find_pivart(a,n); 

	int index ; 
	if(key >= a[pivart] && key <=a[n-1])
		index = binary_search(a,pivart,n-1,key) ;
	else
		index = binary_search(a,0,pivart-1,key) ; 

	cout << index ; 
}