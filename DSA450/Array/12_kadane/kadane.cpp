class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans=arr[0];
        long long sum_so_far=arr[0];
        for(int i=1;i<n;i++){
            sum_so_far=max(sum_so_far+(long long)arr[i],(long long)arr[i]);
            ans=max(ans,sum_so_far);
        }
        return ans;
        
    }
};