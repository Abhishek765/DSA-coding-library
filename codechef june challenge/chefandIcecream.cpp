#include <bits/stdc++.h>
using namespace std;

#define si(x) scanf("%d", &x)
#define ws(x) int x;scanf("%d", &x);while(x--)
#define f(i, n) for (int i = 0; i < n; ++i)
typedef vector<int> vi;
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
	ws(t)
	{   int n;
		si(n);
        vi a;    
    f(i, n){
            int input;
            scanf("%d ", &input);
            a.push_back(input);
        }
        int money = 0;
    if(a[0] == 5){
        int flag = 0;
        money = 5;
       for(int i = 1; i<n;++i){
           if (a[i] == 5){
                money += 5;
                flag = 1;
           }else if (a[i] == 10){
                flag =1;
           }else/* a[i] == 15*/
           {     
               if( money >= 10){
                    flag = 1;
                    money -=5;
               }       
                else{
                    flag = 0;
                    break;
                }
           }
        }
        if(flag == 1)
            printf("YES\n");
        else
            printf("NO\n");

    }else
        printf("NO\n");
	}
	return 0;
}