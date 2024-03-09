// Update the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string S,A,B;
   cin>>S;
// Write the code below this line to generate String A
for(int i=0;i<S.length();i++){
    A+=S[i];
}

for(int i=S.length()-1;i>=0;i--){
    B+=S[i];
}

// Write the code below this line to generate String A
  

   for(int i=0; i<S.length();i++)
       {
         cout<<A[i];
       }
   cout<<endl;
   for(int i=0; i<S.length();i++)
       {
         cout<<B[i];
       }
   cout<<endl;
  }
 return 0;
}
   
