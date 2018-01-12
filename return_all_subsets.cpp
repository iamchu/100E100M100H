#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 5;
	for(int i = 0; i<32; i++)
	{
		int k = i;
		while(k)
		{
			cout<< (k&1);
			k>>1;
		}
		cout<<endl;
	}
}