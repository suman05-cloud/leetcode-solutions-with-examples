/*
Full code 
approach: Bitwise XOR operater .
copy and use in code editor to learn and run in terminal.
*/
#include<iostream>
#include<vector>
using namespace std;

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
int main(){
    Solution sol;
    vector<int> input = {4,1,2,1,2};
    int result = sol.singleNumber(input);
    cout << result; // output 4 
}


