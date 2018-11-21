#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, cnt = 0, ans = 0;
    while( scanf("%d %d", &i, &j) == 2 ){
        printf("%d %d ", i, j);
        if(i > j) swap(i, j);
        for(int k = i; k <= j; k = ++i){
            while(k != 1){
                cnt++;
                if(k % 2) k = (3 * k + 1);
                else k /= 2;
                //cout << "here" << k <<  endl;
            }
            ans = max(ans, cnt + 1);
            cnt = 0;
        }
        printf("%d\n", ans);
        ans = 0;
    }
    return 0;
}
