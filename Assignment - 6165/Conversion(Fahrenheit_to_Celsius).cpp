// Conversion (Fahrenheit to Celsius)
//Take the following as input.

// Minimum Fahrenheit value
// Maximum Fahrenheit value
// Step

// Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
// 0 -17
// 20 -6
// 40 4
// 60 15
// 80 26
// 100 37

// Input Format
// The first line of the input contains an integer denoting the Minimum Fahrenheit value. The second line of the input contains an integer denoting the Maximum Fahrenheit value. The third line of the input contains an integer denoting the Step.

// Constraints
// 0 < Min < 100
// Min < Max < 500
// 0 < Step<150

// Output Format
// Print Fahrenheit and Celsius values separated by a tab. Each step should be printed in a new line.

// Sample Input
// 0 
// 100 
// 20
// Sample Output
// 0 -17 
// 20 -6 
// 40 4 
// 60 15 
// 80 26 
// 100 37
// Explanation
// First number in every output line is fahrenheit, second number is celsius. The two numbers are separated by a tab.

// Algorithm:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `min_F`, `max_f`, `step`, aur `C` naam ke integer variables declare karo.
//     b. User se `min_F`, `max_f`, aur `step` ka input lo.
//     c. Jab tak `min_F` less than or equal to `max_f` ho, loop chalao:
//         i. `C` ko calculate karo (`C = (min_F - 32) * 5 / 9`).
//         ii. `min_F` aur `C` ko tab-separated format me print karo.
//         iii. `min_F` ko `step` se increment karo (`min_F += step`).
// 3. Program end karo.

#include<iostream>
using namespace std;

int main() {
	int min_F,max_f,step;
    int C;
	cin>>min_F;
    cin>>max_f;
    cin>>step;

	while(min_F<=max_f){
		C=(min_F-32)*5/9;
        cout<<min_F<<"\t"<<C<<endl;
		min_F += step;
	}

	return 0;
}

