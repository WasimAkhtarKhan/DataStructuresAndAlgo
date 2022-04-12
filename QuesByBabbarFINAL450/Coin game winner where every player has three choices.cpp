//https://practice.geeksforgeeks.org/problems/geek-and-its-game-of-coins4043/1/#
//https://www.geeksforgeeks.org/coin-game-winner-every-player-three-choices/

int findWinner(int N, int X, int Y)
	{
		// Your code goes here
		int dp[N+1];
		dp[0] = 0;
		dp[1] = 1;
		for(int i=2;i<=N;i++){
		    if(i>=1&&dp[i-1]==0)
		    dp[i] = 1;
		    else if(i>=X&&dp[i-X]==0)
		    dp[i] = 1;
		    else if(i>=Y&&dp[i-Y]==0)
		    dp[i] = 1;
		    else
		    dp[i] = 0;
		}
		return dp[N];
	}
