#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string.h>
#include<climits>
#include<vector>
#include<stack>
#include<set>
#include<queue>
#include<map>
#include<math.h>
using namespace std;
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define sint(i) scanf("%d",&i)
#define ss(s) scanf("%s",s)
#define pii pair<int,int>
#define mp(i,j) make_pair(i,j)
#define ll long long
#define MAX 1000000000
#define MOD 1000000007
#define vi vector<int>
#define vvi vector < vi >
#define pb(i) push_back(i);
#define tr(v,it) for(it=v.begin();it!=v.end();it++)
#define DEBUG 0
int main()
{
	#if DEBUG
	freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
    #endif
    int t,test;
    int i;
    
	    int n;
	    cin>>n;
	    int a[n+1];
	    FOR(i,1,n) {
	    	cin>>a[i];
	    }
	    i=1;
	    int c=0;
	    while(i<=n) {
	    	while(a[i]!=i)
	    	{
	    		swap(a[a[i]],a[i]);
	    		c++;
	    	}
	    	i++;
	    }
	    cout<<c;


	return 0;
}