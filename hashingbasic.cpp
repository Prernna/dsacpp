#include <bits/stdc++.h>
using namespace std;

int main(){
	//hashing for array
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n ; i++){
		cin>>arr[i];
	}
	//precompute
	int hash[14]={0};
	for(int i=0; i<n; i++){
		hash[arr[i]] += 1;
	}
	
	int q;
	cin>>q;
	while(q--){
		int number;
		cin>>number;
		//fetch
		cout<<hash[number]<<endl;
	}
	
	//hashing for strings
	string s;
	cin>>s;
	//pre compute
	int hashh[256]={0};
	for(int i=0;i<s.size();i++){
		hashh[s[i]]++;
	}
	int x;
	cin>>x;
	while(x--){ 
		char c;
		cin>>c;
		//fetch
		cout<<hashh[c]<<endl;
	}
	
	
	return 0;
	
}
