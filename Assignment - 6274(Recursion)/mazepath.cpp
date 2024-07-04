// Take as input N1 and N2, both numbers. N1 and N2 is the number of rows and columns on a rectangular board. Our player starts in top-left corner of the board and must reach bottom-right corner. In one move the player can move 1 step horizontally (right) or 1 step vertically (down) or 1 step diagonally (south-east).

// Write a recursive function which:
// a. Returns the count of different ways the player can travel across the board. Print the value returned.
// b. Prints moves for all valid paths across the board.

// Input Format
// Enter the number of rows N1 and number of columns N2

// Constraints
// None

// Output Format
// Display the total number of paths and print all the possible paths in a space separated manner

// Sample Input
// 3
// 3
// Sample Output
// VVHH VHVH VHHV VHD VDH HVVH HVHV HVD HHVV HDV DVH DHV DD
// 13


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