/*
Full code 
approach: normal logic of vector array manupulation .
copy and use in code editor to learn and run in terminal.
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxprofit = 0  , minprice = nums[0];
        for(int i = 1; i< nums.size();i++){     // Note that the iteration is starting from 1 not 0;
            maxprofit = max(maxprofit , nums[i] - minprice);  // returns 0 when there is no profit

            minprice = min(minprice,nums[i]);  
        }
        return maxprofit;
    }
};

int main (){
    Solution sol;
    vector<int> input = {7,1,5,3,6,4};
    int result = sol.maxProfit(input);
    cout<< result;  // output: 5
  
}