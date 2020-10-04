#include<bits/stdc++.h>
#include<string.h>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define endl  "\n"
#define ll long long
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cin.exceptions(cin.failbit);cout.tie(NULL);
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
    return true;
}

int32_t main()
{
	int n;
	cin >> n;
	vector<int> out;
	int s=0;
	while((n&(n+1)))
	{
		if(s==0)
		{
			vector<int> v;
			int x=n;
			for(int i=0;i<20;i++)
			{
				if((x&1))
				v.push_back(1);
				else
				v.push_back(0);
				
				x=x/2;
			}
			int st=0,end=0;
			for(int i=0;i<20;i++)
			{
				if(v[i]==1)
				end=i;
			}
			int zero=0;
			for(int i=0;i<end;i++)
			{
				if(v[i]==0)
				zero=i+1;
			}
			out.push_back(zero);
			n=(n^((int)pow(2,zero)-1));
			
			if((n&(n+1))==0)
			{
				break;
			}
		}
		else
		{
			n=n+1;
			out.push_back(-1);
		}
		
		s=!s;
	}
	cout << out.size() << endl;
	for(int i=0;i<out.size();i++)
	{
		if(out[i]>0)
		cout << out[i] << " ";
	}
}


