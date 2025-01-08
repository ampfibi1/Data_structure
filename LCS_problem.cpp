#include<iostream>
using namespace std; 

void solve(){
	int n , m ; cin >> n >> m ; 
	
	int chk[1001] = {} , ok = 0 , b[m+1];

	for(int i=1; i<=n; ++i){
		int x ; cin >> x ; 
		chk[x] = i ; 
	}
	for(int i=1; i<=m; ++i){
		int x ; cin >> x ; 
		b[i] = x ; 
		if(chk[x]) ok=i; 
	}

	if(ok) 
		cout << "YES\n" << q << " "<<b[ok] << endl ; 
	else cout << "NO\n" ;
}
int main(){
	int t ; cin >> t ;while(t--) solve();
}