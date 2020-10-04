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
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<(int)pow(2,n);i++)
	{
		int x=i;
		int ans=0;
		for(int j=0;j<n;j++)
		{
			if((x&1))
			ans+=a[j];
			else
			ans-=a[j];
			
			x=x/2;
		}
		if(ans==0 || ans==360)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}


