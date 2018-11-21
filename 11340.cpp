#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m; double ans = 0;

    string str;

//    freopen ("myfile.txt","r",stdin);
    scanf("%d", &n);

    while(n--){
        ans = 0;

        scanf("%d", &k);

        map <char, double> myMap;
        map <char, double>:: iterator it;

        while(k--){
            char tempChar; int tempVar;
            //scanf("%c %d", &tempChar, &tempVar);
            cin >> tempChar >> tempVar;
            myMap[tempChar] = tempVar;
        }
        scanf("%d", &m);
        getchar();
        while(m--){
            getline(cin, str);
            int l_str = str.size();

            for(int i = 0; i < l_str; i++){
                it = myMap.find(str[i]);


                if(it != myMap.end()){
                    ans += it->second;
                }
            }
        }
        ans /= 100;
        printf("%.2lf$\n", ans);
    }

    return 0;
}
