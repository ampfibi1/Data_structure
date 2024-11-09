#include<iostream>
using namespace std; 

void swap(int &a, int &b )
{
	a = a^b; 
	b = a^b; 
	a = a^b; 
}
int main()
{
	int n ; cin >> n ; 
	int a[n] ; 
	for(int &x:a) cin >> x ; 

	/*
	//selection Sort
	for(int i=0; i<n; ++i)
	{
		int min_index = i ; 
		for(int j=i+1; j<n; ++j)
		{
			if(a[min_index]>a[j])
				min_index = j ; 
		}
		if(i!=min_index)
		{
			swap(a[i],a[min_index]);
		}
	}

	//Bubble Sort
	bool s ; 
	for(int i=0; i<n-1; ++i)
	{
		s = false ; 
		for(int j=0; j<n-i-1; ++j)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				s = true ; 
			}
			if(!s) break; 
		}
	}

	//insertion Sort
	for(int i=1; i<n-1; ++i)
	{
		for(int j=i; j>0; --j)
		{
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
			else 
				break; 
		}
	}

	//cocktail shaker sort
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;

        // Bubble forward
        for (int i = start; i < end; ++i) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        swapped = false;
        --end;

        // Bubble backward
        for (int i = end - 1; i >= start; --i) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }

        ++start;
    }
	*/

	for(auto x : a) cout << x << " "; 
}