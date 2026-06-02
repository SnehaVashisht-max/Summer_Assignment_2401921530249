class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        double Sum=0;
        double maxSum=INT_MIN;
        for(int i=0;i<k;i++){
            Sum += nums[i];
        }
        maxSum= Sum;
        for(int i=k; i<n; i++){
            Sum += nums[i]-nums[i-k];
            maxSum= max(maxSum,Sum);
        }
        return maxSum/k;
        
    }
};
