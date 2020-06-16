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
        int n, d;
        scanf("%d %d", &n, &d);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d ", &a[i]);
        int mod = d % n;
      
        cout << "Left rotation" << endl;
        for (int i = 0; i < n; i++)
            cout << a[(i + d) % n] << " ";
            cout << endl;
        cout << "Right rotation" << endl;
        for (int i = 0; i < n; i++)
            cout << a[(i + n - d % n) % n] << " ";
        cout << endl;
    }
}