#include<bits/stdc++.h>
using namespace std;

map<vector<int>, int> mp;
vector<vector<int> > a;
vector<int> temp;
int flag = 0;
int b[55]={0};

void f(int i, int n)
{
    if(i == n)
    {
        int j,countx=0,l;
        temp.clear();
        for(j=0;j<a[0].size();j++)
        {
            temp.push_back(0);
        }
        for(j=0;j<n;j++)
        {
            if(b[j])
            {
                countx++;
                for(l=0;l<a[j].size();l++)
                {
                    temp[l] += a[j][l];
                }
            }
        }
        if(countx > 0)
        {
            int check = 1;
            for(l=0;l<a[0].size();l++)
            {
                if(temp[l] > countx/2)
                {
                    check = 0;
                    break;
                }
            }
            if(check)
            {
                /*for(j=0;j<n;j++)
                {
                    printf("%d ",b[j]);
                }
                printf("\n");*/
                flag = 1;
            }
        }
    }
    else
    {
        b[i] = 0;
        f(i+1,n);
        b[i] = 1;
        f(i+1,n);
    }
}

int main()
{
    int n,k,i,j,x;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        temp.clear();
        for(j=0;j<k;j++)
        {
            scanf("%d",&x);
            temp.push_back(x);
        }
        if(!mp.count(temp))
        {
            mp[temp] = 1;
            a.push_back(temp);
        }
    }
    //printf("%d\n",a.size());
    f(0,a.size());
    if(flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return(0);
}
