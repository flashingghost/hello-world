#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		int m=max(a,b);
		m = max(m,c);
		int r=0;
		r = m*3-a-b-c;
		if(n<r)
			cout<<"NO"<<endl;
		else
		{
			n = n-r;
			if(n%3==0)
				cout<<"YES\n";
			else
			cout<<"NO\n";
		}
	}
	return 0;
}
