using namespace std;
#include <iostream>
#include <vector>

class Solution {
public:
    int search(vector<int>& nums, int target)
    { 
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (target > nums[mid]) low = mid + 1;
            else if (target < nums[mid]) high = mid - 1;
            else return mid;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector v = { -1, 0, 3, 5, 9, 12 };
    int target = 2;
    cout << s.search(v, target);
}
