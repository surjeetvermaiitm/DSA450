class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            long long max_ele=0;
            for(int i=0;i<n;i++){
                max_ele=max(max_ele,arr1[i]);
            }
            for(int i=0;i<m;i++){
                max_ele=max(max_ele,arr2[i]);
            }
            max_ele++;
            int i=0,j=0,k=0;
            while(i<n && j<m && k<(n+m)){
                int e1=arr1[i]%max_ele;
                int e2=arr2[j]%max_ele;
                if(e1<=e2){
                    if(k<n){
                        arr1[k]+=(e1*max_ele);
                    }
                    else{
                        arr2[k-n]+=(e1*max_ele);
                    }
                    i++;
                    k++;
                }
            else{
                if(k<n){
                        arr1[k]+=(e2*max_ele);
                    }
                    else{
                        arr2[k-n]+=(e2*max_ele);
                    }
                    j++;
                    k++;
                }
                
            }
            while(i<n){
                int e1=arr1[i]%max_ele;
                if(k<n){
                        arr1[k]+=(e1*max_ele);
                    }
                    else{
                        arr2[k-n]+=(e1*max_ele);
                    }
                    i++;
                    k++;
                
            }
            while(j<m){
                int e2=arr2[j]%max_ele;
                if(k<n){
                        arr1[k]+=(e2*max_ele);
                    }
                    else{
                        arr2[k-n]+=(e2*max_ele);
                    }
                    j++;
                    k++;
            }
            for(int i=0;i<n;i++){
                arr1[i]=arr1[i]/max_ele;
            }
            for(int i=0;i<m;i++){
                arr2[i]=arr2[i]/max_ele;
            }
            
        }

};