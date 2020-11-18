#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int prev = nums[0];

        for (int i = 0; i < nums.size() -1; i++)
        {
            if (nums[i] == nums[i +1]) {

                prev = nums[i +1];
            }

            
            
        }

        return prev;
        
    }
};

int main(){


    int n, input;
    cin>>n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        cin>>input;
        nums.push_back(input);

    }

    Solution s;
    int no = s.findDuplicate(nums);

    cout<<no<<endl;
    


    return 0;
}