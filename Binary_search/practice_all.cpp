/*#include<iostream>
using namespace std; 

int binary_search(int a[],int size ,int key )
{
	int s = 0 , e = size-1; 
	int mid = s + (e-s)/2 ; 

	while(s<=e)
	{
		if(a[mid] == key ) return mid ; 
		if(a[mid] > key) s = mid+1;
		else e = mid -1 ; 
		mid = s+(e-s)/2 ;
	}
	return -1 ;
}
int main()
{
	int n , key ; cin >> n >> key  ;
	int a[n]; 
	for(auto &x : a) cin >> x ; 

	int index = binary_search(a,n,key);

	cout << index << endl ; 
}*/

/*#include<iostream>
using namespace std; 

int left_find(int a[],int n , int key )
{
	int s = 0 , e = n-1 ; 
	int mid = s+(e-s)/2; 
	int ans = -1 ; 
	while(s<=e)
	{
		if(a[mid] == key )
		{
			ans = mid ; 
			e = mid -1 ; 
		}
		if(a[mid]>key) e = mid - 1 ;
		else if(a[mid]<key)s = mid + 1 ; 
		mid = s + (e-s)/2;
	}
	return ans ; 
}
int right_find(int a[],int n , int key )
{
	int s = 0 , e = n-1 ; 
	int mid = s+(e-s)/2; 
	int ans = -1 ; 
	while(s<=e)
	{
		if(a[mid] == key )
		{
			ans = mid ; 
			s = mid+1 ; 
		}
		if(a[mid]<key)s = mid + 1 ;
		else if(a[mid]>key)   e = mid - 1;
		mid = s + (e-s)/2;
	}
	return ans ; 
}
int main()
{
	int n , key ; cin >> n >> key ;
	int temp[n] ; 
	for(auto &x : temp ) cin >> x ; 

	int left = left_find(temp,n,key);
	int right = right_find(temp,n,key);
	int length = right - left + 1 ;   
	cout << left << " " <<  right << endl ; 
	cout << length ; 
}*/
/*
#include<iostream>
using namespace std; 

int find_mountain(int a[],int size)
{
	int s = 0 , e = size-1; 
	int mid = s + (e-s)/2;
	while(s<e)
	{
		if(a[mid]<a[mid+1]) s = mid +1 ; 
		else e = mid ; 
		mid = s + (e-s)/2 ;
	}
	return s ; 
}
int main()
{
	int n ; cin >> n ;
	int a[n]; 
	for(auto &x : a) cin >> x ;  

	int index = find_mountain(a,n);
	cout << a[index] ; 
}*/

#include<iostream>
using namespace std; 

int find_pivit(int a[],int size)
{
	int s = 0 , e = size -1 ; 
	int mid = s+(e-s)/2; 
	while(s<e)
	{
		if(a[mid]>=a[0]) s = mid +1 ;
		else e = mid ; 
		mid = s + (e-s)/2 ; 
	}
	return s ; 
}
int main()
{
	int n ; cin >> n ;
	int a[n] ; 
	for(int &x: a) cin >> x ; 

	int pivit = find_pivit(a,n) ; 
	
	cout << pivit << " " << a[pivit] << endl ; 
}