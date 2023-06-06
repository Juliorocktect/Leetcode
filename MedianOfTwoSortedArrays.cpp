// Median of two sorted arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined = combine(nums1,nums2);
       
        double median = toDouble(sum(combined))/combined.size();
        return median;
    }

    int sum(vector<int> nums)
    {
        int sum = 0;
                 for (int i = 0;i < nums.size();i++)
         {
             sum = sum + nums[i];
         }
         return sum;
    }
    vector<int> combine(vector<int> nums1,vector<int> nums2)
    {
        vector<int> newVector;
        for (int i = 0; i < nums1.size();i++)
        {
            newVector.push_back(nums1[i]);
        }
        for (int j = 0;j < nums2.size();j++)
        {
            newVector.push_back(nums2[j]);
        }
        return newVector;
    }
    
    double toDouble(int num)
    {
        return (double) num;
    }
};
