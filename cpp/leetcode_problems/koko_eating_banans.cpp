class Solution {
public:
    int findmax(vector<int>& piles)//find maximum bananas in the pile
    {
       int max = piles[0];
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>max)
            {
                max = piles[i];
            }
        }
        return max;
    }
    long long calculate(vector<int>& piles, int k){
        long long totalhours = 0;
        int i;
        for(i=0;i<piles.size();i++)
        {
            totalhours += ceil((double)piles[i]/(double)k);
        }
        return totalhours;
    }//finding the total hours using the long long to avoid the run time error for the larger values
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low = 1;
        int high = findmax(piles);
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            long long totalhours = calculate(piles,mid);

            if(totalhours <= h)
            {
                high = mid -1;
            }
            else
            {
                low = mid+1;
            }

        }
        return low;
    }
};