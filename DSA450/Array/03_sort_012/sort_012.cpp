class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(a[j]==0){
                swap(a[j],a[i]);
                i++;
                j++;
            }
            else if(a[j]==2){
                swap(a[j],a[k]);
                k--;
            }
            else{
                j++;
            }
        }
        
        
    }
    
};