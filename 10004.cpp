#include <bits/stdc++.h>
using namespace std;
#define optimize     ios_base::sync_with_stdio(false)
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define LL           long long
#define ULL          unsigned long long
#define YES()        cout << "YES\n"
#define NO()         cout << "NO\n"
#define NL()         cout << "\n"
#define PI           2*acos(0.0)
#define vi           vector <int>
#define vl           vector < long long >
#define p_b           push_back
#define qi            queue <int>
#define pii           pair < int, int >
#define pci           pair <char, int >
#define psi           pair <string, int>
#define m_p           make_pair
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define MX            10000001
#define STRTOLOWER(x) std::transform (x.begin(), x.end(), x.begin(), ::tolower)
#define STRTOUPPER(x) std::transform (x.begin(), x.end(), x.begin(), ::toupper)
#define STRTOUCFIRST(x) std::transform (x.begin(), x.begin()+1, x.begin(),  ::toupper); std::transform (x.begin()+1, x.end(),   x.begin()+1,::tolower)
int a[MX], b[MX], sol[MX];

int t, n, N, p, q, r, c;
long long ans;
bool check = false;



int main()
{
//    cin.tie(0);
//    cout.tie(0);
//    optimize;
    //freopen("in.txt", "r", stdin);
    int noden;
    while(scanf("%d", &noden) && noden){
        check = false;
        int edgen;
        scanf("%d", &edgen);
        int t1, t2;
        vi G[209];
        while(edgen--){
            scanf("%d %d", &t1, &t2);
            G[t1].p_b(t2); G[t2].p_b(t1);
        }
        qi Q;
        Q.push(0);
        int color[209];
        memset(color, -1, sizeof(color));
        color[0] = 1; //1 denotes one of the two colors
        while(!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            for(int i = 0; i < G[u].size(); i++){
                if(color[G[u][i]] == -1){
                    if(color[u] == 1) color[G[u][i]] = 2;
                    else color[G[u][i]] = 1;
                    Q.push(G[u][i]);
                }
                else{
                    if(color[G[u][i]] == color[u]) {check = true; break;};
                }
            }
        }
        if(check) printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
    }
    return 0;
}
