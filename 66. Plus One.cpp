class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size();
      int carry=0;

      for(int i =n-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
                carry=1;
            }
            else{
                if(carry==1){ digits[i]++; carry =0; break;}
                else{ digits[i]++; break;}
            }
    }
    if(carry==1){
            vector<int> ans(n+1);
            ans[0]=1;
        return ans;
    }
    return digits;
    }

};
