class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1;i>=0; i--){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

//code which is not seen to us
// int main()
// {
//     vector<int> v = {1,2,3};
//     solution s;
//     vector<int> arr = s.plusOne(v);
//     for(auto x: arr) cout<<x<<' ';
// }
