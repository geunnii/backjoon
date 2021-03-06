#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod=1000000000;

ll dp[201][201];

int main(){
	int N, K;
	cin>>N>>K;
	for(int i=0; i<=N; i++)
		dp[1][i] = 1;
	for(int i=2; i<=K; i++){
		for(int j=0; j<=N; j++){
			for(int k=0; k<=j; k++){
				dp[i][j] +=dp[i-1][1];
			}
			dp[i][j] %= mod;
		}
	}
	cout<<dp[K][N];
	return 0;
}
