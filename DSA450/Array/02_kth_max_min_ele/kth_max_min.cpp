
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
 
    swap(arr[i], arr[r]);
    return i;
}
    int kthSmallest(int arr[], int l, int r, int K) {
        //code here
        // //min heap
        // priority_queue <int, vector<int>, greater<int>> pq;
        // int n=r-l+1;
        // for(int i=0;i<n;i++){
        //     pq.push(arr[i]);
        // }
        // for(int j=1;j<k;j++){
        //     pq.pop();
        // }
        // return pq.top();
        if (K > 0 && K <= r - l + 1) {
 
        int pos = partition(arr, l, r);
 

        if (pos - l == K - 1)
            return arr[pos];
        if (pos - l > K - 1) 
            return kthSmallest(arr, l, pos - 1, K);
 
 
        return kthSmallest(arr, pos + 1, r,K - pos + l - 1);
    }
 
    return INT_MAX;
    }
};