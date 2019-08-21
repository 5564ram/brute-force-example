#include<bits/stdc++.h>
#define llt long long  int
#define ullt unsigned long long int
#define MOD 1000000007
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int c=-1,n;
int a[14][14];
void done(int r,int d,int posx,int posy)
{
	if(posx==n-1&&posy==n-1)
	{
		if(a[posx][posy]%2==0)
			c=1;return;
	}
	if(a[posx][posy]%2==0)
	{
		if(a[posx+1][posy]%2==0)
		{
			if(r>0)
			done(r-1,d,posx+1,posy);
		}
		if(a[posx][posy+1]%2==0)
		{
			if(d>0)
				done(r,d-1,posx,posy+1);
		}
	}
	else return;
}
void solve()
{
	
  //llt n;
  cin>>n;
for(llt i=0;i<n;++i)
	for(int j=0;j<n;++j)
  {
	cin>>a[i][j];
	
  }
  int r=n-1,d=n-1,posx=0,posy=0;
  if(a[0][0]%2==0)
  {
  	if(a[posx+1][posy]%2==0)
  	{
  		if(r>0)
  		done(r-1,d,posx+1,posy);
  	}
  	if(a[posx][posy+1]%2==0)
  	{
  		if(d>0)
  			done(r,d-1,posx,posy+1);
  	}
  }
  if(c==1)
  	cout<<"YES"<<endl;
  else
  	cout<<"NO"<<endl;


	    
	    
}
int main()
{
		fast
		#ifndef ONLINE_JUDGE
     	freopen("input.txt","r",stdin);
     	freopen("output.txt","w",stdout);
     	#endif   
        
        int t=1;
        //cin>>t;
        while(t--)
        solve();
        return 0;
}
