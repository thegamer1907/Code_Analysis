#include<bits/stdc++.h>
#include<vector>
#include<queue>
#define MAX 100000


using namespace std;


int node, edge;

vector <int> v[MAX];

int level[MAX];


int bfs(int des){
    int colour[MAX];
    memset(colour,0,sizeof(colour));
    int visit[MAX];
    memset(visit,0,sizeof(visit));
    int node=1;

    queue<int>q;
    q.push(node);
    colour[0]=1;

    visit[1]=1;

    while(!q.empty()){
        int u = q.front();
        //cout << u << endl;
        q.pop();
        int s=v[u].size();
        if (u==des) return 1;
        for (int i=0;i<s;i++){
            int n = v[u][i];
            if (n==des) return 1;

            if (visit[n]==0){
                //if (colour[u]==1) colour[n]=2;
               // else colour[n]=1;
                q.push(n);
                visit[n]=1;

            }
        }
    }


    return 0;
}



int main(){
    int i, j;
    int n1, n2;
    int destination;

    //freopen("unt.txt","r",stdin);

    memset(v,0,sizeof(v));

    scanf("%d",&node);
    scanf("%d",&destination);

    for (i=0;i<node-1;i++){
        scanf("%d",&n2);
        if (i+1+n2<=node){
            v[i+1].push_back(n2+i+1);
            //v[n2+i+1].push_back(i+1);
        }
    }
   // printf("Node %d",bfs(1));
   if(bfs(destination)) printf("YES\n");
   else printf("NO\n");
   /*for (i=1;i<=node;i++){
        int siz=v[i].size();
        for(j=0;j<siz;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
   }
   for (i=1;i<=node;i++){
        printf("%d ",level[i]);

   }
*/


    return 0;
}

