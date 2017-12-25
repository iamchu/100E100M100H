#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int t,n;
	cin>>t;

	while(t--)
	{
	cin>>n;
	if(n==0) cout<<"Draw";
	else
	{

	string scores[n];
	for(int i = 0 ; i < n; i++)
	{
		cin >> scores[i];
	}
	int a = 0;
	int b = 0;
	string name_a = scores[0];
	string name_b;

	for(int i = 0 ; i < n; i++)
	{
		if(scores[i]!=name_a)
		{
			name_b = scores[i];
		}

		if(scores[i] == name_a) a++;
		else b++;
	}

	if(a==b) cout<<"Draw";
	if(a>b) cout<<name_a;
	if(b>a) cout<<name_b;
	// cout<<a<<","<<b;
	cout<<endl;
	
	}
		
	}
}