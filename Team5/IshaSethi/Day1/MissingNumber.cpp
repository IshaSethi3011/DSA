
class Solution 
{
    public:
     int missingNumber(vector<int>& nums) 
     {
        int n,e_sum=0,a_sum=0,no;
         n = nums.size();
         e_sum = (n*(n+1))/2;
         for(int i=0;i<n;i++)
         {
            a_sum += nums[i]; 
         } 
         no=e_sum-a_sum;
         return no;
     }
};
