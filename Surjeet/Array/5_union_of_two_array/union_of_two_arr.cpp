class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            st.insert(b[j]);
        }
        return st.size();
    }
};
