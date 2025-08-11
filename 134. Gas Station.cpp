class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0,totalcost=0,currgas=0,index=0;
        for(int i=0;i<gas.size();i++)
        {
            totalgas +=gas[i];
            totalcost +=cost[i];
            currgas +=gas[i]-cost[i];
            if(currgas<0)
            {
                index=i+1;
                currgas=0;
            }
        }
        if(totalgas<totalcost)
          return -1;
        return index;
    }
};