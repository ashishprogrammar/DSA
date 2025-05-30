class Solution {
public:
    int GCD(int a,int b){
        if(b==0)
        return a;
        return GCD(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        //first approach finding maximum and minimum number
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(min>nums[i]){
                min=nums[i];
            }
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int gcd = GCD(min,max);
        return gcd;
    }
};
