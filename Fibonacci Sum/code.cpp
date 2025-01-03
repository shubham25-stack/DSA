class Solution{
public:
long long int fibSum(long long int N)
    {
        long long sum =1;
        int dp[N+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<=N;i++)
        {
            dp[i] = (dp[i-1]+ dp[i-2])%1000000007;
            sum = (sum+ dp[i])%1000000007;
        }
       return sum;
        //code here
    }
};