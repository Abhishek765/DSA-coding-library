#include <bits/stdc++.h>
using namespace std;

#define f(i, n)  for (int i = 0; i < n; ++i)

int main()
{  
    int t; scanf("%d", &t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int> a(n);
        f(i, n){
            int input;
            scanf("%d ", &input);
            a.push_back(input);
        }
            
        
        int orirev = 0;
        f(i, a.size())
            orirev += a[i];
            
        int newrev = 0;
        f(i, a.size())
        {
            if (a[i] > k)
                a[i] = k;
                newrev += a[i];
            
        }
        int loss = orirev - newrev;
        // cout<< loss<<endl;
        printf("%d\n", loss);
        
        
    }
    return 0;
}

