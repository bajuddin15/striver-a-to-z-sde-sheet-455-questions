// problem - Given an array, rotate the array to the right by k steps, where k is non-negative.
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]


class Solution {
public:
//     void rotate(vector<int>& nums, int k) {
//         queue<int> q;
//         vector<int> ans;
//         int n = nums.size();
//         for(int i=n-1;i >=0;i--){
//             q.push(nums[i]);
//         }
        
//         while(k--){
//             int ele = q.front();
//             q.pop();
//             q.push(ele);
//         }
        
//         while(!q.empty()){
//             ans.push_back(q.front());
//             q.pop();
//         }
        
//         for(int i=0;i<n;i++){
//             nums[i] = ans[i];
//         }
        
//         reverse(nums.begin(),nums.end());
       
//     }
    
    // using stl
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size())
            k = k % nums.size();
        int first_index = nums.size() - k;
        vector<int> sub(nums.begin() + first_index, nums.end());
        nums.erase(nums.begin() + first_index, nums.end());
        nums.insert(nums.begin(), sub.begin(), sub.end());
    }
};