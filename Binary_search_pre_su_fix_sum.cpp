#include<iostream>
using namespace std; 

void merge(int l,int r,int mid,int a[])
{
	int l_sz = mid-l+1 , r_sz = r-mid ; 
	int L[l_sz+1] , R[r_sz+1] ; 
	for(int i=0; i<l_sz; ++i) L[i] = a[i+l];
	for(int i=0; i<r_sz; ++i) R[i] = a[i+mid+1];

	L[l_sz] = R[r_sz] = INT_MAX ; 
	int l_i = 0 , r_i = 0 ; 
	for(int i=l; i<=r; ++i)
		a[i] = (L[l_i]<=R[r_i] ? L[l_i++] : R[r_i++] ) ;
}
void mergeSort(int l,int r,int a[])
{
	if(l==r) return ;
	int mid = ((l+r)>>1);
	mergeSort(l,mid,a);
	mergeSort(mid+1,r,a);
	merge(l,r,mid,a);
}
int binary_search(int key,int n,int a[])
{
	int l=0 , r= n , mid ; 
	
	while(l<=r)
	{
		mid = ((l+r)>>1) ; 
		if(a[mid]==key) return mid ; 
		if(a[mid]<key) l=mid+1;
		else r = mid - 1 ; 
	}
	return -1 ; 
}

int main()
{
	int n ; cin >> n ; 
	int a[n] ; 
	for(int &x : a) cin >> x ; 

	/*mergeSort(0,n-1,a) ; 
	for(int x : a) cout << x << " " ; 
	cout <<endl; 
	cout << "---- Binary Search Key ----\n" ; 
	int key ; cin >> key ;
	int index = binary_search(key,n,a);
	cout << index ; */

	cout << "\n___pre-fix_SUM____\n";
	int pre[n+1] = {} ; 
	for(int i=1; i<=n; ++i)
		pre[i] = pre[i-1]+a[i-1]; 
	for(int x:pre) cout << x << " " ; 
	cout << endl;
	
	cout << "Use of prefix sum \n" ; 

	int t ; cin >> t ; 
	while(t--)
	{
		int l,r; cin >> l >> r ; 
		cout << pre[r]-pre[l-1] << endl ; 
	}
/*
	cout << "\n___su-fix_SUM____\n";
	int suf[n+1] = {} ; 
	for(int i=n-1; i>=0; --i)
		suf[i] = suf[i+1]+a[i] ; 
	for(int x : suf) cout << x << " ";*/
}