class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int min =0;
        int max = size(nums);
        
        while(min<= max){
            int mid = (min + max)/2;
            cout<<"mid = "<<mid<<endl;
            if(mid < size(nums)){
                 if(nums[mid]==target){return mid;}
                 if(nums[mid]>target){max = mid-1;}
                 if(nums[mid]<target){min = mid+1;}
            cout << "min = "<<min<<endl;
            cout << "max = "<<max<<endl;
            cout << "------"<<endl;
            }
            else{return mid;}
        }
       
        return min;

    }
};
