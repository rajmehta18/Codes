#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define test(te) t(te); while(te--)
#define pri(a,n) f(n){cout<<a[i];}cout<<endl
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
using namespace std;

int main(int argc, char const *argv[])
{
    op;
    t(n);
    t(q);
    lli blo=0;
    map< pair<lli,lli>,lli > m;
    f(q)
    {
    	t(a);
    	t(b);
    	if(m[mp(a,b)]==0)
    		m[mp(a,b)]=1;
    	else
    		m[mp(a,b)]=0;

    	//cout<<m[mp(a,b)];
    	if(a==1)
    	{
    		if(m[mp(a,b)])
    			blo+=m[mp(2,b-1)] + m[mp(2,b)] + m[mp(2,b+1)];
    		else
    			blo-=m[mp(2,b-1)] + m[mp(2,b)] + m[mp(2,b+1)];
    	}
    	else
    	{
    		if(m[mp(a,b)])
    			blo+=m[mp(1,b-1)] + m[mp(1,b)] + m[mp(1,b+1)];
    		else
    			blo-=m[mp(1,b-1)] + m[mp(1,b)] + m[mp(1,b+1)];
    	}
    	//cout<<blo;
    	blo ? cout<<"NO\n" : cout<<"YES\n";
    }
    return 0;
}