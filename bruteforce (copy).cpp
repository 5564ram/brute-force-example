#include<bits/stdc++.h>
#define llt long long  int
#define ullt unsigned long long int
#define MOD 1000000007
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
	int n;
	cin>>n;
	char a[n][n],b[n/2][n/2],c[n/2][n/2];
	int b1[1000]={0},c1[1000]={0};
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>a[i][j];
for(int i=0;i<n;++i)
  {
			for(int j=0;j<n/2;++j)
			{
				b[i][j]=a[i][j];
			}
			
  } 
  int x=0;
for(int i=0;i<n;++i)
  {
			for(int j=0;j<n/2;++j)
			{
				if(b[i][j]=='1')
					{++x;b1[i]+=1;}
			}
			//cout<<"\n";
			
  } 
  int k=0;
  for(int i=0;i<n;++i)
  {
  	for(int j=n-1;j>=n/2;--j)
  	{
  		//cout<<a[i][j];
  		c[i][k]=a[i][j];
  		//cout<<c[i][k];
  		++k;
  	}
 //cout<<"\n";
  	//cout<<k<<" ";
  	k=0;
  }
  int y=0;
  for(int i=0;i<n;++i)
  {
  	for(int j=0;j<n/2;++j)
  		{
  			if(c[i][j]=='1')
  				{++y;c1[i]+=1;}
  		}
  	//cout<<"\n";
  }
  //cout<<k;*/
  
  //cout<<k;*/
//cout<<x<<" "<<y
  int m=abs(x-y);

  for(int i=0;i<n;++i)
  {
  	int v=0,w=0;
  	v=x+c1[i]-b1[i];
  	w=y+b1[i]-c1[i];
  	//cout<<v<<" "<<w<<endl;
  	if(abs(v-w)<m)
  		m=abs(v-w);
  }
  cout<<m<<endl;
}

int main()
{
		fast
		#ifndef ONLINE_JUDGE
     	freopen("input.txt","r",stdin);
     	freopen("output.txt","w",stdout);
     	#endif   
        
        int t;
        cin>>t;
        while(t--)
        solve();
        return 0;
}