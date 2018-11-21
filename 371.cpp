//This problem is almost similar to UVa 100.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a;
    //a[1] = 1;
    a.push_back(0); // for 0
    a.push_back(3); // for 1 there goes 3cycle. OMG! How? see the description.
    for(long long l = 2; l < 10000001; l++){
        long long k = l;
        int cnt = 0;
       // cout << "here" << k <<  endl;
        while(k != 1){
                cnt++;
                if(k % 2) k = (3 * k + 1);
                else k /= 2;

            }
        a.push_back(cnt);
    }

    int i, j, ans = 0, p;
    while( scanf("%d %d", &i, &j)){
        if(i == 0 && j == 0) break;
        if(i > j) swap(i, j);
        printf("Between %d and %d, ", i, j);
        for(; i <= j; i++){

            if(ans < a[i]){
                ans = a[i];
                p = i;

            }
        }
        printf("%d generates the longest sequence of %d values.\n", p, ans);
        ans = 0;
    }
    return 0;
}

