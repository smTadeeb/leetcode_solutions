/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=two-pointers
*/
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator out_it, in_it, p;
        vector<int> tmp;
        out_it=nums.begin();
        while(out_it!=nums.end())
        {
        for(in_it=out_it+1; in_it!=nums.end() && *in_it==*out_it; out_it++,in_it++);
        tmp.push_back(*out_it);
        out_it=in_it;
        }
        tmp.shrink_to_fit();
	    nums.insert(nums.begin(), tmp.begin(), tmp.end());
        return tmp.size();
    }
};
