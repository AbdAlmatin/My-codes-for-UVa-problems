#include <bits/stdc++.h>
using namespace std;
#define optimize     ios_base::sync_with_stdio(false)
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define from_0_to(x) for(int i = 0; i < x; i++)
#define LL           long long
#define ULL          unsigned long long
#define YES()        cout << "YES\n"
#define NO()         cout << "NO\n"
#define NL()         cout << "\n"
#define PI           2*acos(0.0)
#define vec_i        vector <int>
#define vec_ll       vector < long long >
#define p_b           push_back
#define pii           pair < int, int >
#define p_ci           pair <char, int >
#define p_si           pair <string, int>
#define m_p           make_pair
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define MX            10000001
#define STRTOLOWER(x) std::transform (x.begin(), x.end(), x.begin(), ::tolower)
#define STRTOUPPER(x) std::transform (x.begin(), x.end(), x.begin(), ::toupper)
#define STRTOUCFIRST(x) std::transform (x.begin(), x.begin()+1, x.begin(),  ::toupper); std::transform (x.begin()+1, x.end(),   x.begin()+1,::tolower)
//int a[MX], b[MX], sol[MX];
int movex[] = {0, 0, 1, -1}, movey[] = {1, -1, 0, 0};
int t, n, N, p, q, r, c;
long long ans;




int main()
{
//    cin.tie(0);
//    cout.tie(0);
//    optimize;
    //freopen("input.txt", "r", stdin);
    int R, C;
    while(scanf("%d %d", &R, &C) && (R || C)){
        bool check = false;
        int grid[R][C] = {0, 0}, ans = 0;
      //  memset(grid, 0, sizeof(grid));
        scanf("%d", &t);
        getchar();
        while(t--){
            string s;
            getline(cin, s);
            istringstream ss(s);
            int tt;
            int rr; ss >> rr;
            ss >> c; // just ignore. we don't need it

            while(ss >> tt){
                grid[rr][tt] = -1;

            }

         }
//         FOR(i, 0, R){
//            FOR(j, 0, C){
//             printf("%d ", grid[i][j]);
//            }
//            NL();
//         }
         int srcRow, srcCol;
         scanf("%d %d", &srcRow, &srcCol);
         int destRow, destCol; scanf("%d %d", &destRow, &destCol);
         queue <pii> Q;
         Q.push(m_p(srcRow, srcCol));
         int vis[R][C] = {0};
         memset(vis, 0, sizeof(vis));
         int path[R][C] = {0};
         memset(path, 0, sizeof(path));
         path[srcRow][srcCol] = 0;
         while(!Q.empty() && !check){
            pii u = Q.front();
            Q.pop();
            vis[u.first][u.second] = 1;
            for(int k = 0; k < 4; k++){
                int tx = u.first + movex[k];
                int ty = u.second + movey[k];
                if(tx >= 0 && ty >= 0 && tx < R && ty < C && vis[tx][ty] == 0 && grid[tx][ty] == 0){
                    vis[tx][ty] = 1;
                    Q.push(m_p(tx, ty));
                    path[tx][ty] = path[u.first][u.second] + 1;
                    if(tx == destRow && ty == destCol){check = true, ans  = path[tx][ty]; break;}
                }
            }
         }
         printf("%d\n", ans);
    }

    return 0;
}
