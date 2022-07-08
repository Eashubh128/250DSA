void calcsum(int i,int sum,vector<int>& num,vector<int>& subsum)
{
    if(i == num.size())
    {
        subsum.push_back(sum);
        return;
    }
    calcsum(i+1,sum+num[i],num,subsum);
    calcsum(i+1,sum,num,subsum);
}


vector<int> subsetSum(vector<int> &num)
{
    vector<int> subsum;
    calcsum(0,0,num,subsum);
    sort(subsum.begin(),subsum.end());
    return subsum;

}
