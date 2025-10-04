

/*
using brute force
directly copy and paste in leetcode 

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; i++){
                if(nums[i] + nums[j] == target){
                    return{i , j};
                }
            }
        }
        return {};
    }
};



