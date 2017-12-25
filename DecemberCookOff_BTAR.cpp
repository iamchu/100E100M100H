#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a,b,c;
	cin>>t;

	while(t--)
	{
		a=0;
		b=0;
		c=0;
		int ans = 0;
		cin>>n;
		int numbers[n];

		for(int i = 0; i<n; i++)
		{
			cin>>numbers[i];
			numbers[i] = numbers[i]%4;
	
		}


		for(int i = 0; i<n; i++)
		{
			if(numbers[i]==1) a++;
			if(numbers[i]==2) b++;
			if(numbers[i]==3) c++;
		}

		if((a+b*2+c*3)%4 != 0)
			{
				ans=-1;
			}
		else
		{
			
		if(a>=c){
			a-=c;
			// c steps
			ans+=c;

			c=0;

			if(a>=b)
			{
				a-=2*b;
				ans+=2*b;
				b=0;
				ans+=a/4;
				a=0;
			}
			else
			{
				b-=a/2;
				ans+=a;
				a=0;
				ans+=b/2;
				b=0;
			}
		}

		else
		{
			c-=a;
			ans+=a;
			a=0;
			if(c>=b)
			{
				c-=2*b;
				ans+=2*b;
				b=0;
				ans+=c/4;
				c=0;
			}
			else
			{
				b-=c/2;
				ans+=c;
				c=0;
				ans+=b/2;
				b=0;
			}
		}
		}
		cout<<ans<<endl;
	}
}