#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char num[10];
    cin>>num;
    int len=strlen(num);
    int m=0;
    for(int i=0; i<len ;i++){
        num[i]-='0';
        if(num[i]>m) m=num[i];
    }
    int ans[m][len];
    cout<<m<<endl;
    for(int i=0 ; i<m;i++)
        for(int j=0 ; j<len;j++)   ans[i][j]=0;

    for(int i=0 ; i<len;i++)
    {
        int j=0;
        while(num[i])
        {
            ans[j][i]=1;
            num[i]--;

            j++;
        }
    }
    for(int i=0 ; i<m;i++){
            int c=0;
        for(int j=0 ; j<len;j++)
        {
           if(ans[i][j] ==0 && c==0);
            else {
                c=1;
                       cout<<ans[i][j];
            }
        }
        cout<<" ";
    }
    return 0;
}