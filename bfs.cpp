#include<bits/stdc++.h>
using namespace std; 

unordered_map<char,vector<char>> buildTree(){
	unordered_map<char,vector<char>> tree ; 
	tree['A'] = {'B','C'};
	tree['B'] = {'D','E'};
	tree['C'] = {'F','G'};
	return tree ; 
}

void bfs(char start , char goal,unordered_map<char,vector<char>> &tree){
	unordered_map<char,char> parentTrack;
	queue<char> q ; 
	unordered_set<char> visited ; 

	q.push(start); 
	visited.insert(start);
	parentTrack[start] = 0 ;

	while(!q.empty()){
		char curr = q.front() ; 
		q.pop();

		if(curr==goal){
			cout << "path: " ; 
			vector<char> path ;

			while(curr){
				path.push_back(curr);
				curr = parentTrack[curr] ;
			}
			reverse(path.begin(),path.end());
			for(char x:path) cout << x << " ";
			cout << endl ; 
		}
		for(char child:tree[curr]){
			if(!visited.count(child)){
				q.push(child);
				visited.insert(child);
				parentTrack[child] = curr ;  
			}
		}
	}
	// for(auto &x:visited) cout << x << " " ; 
	// cout << "Child:Parent\n";
	/*for(auto &x:parentTrack){
		cout << x.first << " : " << x.second << endl ;
	}*/
}
int main(){
	unordered_map<char,vector<char>> tree = buildTree();

	char start = 'A' ; 
	char goal = 'G' ; 

	bfs(start,goal,tree);

}