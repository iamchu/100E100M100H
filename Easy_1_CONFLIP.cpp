#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,g,i,n,q,current_coin,ans;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%d", &g);
		while(g--)
		{
			ans=0;
			scanf("%d %d %d", &i, &n, &q);
			//all heads at beginning
			if(i==1)
			{
				//guess n of heads at end of game
				if(q==1)
				{
					current_coin = n-1;
					while(current_coin>0)
					{
						ans++;
						current_coin-=2;
					}
				}
				//guess n of tails at end of game
				else
				{
					current_coin = n;
					while(current_coin>0)
					{
						ans++;
						current_coin-=2;
					}
				}
			}
			//guess n of tails at end of game
			if(i==2)
			{
				//guess n of heads at end of game
				if(q==1)
				{
					current_coin = n;
					while(current_coin>0)
					{
						ans++;
						current_coin-=2;
					}
				}
				//guess n of tails at end of game
				else
				{
					current_coin = n-1;
					while(current_coin>0)
					{
						ans++;
						current_coin-=2;
					}
				}
			}
		printf("%d", ans);
		cout<<endl;
		}
	}
}