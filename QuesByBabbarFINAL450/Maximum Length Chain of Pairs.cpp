//https://practice.geeksforgeeks.org/problems/max-length-chain/1#

bool cmp(struct val p1,struct val p2)
{
	if(p1.first<p2.first)
	return 1;
	else if(p1.first==p2.first and p1.second<p2.second)
	return 1;
	return 0;
}

int maxChainLen(struct val p[],int n)
{
	sort(p,p+n,cmp);
    
    int dp[n];
	for(int i=0;i<n;i++)
	dp[i]=1;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(p[i].first>p[j].second and dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
			}
		}
	}
	
	int m = INT_MIN;
	for(int i=0;i<n;i++)
	m = max(dp[i],m);
	
	return m;
}
