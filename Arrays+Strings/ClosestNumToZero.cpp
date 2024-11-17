#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int answer = INT_MAX;
        int compute;
        for (int i = 0; i < nums.size(); i++) {
            compute = abs(nums[i]);
            cout << "The difference from " << nums[i] << " to 0 is " << compute << endl;
            if (compute < answer) 
                answer = compute; 
        }
        return answer;
    }
};

/*
   Test cases for vector nums: 
   {-4, -2, 1, 4, 8} = 1
   {2, -1, 1} = 1

   Time Complexity: O(n)
   Space Complexity: O(1)
*/

