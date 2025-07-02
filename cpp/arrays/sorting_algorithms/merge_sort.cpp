class Solution {
  public:
  void merge(vector<int>& arr,int s, int e, int mid)
  {  
      int i = s;
      int j = mid+1;
      vector<int>temp;
      
      while(i<=mid&&j<=e)
      {
          if(arr[i]<arr[j])
          {
              temp.push_back(arr[i++]);
              
          }
          else
          {
              temp.push_back(arr[j++]);
          }
      }
      while(i<=mid)
      {
          temp.push_back(arr[i++]);
      }
      while(j<=e)
      {
          temp.push_back(arr[j++]);
      }
      for(i=s;i<=e;i++)
      {
          arr[i] = temp[i-s];
      }
      
  }
   void mergesortmethod(vector<int>& arr, int s,int e)
   {
       if(s>=e) return;
       int mid = s+(e-s)/2;
       
       mergesortmethod(arr,s,mid);
       mergesortmethod(arr,mid+1,e);
       merge(arr,s,e,mid);
   }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        mergesortmethod(arr,0,r);
    }
};