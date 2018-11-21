#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for(int i = a; i < (int) n; i++)
int ar[3001];

int diff(int num1, int num2){
    return abs(num1 - num2);
}

int main()
{
    int n;
    while((scanf("%d", &n)) != EOF){

            int temp1 = 0, temp2 = 0, check = 1;
            bool flag = true;
        for(int i = 0; i < n; i++){
            scanf("%d", &temp1);
            if(!flag) ar[i] = diff(temp1, temp2);

            flag = false;
            temp2 = temp1;
        }
        sort(ar, ar + n);
        FOR(i, 1, n ){
            if(ar[i] != i){
                check = false;
                break;
            }
        }


        if(!check) puts("Not jolly");
        else puts("Jolly");

    }

    return 0;
}
