#include <bits/stdc++.h>
#define NIL -1
#define RED 0
#define YELLOW 1
#define GREEN 2

using namespace std;

class Graph{
    int n;
    // int t = 1;
    list <int> *adj;
    vector <int> color, pi, d, f;
    public:
    Graph(int vertices){
        n = vertices;
        adj = new list <int> [n];
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    int DFS(int t){
        for(int u = 0; u < n; u++){
            color.push_back(RED);
            pi.push_back(NIL);
            d.push_back(0);
            f.push_back(0);
        }
        // for(int u = 0; u < n; u++){
        //     if(color[u] == RED)
        //         return DFS_visit(u,t);
        // }
        return DFS_visit(0,t);
    }

    int DFS_visit(int u, int t){
        color[u] = YELLOW;
        // d[u] = t++;
        //cout << "discovery time of " << u << " is " << d[u] << endl;
        list <int>::iterator v;
        for(v = adj[u].begin(); v != adj[u].end(); v++){
            if (t == *v)
            {
                return 1;
            }
            if(color[*v] == RED){
                pi[*v] = u;
                return DFS_visit(*v, t);
            }
        }
        color[u] = GREEN;
        // f[u] = t++;
        return 0;
        //cout << "finish time of " << u << " is " << f[u] << endl;
    }

    int printAdjList(){
        for(int i=0;i<n;i++){
            list <int>::iterator v;
            cout << "for vertex "<<i+1<<endl;
            for(v = adj[i].begin(); v != adj[i].end(); v++){
                cout << *v +1<< " ";
            }
            cout << endl;
        }
            
    }

    // void edgeClassification(int a, int b){
    //     DFS(0);
    //     if(d[b] < d[a] && d[a] < f[a] && f[a] < f[b])
    //         cout << "BACK EDGE" << endl;
    //     else if(d[a] < d[b] && d[b] < f[b] && f[b] < f[a])
    //         cout << "TREE or FORWARD EDGE" << endl;
    //     else if(d[b] < f[b] && f[b] < d[a] && d[a] < f[a])
    //         cout << "CROSS EDGE" << endl;
    //     else cout << "impossible edge" << endl;
    // }

    // int detectCycle(){
    //     DFS(0);
    //     int flag = 0;
    //     for(int u = 0; u < n; u++){
    //         list <int>::iterator v;
    //         for(v = adj[u].begin(); v != adj[u].end(); v++){
    //             if(d[*v] < d[u] && d[u] < f[u] && f[u] < f[*v]){
    //                 cout << "BACK EDGE between " << u << " and " << *v << endl;
    //                 flag = 1;
    //             }
    //         }
    //     }
    //     return flag;

    // }

};
int main()
{
    int  n,t;
    scanf("%d %d",&n,&t);
    int arr[n];
    for(int i=0;i<n-1;i++) scanf("%d",&arr[i]);
    arr[n-1] = 0;
    Graph G(n);
    for(int i = 0; i < n; i ++)
    {
        G.addEdge(i, i+arr[i]);
    } 
    // G.printAdjList();
    if(G.DFS(t-1))printf ("YES\n");
    else printf("NO\n");
    return 0;
}