#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main(){
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		int b[n*k];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int j=0; j<n*k; j++)
		{
			b[j] = a[j%n];
			// cout<<b[j]<<", ";
		}
		
		int my_sum;
		if(n>1 || k>1)
		{
			my_sum = maxSubArraySum(b, n*k);
		}
		else
		{
			my_sum = a[0]; 
		}
		cout << my_sum <<endl;
	}
 }