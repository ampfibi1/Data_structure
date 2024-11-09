#include<iostream>
using namespace std; 

int pivat_element(int a[],int size)
{
	int s = 0 , e = size-1 ; 
	int mid = s + (e-s)/2 ; 

	while(s<e)
	{
		if(a[mid]>=a[0]) s = mid + 1 ; 
		else e = mid ; 
		mid = s + (e-s)/2 ;
	}
	return s ; 
}
int main()
{
	/*pivat mean 
		a[] = {11,17,20,1,4}   *      *
		a[] = {1,11,17,20,1}  *    (*)1
		*/

	int n ; cin >> n ; 
	int a[n] ; 
	for(auto &x : a) cin >>x ; 

	int pivat = pivat_element(a,n);
	
	cout << pivat << " " << a[pivat] ;
}