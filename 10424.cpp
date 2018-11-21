#include <bits/stdc++.h>
using namespace std;

double f(int a)
{
    int s = 0;
    while(a/10){
        while(a){
            s += a % 10; a /= 10;
        }
        a = s; s = 0;
    }
    return (double)a;
}

int main()
{
    freopen("input.txt", "r", stdin);
    string s1, s2;
    while(getline(cin, s1)){
        getline(cin, s2);

        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < s1.size(); i++){
            if('a' <= s1[i] && s1[i] <= 'z') sum1 += (s1[i] - 'a' + 1);
            else if('A' <= s1[i] && s1[i] <= 'Z') sum1 += (s1[i] - 'A' + 1);
        }
        for(int i = 0; i < s2.size(); i++){
            if('a' <= s2[i] && s2[i] <= 'z') sum2 += (s2[i] - 'a' + 1);
            else if('A' <= s2[i] && s2[i] <= 'Z') sum2 += (s2[i] - 'A' + 1);
        }

        double x = f(sum1), y = f(sum2);
        if(y > x) printf("%.2lf %% \n", 100 * x / y);
        else printf("%.2lf %% \n", 100 * y / x);
    }
    return 0;
}
