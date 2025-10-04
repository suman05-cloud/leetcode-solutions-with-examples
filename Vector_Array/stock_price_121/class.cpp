#include<vector>
using namespace std;

/*
using STL vector array.
directly copy and paste in leetcode 

*/

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxprofit = 0  , minprice = nums[0];
        for(int i = 1; i< nums.size();i++){
            maxprofit = max(maxprofit , nums[i] - minprice);

            minprice = min(minprice,nums[i]);
        }
        return maxprofit;
    }
};


