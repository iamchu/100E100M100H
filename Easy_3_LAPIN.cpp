#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.length();
		string first_half, second_half;

		if(n%2==0)
		{
			first_half = s.substr(0,n/2);
			second_half = s.substr(n/2, n/2);
		}
		else
		{
			first_half = s.substr(0,n/2);
			second_half = s.substr(n/2+1, n/2);
		}
		
    	sort(first_half.begin(), first_half.end());
		sort(second_half.begin(), second_half.end());

		if(first_half == second_half) cout<<"YES\n";
		else cout<<"NO\n";
	}
}