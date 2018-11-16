#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v[n+2];
    for (int i = 0; i < n-1; ++i) {
        int x;
        cin>>x;
        v[i+2].push_back(x);
        v[x].push_back(i+2);
    }
    bool visited[n+2] = {false};
    int c[n+2];
    for (int i = 1; i <= n; ++i) {
        cin>>c[i];
    }
    int colour[n+2]={0};
    vector <int> v1;
    v1.push_back(1);
    int j =0;
    int ans = 0;
    while(j<v1.size()){
        /*for (int l = 0; l < v1.size(); ++l) {
            printf("%d ",v1[l]);
        }*/
        //printf("\n");
        int current = v1[j];
        visited[current] = true;
        for(int i=0;i<v[current].size();i++){
            if(visited[v[current][i]] == false) {
                v1.push_back(v[current][i]);
                colour[v[current][i]] = c[current];
            }
        }
        if(colour[current]!=c[current])
            ans+=1;
        colour[v1[j]] = c[current];
        j++;
    }
    printf("%d",ans);
    return 0;
}