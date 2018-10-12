#include<bits/stdc++.h>

using namespace std;

string arr[500500];
int n;
vector<char> vec[500500];
//int m;

int getNext(int a,int b,int ix)
{
    for(int i=a;i<=b;i++)
    {
        if(arr[i][ix]!=arr[a][ix]) return i-1;
    }
    return b;
}

void cal(int ix,int a,int b)
{
    if(a==b)
    {
        for(int i=ix;i<arr[a].length();i++) vec[a].push_back(arr[a][i]);
        return;
    }
    int idx=b+1;
    for(int i=b;i>=a;i--)
    {
        if(i==a)
        {
            if(arr[i].length()<=ix) idx=i+1;
            else idx=i;
            break;
        }
        if(arr[i].length()<=ix)
        {
            idx=i+1;
            break;
        }
        else if(arr[i-1].length()<=ix || arr[i][ix]<arr[i-1][ix])
        {
            idx=i;
            break;
        }
    }

    //cout<<ix<<" "<<a<<" "<<b<<" "<<idx<<endl;

    for(int i=idx;i<=b;i++)
    {
        vec[i].push_back(arr[i][ix]);
    }

    for(int i=idx;i<=b;i++)
    {
        int u=getNext(i,b,ix);
        cal(ix+1,i,u);
        i=u;
    }


}

int main()
{
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char ch[500500];
        scanf("%s",&ch);
        arr[i]=string(ch);
    }

    cal(0,1,n);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            printf("%c",vec[i][j]);
        }
        printf("\n");
    }

    //cout<<arr[1]<<endl;


    return 0;
}
