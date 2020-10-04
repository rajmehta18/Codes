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
	cout << "? ";
	int x=0,temp=128;
	for(int i=0;i<7;i++)
	{
		x+=((int)pow(2,i));
	}
	for(int i=0;i<100;i++)
	{
		cout << x+temp << " ";
		x+=temp;
	}
	cout << endl;
	
	int ans;
	cin >> ans;
	int out=0;
	for(int i=0;i<7;i++)
	{
		if((ans&1)==0)
		out+=(int)pow(2,i);
		
		ans=ans/2;
	}
	cout << "? ";
	x=0,temp=1;
	for(int i=7;i<=13;i++)
	{
		x+=(int)(pow(2,i));
	}
	
	for(int i=0;i<100;i++)
	{
		cout << x+temp << " ";
		x+=temp;
	}
	cout << endl;
	
	cin >> ans;
	for(int i=0;i<7;i++)
	{
		ans=ans/2;
	}
	
	for(int i=7;i<=13;i++)
	{
		if((ans&1)==0)
		out+=((int)pow(2,i));
		
		ans=ans/2;
	}
	
	cout << "! " << out << endl;
}


