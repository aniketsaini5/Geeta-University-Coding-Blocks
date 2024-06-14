// Conversion(Any To Any)

// Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.

// Input Format
// Constraints
// 0 < N <= 1000000000
// sb and db <= 10

// Output Format
// Sample Input
// 8
// 2 
// 33
// Sample Output
// 11011
// Explanation
// All input output is as integers and in separate lines.

// //incomple

#include<bits/stdc++.h>
using namespace std;
int ToDecimal(int sn, int sb) {
    int dec_no = 0;
    int p = 0;
    
    while (sn > 0) {
        int ld = sn % 10;
        sn = sn / 10;
        dec_no += ld * pow(sb, p);
        p++;
    }
    
    return dec_no;
}

string ToAnyBase(int Decimal_No, int db){
	string result = "";
	while(Decimal_No>0){
		int rem = Decimal_No % db;
		result = to_string(rem)+result;
		Decimal_No /=db;
	}
	return result;
}


int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;
    int dn = ToDecimal(sn, sb);
    string res = ToAnyBase(dn, db);

    cout << res << endl;
    
    return 0;
}
