#include<bits/stdc++.h>
using namespace std;
	int n,m,c;

void Mazepath( vector<vector<char>>  grid, int i,int j, string s){

	if(i == n-1 && j== m-1){
		cout<<s<<" ";
		c++;
		return;
	}
	if(i<n && j<m && grid[i][j] == '.'){

		//right
		Mazepath(grid,i+1,j,s+'V');
		// digonal
		Mazepath(grid,i,j+1,s+'H');
		Mazepath(grid,i+1,j+1,s+'D');

	}

}


int main(){
	cin>>n>>m;
    vector<vector<char>> grid(n,vector<char> (m,'.'));

	string s;

	Mazepath(grid,0,0,s);

	cout<<endl<<c<<endl;
}