#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int fact[40];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int k = 0;
		bool flag = true;
		int q = 1;
		while (1)
		{
			int f = 0;
			for (int i = q+1; i < std::sqrt(n); i++)
			{
				if (n % i == 0)
				{
					f = 1;
					q = i;
					break;
				}
			}
			if (f > 0)
			{
				fact[k++] = q;
				n = n / q;
				fact[k] = n;
			}
			else
			{
				flag = false;
				break;
			}
		}

		if (k >= 2)
		{
			bool falg = true;
			cout << "YES\n";
			cout << fact[0] << ' ' << fact[1]<<' ';
			int r = 1;
			for (int i = 2; i <= k; i++)
			{
				r *= fact[i];
			}
			cout << r << '\n';
		}
		else
			cout << "NO\n";
	}
	return 0;
}
