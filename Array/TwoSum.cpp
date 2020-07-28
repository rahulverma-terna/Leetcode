class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int X) {
       int i,j;
         unordered_map<int, int> hash; 
         vector<int> result;
          int n=arr.size();
          for(i=0;i<n;i++)
	    {
              
              //if(arr[i]<=X)
              //{
	           int rem=X-arr[i];
                  cout<<" "<<hash[rem];
               if(hash[rem]!=0)
               {
                   //cout<<i<<" ";
                cout<<"hello"<<hash[rem]<<" "<<i;
                result.push_back(hash[rem]-1);
                result.push_back(i);
                }
        //}
        
           hash[arr[i]]=i+1;
              
	           
	     }
	    
	return result;
    }
};
