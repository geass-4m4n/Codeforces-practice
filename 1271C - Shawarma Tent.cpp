#include <bits/stdc++.h>
using namespace std;
 
//remember-> largest 2d memory that can be allocated is dp[5100][5100];
/*for (auto x: mymap) {
  cout << x.first << endl;
}
map<char,ll>::iterator it=mymap.begin();
*/
 
#define ll long long int
#define ull unsigned long long int
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define str string
#define pq priority_queue
#define vi vector< ll >
#define vii vector< vi >
#define viii vector< vii >
#define pii pair< ll, ll >
#define vpii vector< pii >
#define mii map< ll , ll >
#define len length()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define nl cout <<  endl
#define all(ar) ar.begin(), ar.end()
#define ini(X,Y) ll X; X=Y
#define inx(X) ll X; cin >> X
#define inxy(X, Y) ll X, Y; cin >> X >> Y
#define iter(arr) for (ll i=0; i<arr.size(); i++)
#define riter(arr) for (ll i=arr.size()-1; i>=0; i--)
#define itn(n) for (ll i=0; i<n; i++)
#define ritn(n) for (ll i=n-1; i>=0; i--)
#define cont continue
#define brk break
#define sortt(arr) sort(arr.begin(),arr.end())
#define rsortt(arr) sort(arr.rbegin(),arr.rend())
 
#define tcase ll t;cin>>t;while(t--)
const ll INF = 0x3f3f3f3f;
const double eps = 1e-8;
#define mod 1000000007
#define modd 490019
#define basss ll n;cin>>n;ll arr[n];for(ll i=0;i<n;i++)cin>>arr[i]
#define siz 200005
const int inf = 1e9 + 66555;

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

/*
ll modex(ll x,ll y)
{
    x=x%mod;
    ll r=1;
    while(y>0)
    {
        if(y%2==1)
            r=(r*x)%mod;
        y/=2;
        x=(x*x)%mod;
    }
    return r;
}
 */

 /*
ll mm(ll x,ll y)
{
    return (x*y)%mod;
}*/

/*
ll fact[1000001];
ll inv_fact[1000001];
void build(void)
{
    fact[0]=1;
    ll i;
    fs(i,1,1000001)
    {
        fact[i]=mm(fact[i-1],i);
    }
    inv_fact[1000000]=modex(fact[1000000],mod-2);
    fr(i,999999)
    {
        inv_fact[i]=mm(inv_fact[i+1],i+1);
    }
}
 */


 /*
ll C(ll n,ll r)
{
    if(n<r)
        return 0;
    ll res=fact[n];
    res=mm(res,inv_fact[n-r]);
    return mm(res,inv_fact[r]);
}
 */


/*
long long power(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){ans=(ans*a)%mod;}
                a=(a*a)%mod;
                b>>=1;
        }
    return ans;
        
*/


/* 
Custom Sort Using Lambda Functions
sort(b.begin(), b.end(), [&](int i, int j) {
  if (a[i] != a[j]) {
    return a[i] < a[j];
  }
  return i < j;
});
*/

/*

int max_ele(vector<int>v)
{
    int m=v[0];
    for(int i=0;i<v.size();i++)
    m=max(m,v[i]);

    return m;
}

int min_ele(vector<int>v)
{
    int m=INT_MAX;
    for(int i=0;i<v.size();i++)
    m=min(m,v[i]);

    return m;
}
*/


/*
ll solve(string s,char ch)
{
      // recursion for chamges in one half can be modified
  if(s.len==1)
  {
      if(s[0]==ch)
      return 0;
      else
      return 1;

  }

ll left = (s.len/2-count(s.begin()+s.size()/2,s.end(),ch))+solve(string(s.begin(),s.begin()+s.size()/2),ch+1);
ll rigt = (s.len/2-count(s.begin(),s.begin()+s.size()/2,ch))+solve(string(s.begin()+s.size()/2,s.end()),ch+1);

return(min(left,rigt));

}
*/
/*
int parent[100005];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
*/
char inver(char c)
{
    if(c=='W')
    return 'B';
    return 'W';

}

void solve()
{ 

   ll n,sx,sy;
   cin>>n>>sx>>sy;
   ll no=0,s=0,e=0,w=0,ne=0,nw=0,sw=0,se=0;
   for(int i=0;i<n;i++)
   {
       ll a,b;
       cin>>a>>b;
       a=a-sx;
       b=b-sy;
      // cout<<a<<" "<<b;nl;
       if(a==0&&b>0)
       no++;
       else if(a>0&&b>0)
       ne++;
       else if(a>0&&b==0)
       e++;
       else if(a>0&&b<0)
       se++;

       else if(a==0&&b<0)
       s++;
       else if(a<0&&b<0)
       sw++;
       else if(a<0&&b==0)
       w++;
       else 
       nw++;
   }

  //cout<<nw<<" "<<ne<<" "<<se<<" "<<sw;nl;
   ll ans=0;
       ll x,y;


if(nw+no+ne>ans)
{
         ans=no+ne+nw;
           x=sx;
           y=sy+1;
}

if(ne+e+se>ans)
{
    ans=ne+e+se;
    x=sx+1;
    y=sy;
}
if(sw+s+se>ans)
{
    ans=sw+s+se;
    x=sx;
    y=sy-1;
}
if(sw+w+nw>ans)
{
    ans=sw+w+nw;
    x=sx-1;
    y=sy;
}


   cout<<ans;nl;
  cout<<x<<" "<<y;


  

}



int main()
{

  fast;
   
{    solve();nl;}
     
   
}

/*





*/
