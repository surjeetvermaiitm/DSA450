class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n<=1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int max_step=arr[0];
        int step=arr[0];
        int ans=1;
        int i=1;
        for(i=1;i<n;i++){
            if(i==n-1){
                return ans;
            }
            max_step=max(max_step,i+arr[i]);
            step--;
            if(step==0){
                ans++;
                if(i>=max_step){
                    return -1;
                }
                step=max_step-i;
            }
        }
        return -1;
    }
};