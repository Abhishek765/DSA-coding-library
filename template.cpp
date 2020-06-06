#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define pi(x) printf("%d\n", x)
//for debugging
#define deb(x) cout << #x << " " << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mii map<int, int>
#define pqb priority_queue<int>					  /* Max heap*/
#define pqs priority_queue<int, vi, greater<int>> /* Min heap*/
#define setbits(x) _builtin_popcountll(x)		  //finding the no. of set bits
#define zrobits(x) _builtin_ctzll(x)			  //finding the no. of zeroes after the last one
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mka(arr, n, type) type *arr = new type[n];

#define f(i, n) for (int i = 0; i < n; ++i)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define cd(x, y) int x, y; cin >> x >> y;
#define w(x)  int x;cin >> x;while(x--)

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); //for shuffling of array

void av()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main()
{
	av();
	w(t)
	{
		cd(n, x);
		cout << n << " " << x << endl;
	}
	return 0;
}
