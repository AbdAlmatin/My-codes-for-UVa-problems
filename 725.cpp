#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(false)
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define LL long long
#define ULL unsigned long long
#define PI 2*acos(0.0)
#define vii vector < int, int >
#define vll vector < long long, long long >
#define p_b push_back
#define pii pair < int, int >
#define pci pair <char, int >
#define psi pair <string, int>
#define m_p make pair
#define MX 10000001
int ar[1000], ar2[1000][1000];

int t, n, N, p, q, r, a, b, c, f;
long long ans;

bool chd(int n1, int n2)
{
    int a[10] = {0};
    while(n1){
        ++a[n1 % 10];
        n1 /= 10;
    }
    while(n2){
        ++a[n2 % 10];
        n2 /= 10;
    }
    for(int i = 0; i < 10; i++){
        if(a[i] != 1) return false;
    }
    return true;
}

int main()
{
    optimize;
   //freopen("myfile.txt", "r", stdin);
//    freopen("o.txt", "w", stdin);
    bool t = true;
    while(1){

        scanf("%d", &N);
        if(N == 0) break;

        if(!t) printf("\n");

        t = false;

        bool check = false;
        for(f = 1234; f <= 98765; f++ ){
            a = N * f; if(a > 98765) break;
            int a2 = a, f2 = f;
            if(a < 10000) {
                a2 = a * 10;
                if(chd(f, a2)){printf("0%d / %d = %d\n", a, f, N); check = true;}

            }

            else if(f < 10000) {
                f2 = f * 10;
                if(chd(f2, a)){printf("%d / 0%d = %d\n", a, f, N); check = true;}

            }
            else{
                if(chd(f, a)){printf("%d / %d = %d\n", a, f, N); check = true;}
            }

        }
        if(!check) cout << "There are no solutions for " << N << "." << endl;
    }

    return 0;
}
