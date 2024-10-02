#include<iostream>
using namespace std;

int binary_search(int a[],int size)
{
	int s = 0, e = size;
	int mid = s + (e-s)/2 ; 

	while(s<e)
	{
		if(a[mid]<a[mid+1]) s = mid +1 ; 
		else e = mid ; 
		mid = s + (e-s)/2 ; 
	} 
	return e; 
}
int main()
{
	/*mountain array mean 
		arr[] = {1,2,5,0};       *
		arr[] = {0,1,2,5,0};   *   *
		arr[] = {0,5,0};            */

	int n ; cin >> n ; 
	int a[n]; 
	for(auto &x : a) cin >> x ; 

	int peack_index = binary_search(a,n);

	cout << a[peack_index] << endl ;
} 