#include<bits/stdc++.h>
using namespace std;
int maxsumpath(int a[],int b[],int n,int m){
	int i = 0,j = 0;
	int suma = 0, sumb = 0, ans = 0 ;
	while(i < n && j < m){
		if(a[i] < b[ j]){
			suma += a[i];
			i++;
		}else if(a[i] > b[j]){
			sumb += b[j];
			j++;
		}else{
			ans += max(suma,sumb) + a[i];
			suma = 0;
			sumb = 0;
			j++;
			i++;
		}
	}
	while (i < n){
		suma += a[i];
		i++;
	}
	while ( j < m){
		sumb += b[j];
		j++;
	}
	ans += max(suma,sumb);

	return ans;

}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		int arr1[n1],arr2[n2];
		for(int i =0; i<n1 ; i++){
			cin>>arr1[i];
		}
		for(int i =0; i<n2;i++){
			cin>>arr2[i];
		}
		cout<< maxsumpath(arr1,arr2,n1,n2) <<endl;
		
	}
	return 0;
}