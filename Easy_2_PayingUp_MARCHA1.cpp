#include<bits/stdc++.h>
using namespace std;
int generator (int a[],int k)
{ int j=0,ans=0;
    while(k){
        if(k&1) ans+=a[j];
        j++;
        k=k>>1;
    }
   return ans;
}

int main()
{ int t,n,m,i;
    cin>>t;
    while (t--)
    { cin>>n;
      cin>>m;
      int a[n];
      for(i=0;i<n;i++)  cin>>a[i];
      // quantidade de notas
      for(i=0;i<(1<<n);i++) if(generator(a,i)==m) {cout<<"Yes"<<endl;break;}
      if(i==(1<<n)) cout<<"No"<<endl;
    }
}