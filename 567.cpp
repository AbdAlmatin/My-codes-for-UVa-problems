#include <bits/stdc++.h>
using namespace std;
#define run(n) for(int i = 0; i < n; i++)
#define RUN(n) for(int j = 0; j < n; j++)
int shortestPath(int src, int dest, vector<int> edges[])
{
    queue <int> Q;
    bool visited[25] = {false};
    int path[25];
    Q.push(src);
    visited[src] = false;
    path[src] = 0;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(auto x: edges[u]){
            if(!visited[x]){
                visited[x] = true;
                path[x] = path[u] + 1;
                Q.push(x);
                if(x == dest) return path[x];
            }
        }
    }
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    int n, Case = 1;
    while( scanf("%d", &n) != EOF ){
        vector <int> G[25];
        int temp1, temp2;
        run(n){
            scanf("%d", &temp1);
            G[1].push_back(temp1);
            G[temp1].push_back(1);
        }
        run(18){
            scanf("%d", &n);
            RUN(n){
                scanf("%d", &temp1);
                G[i + 2].push_back(temp1), G[temp1].push_back(i + 2);
            }
        }
//print your graph
//        for(int i = 1; i <= 20; i++){
//            cout << i << endl;
//            for(auto x: G[i]) cout << x << ' ';
//            cout << endl;
//        }
        printf("Test Set #%d\n", Case++);
        int queries; scanf("%d", &queries);
        for(int i = 1; i <= queries; i++){
            scanf("%d %d", &temp1, &temp2);
            int ans = shortestPath(temp1, temp2, G);
            printf("%2d to %2d: %d\n", temp1, temp2, ans);
        }
        printf("\n");
    }

    return 0;
}
