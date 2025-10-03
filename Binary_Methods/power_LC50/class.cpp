#include<vector>
using namespace std;

/*
using binary basically dividing by 2.
directly copy and paste in leetcode 

*/

class Solution {
public:
    double myPow(double x, int n) {
        long bf = n;
        if(n<0){
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


