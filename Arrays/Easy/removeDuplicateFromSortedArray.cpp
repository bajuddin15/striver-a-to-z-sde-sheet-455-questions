// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_] return ength

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[i] != nums[j]){
                nums[++i] = nums[j];
            }
        }
        return i+1;
    }
};