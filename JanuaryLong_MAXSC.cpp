#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n][n];
		long long int sum = 0, current_largest = 99999999999;
		int index_of_largest_possible = n-1;
		bool is_possible = true;
		for(int i=0; i<n; i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}

			sort(a[i], a[i]+n);
		}

		for(int i = n - 1; i > -1; i--)
		{
			index_of_largest_possible = n-1;
			while(a[i][index_of_largest_possible] >= current_largest && index_of_largest_possible > -1)
			{
				index_of_largest_possible--;
			}
			if(index_of_largest_possible > -1)
			{
				sum+=a[i][index_of_largest_possible];
				current_largest = a[i][index_of_largest_possible];
			}
			else
			{
				is_possible = false;
			}
		}
		if(is_possible)
		{
			cout<<sum<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}

