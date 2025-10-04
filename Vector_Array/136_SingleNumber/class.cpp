

/*
using bitwise operater
directly copy and paste in leetcode

*/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
        int ans = nums[0];
        for(int i = 1 ; i< nums.size();i++){
            ans ^= nums[i]; // XOR OPERATER
        }
        return ans;
    }
    
};


