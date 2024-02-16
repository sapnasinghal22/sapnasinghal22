class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e= arr.size()-1;
        int mid= s+(e-s)/2;
        int ans=-1;
        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
            {
                
                s=mid+1;
            }
            else
            {
              ans= mid;
              e=mid;  
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};
