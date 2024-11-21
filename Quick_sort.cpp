#include<iostream>
using namespace std; 

int partition(int a[],int low,int high){
	int pivot = a[high] ;
	int i = low-1;

	for(int j=low; j<=high-1; ++j){
		if(a[j]<=pivot)
			swap(a[++i],a[j]);
	}

	swap(a[i+1],a[high]);
	return i+1;
}
void quickSort(int a[],int low,int high){
	if(low<high){
		int pivot_index = partition(a,low,high);
		quickSort(a,low,pivot_index-1);
		quickSort(a,pivot_index+1,high);
	}
}
int main(){
	int n ;cin >> n ; 
	int a[n] ; 
	for(int &x:a) cin >> x ; 

	quickSort(a,0,n-1);

	for(int x:a) cout << x << " " ;

	return 0 ; 
}