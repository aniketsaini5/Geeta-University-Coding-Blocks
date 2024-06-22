#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int main(){
	int N,Q;
	cin>>N;
    vector <long long> arr(N);
	for(int i = 0; i< N; ++i){
		cin>>arr[i];
	}

cin>>Q;

for(int i =0; i< Q; i++){
	int X;
	cin>>X;
	vector <long long> temp(N); 
    for(int j =0 ; j<N; ++j){
        temp[j] = arr[j] + arr[(j - X + N)%N];
        temp[j] %= MOD;
	}
	arr =  temp;

}
long long sum = 0;
for(int i =0; i<N; i++){
	sum+=arr[i];
	sum %= MOD;
}


cout<< sum<<endl;

}