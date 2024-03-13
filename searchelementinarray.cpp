#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int N,X;
cin>>N>>X;
bool find = false;
for(int i=0;i<N;i++){
    int arr;
    cin>>arr;
    if(arr==X){
    find=true;
    break;
    }

}
    if(find){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
