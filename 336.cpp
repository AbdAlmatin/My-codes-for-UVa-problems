#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MX 1000009

int main()
{
    int edgen;
    while(scanf("%d", &edgen) && edgen){
        LL x, y, cnt = 0;
        vector <int> G[10000];
        set <LL> se;
        for(int i = 0; i < edgen; i++){
            scanf("%lld %lld", &x, &y);
            G[x].push_back(y), G[y].push_back(x);
            se.insert(y), se.insert(x);
        }
        while(scanf("%lld %lld", &x, &y) && (x || y)){
            queue <LL> Q;
            Q.push(x);
            map <LL, bool> vis;
            long long path[10000];
            path[x] = 0;
        }
    }
    return 0;
}
