#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(long long int some_array[], long long int size)
{
   long long int max_so_far = some_array[0];
   long long int curr_max = some_array[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(some_array[i], curr_max+some_array[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main(){
	long long int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long int a[n];
		long long int b[n*k];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int j=0; j<n*k; j++)
		{
			b[j] = a[j%n];
			// cout<<b[j]<<", ";
		}

		long long int my_sum;
		if(n>1 || k>1)
		{
			int b_size = sizeof(b)/sizeof(b[0]);
			my_sum = maxSubArraySum(b, b_size);
		}
		else
		{
			my_sum = a[0]; 
		}
		cout << my_sum <<endl;
	}
 }