#include <bits/stdc++.h>
using namespace std;

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
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n = 3;
		vector<int> a(n);
		vector<int> b(n);
		for (int i = 0; i < n; i++)
		{
			int input1;
			scanf("%d ", &input1);
			a.push_back(input1);
		}
		for (int j = 0; j < n; j++)
		{
			int input;
			scanf("%d ", &input);
			b.push_back(input);
		}
		int diff = a[0] - b[0];
		int count1 = 0, count2 = 0;
		int k = 1;
		int res;
		while (k <= n)
		{
			int diff1 = a[k] - b[k];
			if (diff1 == 0){
				
				continue;
			}
		if (diff1 == diff)			
		{		count1 = 1;
				
		}
		else
		{
			count2++;
			
		}
		k++;
		}
		res = count1 + count2;
		printf("%d\n", res);
	}

	return 0;
}
