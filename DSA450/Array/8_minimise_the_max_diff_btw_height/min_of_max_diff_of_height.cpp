class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int min_ele=arr[0];
        int max_ele=arr[n-1];
        for(int i=1;i<n;i++){
            if(arr[i]-k<0){
                continue;
            }
            min_ele=min(arr[0]+k,arr[i]-k);
            max_ele=max(arr[i-1]+k,arr[n-1]-k);
            ans=min(ans,max_ele-min_ele);
        }
        return ans;
    }
};