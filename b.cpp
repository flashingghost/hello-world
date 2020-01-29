#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

class point 
{
	public:
		
		int x=0;
		int y=0;
		bool operator < (const point b) const
		{
			if(this->x!=b.x)
				return this->x < b.x;
			else
				return this->y < b.y;
		};
};

point g[1002];
char ans[2005];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			point m;
			m.x=x;
			m.y=y;
			g[i]=m;
		}
		sort(&g[0], &g[n]);
//		for(int i=0;i<n;i++)
//		{
//			cout<<g[i].x<<' '<<g[i].y<<endl;		
//		}
		

		int k=0;
		int i=0;
		point c;
		bool flag=true;
		while(i<n)
		{
			point tmp = g[i];
			if(c.x==tmp.x&&c.y==tmp.y)
				i++;
			else if(c.x<tmp.x)
			{
				ans[k++] = 'R';
				c.x++;
			}
			else if(c.y<tmp.y)
			{
				ans[k++]= 'U';
				c.y++;	
			}
			else
			{
				flag = false;
				break;
			}
		}
		if(flag==true)
		{
			cout<<"YES\n";
			for(int i=0;i<k;i++)
			{
				cout<<ans[i];
			}
			cout<<'\n';
		}
		else
			cout<<"NO\n";
	}
	return 0;
}
