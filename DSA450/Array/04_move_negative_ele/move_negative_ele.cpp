class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        // int i=0;
        // int j=0;
        // while(j<n){
        //     if(arr[j]>0){
        //         swap(arr[i],arr[j]);
        //         i++;
        //     }
        //     j++;
        // }
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr1.push_back(arr[i]);
            }
            else{
                arr2.push_back(arr[i]);
            }
        }
        int k=0;
        for(int j=0;j<arr2.size();j++){
            arr[k++]=arr2[j];
        }
        for(int i=0;i<arr1.size();i++){
            arr[k++]=arr1[i];
        }
    }
};
