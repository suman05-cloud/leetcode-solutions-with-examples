/*
Full code 
approach: 2 pointer.
copy and use in code editor to learn and run in terminal.
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int len = height.size();
            int maxArea = 0;
            int left = 0;
            int right = len - 1;

            while(left < right) {
                int area = (right - left) * min(height[left], height[right]);
                maxArea = max(maxArea, area);

                if (height[left]  < height[right]) {  // change the one which is min
                    left += 1;
                }
                else{
                    right -= 1;
                }
            }
            return maxArea;



        }
    };

int main (){
    Solution sol;
    vector<int> input = {1,8,6,2,5,4,8,3,7};
    int result = sol.maxArea(input);
    cout<< result;  // output: 49
  
}