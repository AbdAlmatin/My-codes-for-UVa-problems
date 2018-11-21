#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, f, yard, animals, env_deg, tempVar = 0;
    long long int ans;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &f);
        ans = 0;
        while(f--){
            scanf("%d %d %d", &yard, &animals, &env_deg);
            ans += yard * env_deg;
        }
        printf("%lld\n", ans);

    }

    return 0;
}
