//https://codeforces.com/contest/1251/problem/A
#include<iostream>
#include<set>
using namespace std; 

int main(){
	int t ; cin >> t ; while(t--){
		string s ; cin >> s ; 
		set<char> m ; 
		for(int i=0; i<s.size(); ++i){
			if(s[i]==s[i+1])  ++i; else m.insert(s[i]); 
		}
		for(auto x:m)
			cout << x ; 
		cout <<endl ; 
	}
}