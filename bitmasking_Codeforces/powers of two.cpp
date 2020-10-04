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
	int n,k;
	cin >> n >> k;
	vector<int> v;
	multiset<int,greater<int> > s;
	
	int x=n,y=0;
	while(x>0)
	{
		if((x&1))
		s.insert((int)(pow(2,y)));
		
		x=x/2;
		y++;
	}
	if(s.size()>k)
	{
		cout << "NO";
		return 0;
	}
	
	while(s.size()<k)
	{
		int temp=(*s.begin());
		if(temp==1)
		{
			break;
		}
//		cout << "before" << endl;
//		for(auto it=s.begin();it!=s.end();it++)
//		{
//			cout << (*it) << " ";
//		}
//		cout << endl;
//		
		s.erase((s.begin()));
		s.insert(temp/2);
		s.insert(temp/2);
		
//		cout << "after" << endl;
//		for(auto it=s.begin();it!=s.end();it++)
//		{
//			cout << (*it) << " ";
//		}
//		cout << endl;
//		
	}
	if(s.size()==k)
	{
		cout << "YES" << endl;
		for(auto it=s.begin();it!=s.end();it++)
		{
			cout << (*it) << " ";
		}
	}
	else
	cout << "NO";
}


