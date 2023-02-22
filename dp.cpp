#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define first f
#define second s
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int M = 1000000007;
/*
1 1 1 1 1                                                                                 
1 0 0 1 2                                                                                 
1 2 2 2 3                                                                                 
1 2 4 0 2                                                                                 
1 2 4 8 0
*/
int grid(){
	int n=6;
	int dp[n][n];
	//memset(dp,0,sizeof());
	for(int i=0;i<n;i++){
		dp[i][0]=1;
		dp[0][i]=1;
	}
	//int q;cin>>q;
	dp[3][3]=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(dp[i][j] == 0){
				continue;
			}
			else{
				dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
			}
		}
	}
	
	cout<<dp[n-1][n-1];
}
int main(){
	lightSpeed();
	grid();
}
