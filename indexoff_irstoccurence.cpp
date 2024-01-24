class Solution {
public:
    int strStr(string haystack, string needle) {
       
       int m=haystack.length();
       int n=needle.length();

       for( int i=0 ; i <= m ; i++ ) {
           if(haystack[i]==needle[0]){
               bool check = true;
                 for( int j =0 ; j < n ; j++ ) {
               if(needle[j] != haystack[i+j] ){
                   check = false;
                   break;
               }
           }
           
         
           if (check)
               return i;
           }
       }
       return -1;
       
       
        // if(needle==haystack){
        //     return 0;
        // }
        // else{
        //     return -1;
        // }
    }
};
