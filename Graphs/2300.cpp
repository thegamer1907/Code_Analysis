#include<bits/stdc++.h>
using namespace std;
vector<int> vi[20000];
int visited[20000];
int counter[10000];
int temp,minim=0;
void rek(int a, int b)
{
    int i;
    visited[a] = 1;
    if(a != 0)
    {
        counter[a] = counter[b] + 1;
    }

    for(i=0;i<vi[a].size();i++)
    {
        if(visited[vi[a][i]] == 0)
        {
            temp++;
            rek(vi[a][i],a);
        }
    }
    if(minim < counter[a])
        minim = counter[a];
}
int main(){
    int n,i,j,test;
        scanf("%d",&test);
        int arr[test];
        for(j=0;j<test;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j] == -1)
            {
                counter[0] = 0;
                arr[j] = 0;
            }
        }
        memset(visited,0,sizeof(visited));
        memset(counter,0,sizeof(counter));
        for(j=0;j<test;j++)
        {
            if(arr[j] == 0)
            {
                continue;
            }
            else
            {
                vi[arr[arr[j]-1]].push_back(arr[j]);
                vi[arr[j]].push_back(arr[arr[j]-1]);
            }
        }
        rek(0,0);
        printf("%d\n",minim+1);
        minim = 0;
        for(j=0;j<20000;j++)
            vi[j].clear();



    return 0;
}
