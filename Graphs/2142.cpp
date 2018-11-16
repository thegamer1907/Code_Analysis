#include<bits/stdc++.h>
using namespace std;
bool visited[100000];

int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> toiter;
    toiter.push_back(n);
    int depth=0;
    vector<int> nextiter;
    while(true){
        for(vector<int>::iterator iter=toiter.begin();iter!=toiter.end();iter++){
            visited[*iter]=true;
            if(*iter==m){
                cout<<depth;
                return 0;
            }
        }
        for(vector<int>::iterator iter=toiter.begin();iter!=toiter.end();iter++){
            if(2*(*iter)<=10000&&!visited[2*(*iter)]){
                nextiter.push_back(2*(*iter));
            }
            if((*iter)-1>0&&!visited[*iter-1]){
                nextiter.push_back((*iter-1));
            }
        }
        toiter=nextiter;
        nextiter.clear();
        depth++;
    }
}
