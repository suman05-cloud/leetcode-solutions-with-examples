/*
Full code 
approach: binary dividing the power by 2  .
copy and use in code editor to learn and run in terminal.
*/

#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long bf = n;
        if(n<0){   // Handiling the negative values
            x = 1/x;
            bf = -bf; // bf is binary form code
        }
        double ans = 1;
        while(bf>0){ 
            if(bf%2 == 1){
                ans*=x;
            }
            x*=x;
            bf/=2;
        }
        return ans;

    }
};


int main (){
    Solution sol;
    double result = sol.myPow(2,10);
    cout << result; // output : 1024
}