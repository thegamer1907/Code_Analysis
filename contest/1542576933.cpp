#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long n,k;
/*struct node
{
    long cnt;
    long next[2];
};
vector<node> tree;
void tao_node()
{
    tree.push_back(node());
    tree.back().cnt=tree.back().next[0]=tree.back().next[1]=0;
}
void them(long x)
{
    long r=0;
    for(long i=k; i>=0; i--)
    {
        if(tree[r].next[((x>>i)&1)]==0)
        {
            tree[r].next[((x>>i)&1)]=tree.size();
            tao_node();
        }
        tree[tree[r].next[((x>>i)&1)]].cnt++;
        r=tree[r].next[((x>>i)&1)];
    }
}
bool ok =false;
bool kt(long x)
{

    long r=0;
    for(long i=k;i>=0;i--)
    {
        if(tree[r].next[!((x>>k)&1)]==0)
        return false;
        r=tree[r].next[!((x>>k)&1)];
    }
    return true;
}
int main()
{
    cin>>n>>k;
    k--;
    tao_node();
    long x,dem=0;
    for(long i=0; i<n; i++)
    {
        dem=0;
        for(long v=k; v>=0; v--)
        {
            cin>>x;
            dem+=(x<<v);
        }
        if(kt(dem))
            ok=true;
        them (dem);
    }
    if(ok)
        cout<<"YES";
    else cout<<"NO";

}*/
int main()
{bool ok =false;
    vector<long> te(16,0);
    cin>>n>>k;
    k--;
    long x,dem=0;
    for(long i=0; i<n; i++)
    {
        dem=0;
        for(long v=k; v>=0; v--)
        {
            cin>>x;
            dem+=(x<<v);
        }
       te[dem]++;
    }
    for(long i=0;i<16;i++)
        for(long j=0;j<16;j++)
    {
        if(te[i]&&te[j])
        if((i&j)==0)
        ok=true;

    } if(ok)
        cout<<"YES";
    else cout<<"NO";
}
