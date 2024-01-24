class Solution {
public:
    int lengthOfLastWord(string s) {
        int m =s.length() , kount =0 , flag=0;
        for(int i=m-1; i>=0 ; i--){
            if(s[i]==' '&& flag)
            break;
            if(s[i] != ' '){
                flag = 1;
                kount ++ ;
            }
          
        }
        return kount;

    }
};
