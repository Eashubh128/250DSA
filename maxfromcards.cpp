class Solution {
public:
    int sum = 0;
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> rightsum;
        vector<int> leftsum; 
        leftsum.push_back(0);
        rightsum.push_back(0);
        for(int i= 1;i<=k;i++)
        {
            leftsum.push_back(leftsum[i-1]+cardPoints[i-1]);
        }
        cout<<leftsum.size();
        for(int i =1;i<=k;i++)
        {
            rightsum.push_back(cardPoints[cardPoints.size()-i] + rightsum[i-1]);
        }
        
        for(int i:rightsum)
            cout<<" "<<i<<" ";
        
        
        int sum ;
        for(int i = 0 ; i<=k;i++)
        {
            sum = max(sum,leftsum[i]+rightsum[k-i]);
        }
        
    return sum;
    }
};
