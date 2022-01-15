class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
       int n =size(nums)-1;
       int index =binary_search(nums , 0 , n , target);

       return index;
    }

    int binary_search(vector<int>& nums , int a , int b , int target)
    {
        if(a<=b)
        {
            int mid = (a+b)/2 ;
            if(nums[mid]==target){return mid;}
            if(nums[mid]<target){return binary_search(nums , mid+1 , b , target); }
            if(nums[mid]>target){return binary_search(nums , a , mid-1 , target); }

        }
    return -1;
    }

};
