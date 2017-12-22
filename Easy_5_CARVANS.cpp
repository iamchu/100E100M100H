#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n;
	scanf("%ld", &t);
	while(t--)
	{
		scanf("%ld", &n);

		long int speeds[n];
		long int ans = 0;

		for(int i = 0; i < n; i++)
		{
			scanf("%ld", &speeds[i]);
		}

		long int delimitator = speeds[0];
		
		if(n==1) printf("%d \n", 1);
		else
		{
			for(int i = 1; i < n; i++)
			{
				if(speeds[i-1]>speeds[i] && speeds[i]<delimitator) ans++;
				if(speeds[i]<delimitator) delimitator = speeds[i];
			}
		printf("%ld \n", ans+1);
		}
	}
	return 0;
}