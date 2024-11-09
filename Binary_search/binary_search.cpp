#include<iostream>
using namespace std; 

int binary_search(int a[],int start,int end,int val)
{
	int mid = start + (end-start)/2; 

	while(start<=end)
	{
		if(a[mid]==val)
			return mid ; 
		if(a[mid]>val) end = mid-1 ;
		else start = mid +1;

		mid = start + (end-start)/2 ; 
	}

	return -1; 
}
int main()
{
	int a[] = {1,2,3,4,5,6};
	int index = binary_search(a,0,6,5); 

	cout << index; 
}