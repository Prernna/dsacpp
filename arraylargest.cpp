#include <bits/stdc++.h>
using namespace std;

int main(){
	//Largest element in the array
	int arr[5] = {3,2,1,5,2};  
	int largest = arr[0];
	for(int i = 0 ; i<5 ;i++){
		if(arr[i]>largest) 
	{
		largest = arr[i];
		cout<<largest;
    }
	}
	//Second largest element in an array without sorting
	int ar[6] = {1,2,4,5,7,7};
	int large = ar[0];
	for(int i=4;i>=0;i--){
		if(ar[i] != large){
			int secondl = ar[i];
			break;
			cout<<secondl<<endl;
		}
	}

}
