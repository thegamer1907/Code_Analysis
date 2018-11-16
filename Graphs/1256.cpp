#include <iostream>
#include <vector>

using namespace std;

bool bfs(int n, vector<int> gr[], int s, int m){
    vector<int> seq(1,s);
    vector<int> d(n,-1);
    vector<bool> used(n,false);
    used[s] = true;
    for(int i = 0; i < (int)seq.size(); i++){
        int v = seq[i];
        //cout << v << endl;
        for(int j=0;j< (int)gr[v].size();++j){
            int to = gr[v][j];
            if(used[to]) continue;
            seq.push_back(to);
            used[to] = true;
        }
    }
    return used[m];
}

int main(){
    
    int n;
    cin >> n;
    vector<int> Arr(n);
    vector<int> gr[n];

    int m = 0;
    cin >> m;--m;

    for(int i=0;i<n - 1;++i){
        int b;//,c;
        cin >> b;// >> c;
        gr[i].push_back(i + b);
    }
    
    bfs(n,gr,0,m) ? cout << "YES" : cout << "NO";
    

    return 0;
}
