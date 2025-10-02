/*
Full code 
approach: 2 pointer .
copy and use in code editor to learn and run in terminal.
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
       int n = nums.size();
       int i = 0 , j = n-1;
       while(i<j){
        int ps = nums[i] + nums[j];
        if (ps > target){
            j--;
        }
        else if(ps<target ){
            i++;
        }
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
       }
       return ans; 
    }
};

int main (){
    Solution sol;
    vector<int> input = {2,7,11,15};
    int target = 9;
    vector<int> result = sol.twoSum(input , target);
    for(int val: result){
        cout<< val << " ";
    }
}