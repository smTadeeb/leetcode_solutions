/*
Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]


*/

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int it1_index, it2_index; 
	vector<int>::iterator it1, it2, tmp;
	it1=nums.begin(); 
        while(it1!=nums.end())
        {
            it2=it1+1;
            while(it2!=nums.end())
            {
                if(*it1+*it2 == target) break;
                it2++;
            }
            if(*it1+*it2 == target ) break;
            it1++;
	}
	it1_index=it1-nums.begin();
	it2_index=it2-nums.begin();
        vector<int> abc={it1_index,it2_index};
        return abc;
    }
};
