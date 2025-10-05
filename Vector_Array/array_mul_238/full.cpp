#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];  // storing the prefix multiplication in the ans
        }
        int suffix = 1;  // the first declared as 1
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];  // updating suffix
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> input = {1,2,3,4};
    vector<int> result = sol.productExceptSelf(input);
    for(int val : result){
        cout<< val << " ";  // output: 24 12 8 6
    }
}