#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
bool b[100090];
int main()
{

    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>vc;
    vc.push_back(-1);
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        vc.push_back(temp);

    }
    map<int,int>mp;
    int count=0;
    for(int i=vc.size()-1;i>=1;i--)
    {
        if(b[vc[i]]==0)
        {
           b[vc[i]]=1;
           count++;
           mp[i]=count;
        }
        else mp[i]=count;


    }

    for(int i=0;i<m;i++)
    {
        int temp;
        scanf("%d",&temp);
        printf("%d\n",mp[temp]);
    }
}
