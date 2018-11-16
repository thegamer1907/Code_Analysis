#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct vertex{    
    int status;
    int maximum;
    int color;
};


// void bfs(struct vertex node[] , vector<int>edge[], int start){

//     stack<int>mystack;
//     int head,i,j;
//     mystack.push(start);

//     while(mystack.size()!=0){

//         head=mystack.top();
//         mystack.pop();
//         node[head].color=2;
//         //operations
//         for(i=0;i<edge[head].size();i++){
//             if(node[edge[head][i]].color == 0){
//                 node[edge[head][i]].color = 1;
//                 //operations
//                 mystack.push(edge[head][i]);
//             }
//         }
//     }
//     //operations
// }


int dfs(struct vertex node[], vector<int> edges[], int i, int m ){

        node[i].color=1;
        int isLeaf=1;
        int ans=0;
        if(node[i].maximum>m){ return 0;}

        for(int j=0; j<edges[i].size();j++){
            if(node[edges[i][j]].color ==0 ){
                isLeaf = 0;

                if(node[i].status&&node[edges[i][j]].status) { node[edges[i][j]].maximum = node[i].maximum+1;}
                
                ans+=dfs(node,edges,edges[i][j],m);
            }
        }
        node[i].color=2;
        if(isLeaf&&node[i].maximum<=m){return 1;}
        return ans;
}



int main(){

    int N,M,i,j,k;
    //  about info    

    cin>>N>>M;

    struct vertex node[N+1];
    vector<int> edges[N+1];

    //dummy info for first node
    node[0].color = -1;

    for(i=1;i<=N;i++){
        cin>>node[i].status;
        node[i].color = 0;
        node[i].maximum = node[i].status;
    }

    for(i=0;i<N-1;i++){
        cin>>j>>k;

        edges[j].push_back(k);
        edges[k].push_back(j);
    }
    int ans=dfs(node,edges,1,M);
    cout<<ans;
    //use necessary function

    return 0;

}