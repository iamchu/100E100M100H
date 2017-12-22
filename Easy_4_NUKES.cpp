#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,n,k;
	scanf("%d %d %d", &a,&n,&k);
	int chambers[k];
	for(int i = 0; i < k; i++)
	{
		chambers[i] = 0;
	}
	for(int i = 0; i < k; i++)
	{
		chambers[i]+=a%(n+1);
		a/=(n+1);
	}
	for(int i = 0; i < k; i++)
	{
		printf("%d ", chambers[i]);
	}

}

//FIRST TRY, IT WAS INEFFICIENT. TIME LIMIT EXCEEDED.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int a,n,k;
// 	scanf("%d %d %d", &a,&n,&k);
// 	int chambers[k];
// 	for(int i = 0; i < k; i++)
// 	{
// 		chambers[i] = 0;
// 	}
// 	while(a--)
// 	{
// 		chambers[0]++;
// 		for(int i = 0; i < k; i++)
// 		{
// 			if(chambers[i]>n)
// 			{
// 				if(i==k-1) {chambers[i] = 0;}
// 				else
// 				{	
// 					chambers[i+1]+=1;
// 					chambers[i] = 0;
// 				}
// 			}
// 		}
// 	}
// 	for(int i = 0; i < k; i++)
// 	{
// 		printf("%d ", chambers[i]);
// 	}

// }