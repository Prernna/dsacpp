

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    int count_neg = 0;
        int count_zero = 0;
        for(int i = 0; i < N; i++)
        {
            if(A[i] == 0)
            {
                count_zero++;
            }
            else if(A[i] < 0)
            {
                count_neg++;
            } 
        }
        if((count_zero > 0) || (count_neg%2 == 0))
        {
            cout << 0 << endl;
        }
        else{
            cout <<1 << endl;
        }
       
	}
}	
