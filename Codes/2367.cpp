#include <bits/stdc++.h>

using namespace std;

vector<int> vec;
const int mx = 1e7+10;
const int mx2 = 664679;
bool vis[mx];
int track[mx];
int times[mx];
int tree[4*mx];
int n;
int arr[mx];

void i()
{
    int i , j , k ,sq = sqrt(mx);
    memset(vis,0,sizeof(vis));
    vis[0] = vis[1] = 1;
    for(i = 4 ; i < mx ; i+= 2)
    {
        vis[i] = 1;
    }
    for(i = 3 ; i <= sq ; i+= 2)
    {
        if(vis[i])continue;
        for(j = i*i ; j < mx ; j+= 2*i)
        {
            vis[j] = 1;
        }
    }

}
void love()
{
    int i,k = 1;
    vec.push_back(2);
    for(i = 3 ;i < mx ; i+=2)
    {
        if(!vis[i])
        {
            vec.push_back(i);
        }
    }
}
void sophie_turner()
{
    int i , j , k , num , sq;
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
        scanf("%d",&num);
        arr[num]++;
    }
    for(int qq = 2 ; qq < mx ; qq++)
    {
        if(!arr[qq])continue;
        if(!vis[qq])
        {
            times[qq]+=arr[qq];
            continue;
        }
        num = qq;
        sq = sqrt(num);
        for(i = 0 ; vec[i] <= sq ; i++)
        {
            k = 0;
            while(num%vec[i] == 0)
            {
                num = num/vec[i];
                k = 1;
            }
            if(k)
            {
                sq =sqrt(num);
                times[vec[i]]+=arr[qq];
            }
        }
        if(num > 1)
        {
            times[num]+= arr[qq];
        }
    }
    k = 1;
    track[2] = 1;
    arr[1] = 2;
    for(i = 3 ; i < mx ; i+= 2)
    {
        if(!vis[i])
        {
            k++;
            track[i] = k;
            arr[k] = i;
        }
    }
}
void build(int l , int r , int idx)
{
    if(l == r)
    {
        int k = arr[l];
        tree[idx] = times[k];
        return;
    }
    int m , lc , rc;
    m = (l+r)/2;
    lc = 2*idx;
    rc = lc+1;
    build(l,m,lc);
    build(m+1,r,rc);
    tree[idx] = tree[lc] + tree[rc];
}
int query(int l , int r , int idx , int left , int right)
{
    if(l > right || r < left)
    {
        return 0;
    }
    if(l >= left && r <= right)
    {
        return tree[idx];
    }
    int lc , rc , mid = (l+r)/2;
    lc = 2*idx;
    rc = lc+1;
    return query(l,mid,lc,left,right)+query(mid+1,r,rc,left,right);
}
int main()
{
    i();
    love();
    sophie_turner();
    build(1,mx-5,1);

    //for(int i = 2 ; i <= 10 ; i++)cout << i <<"  " << times[i] << endl;

    int q , i , j , l , r , ans;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&l,&r);
        if(r > mx)r = mx-5;
        while(r >= 0 && vis[r])r--;
        while(l < mx && vis[l])l++;
        ans = 0;
        if(l <= r)
        ans = query(1,mx-5,1,track[l],track[r]);
        printf("%d\n",ans);
    }
    return 0;
}
