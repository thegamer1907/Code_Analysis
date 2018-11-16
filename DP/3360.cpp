#include<bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pair pair<int,int>
#define F first
#define S second
#define mem(x) memset(x,0,sizeof(x))

using namespace std;

int main()
{
  	ios_base::sync_with_stdio(false);
  	int n;
    string str;
    cin>>str;
    int l = str.size();
    int prefix[l];
    mem(prefix);
    int s=0;
    int i=1;
    while(i<l)
    {
      if(str[s]==str[i])
      {
        s++;
        prefix[i] = s;
        i++;
      }
      else
      {
        if(s!=0)
        {
          s = prefix[s-1];
        }
        else
        {
          prefix[i] = 0;
          i++;
        }
      }
    }
    
    int ans = 0;
    if(prefix[l-1]==0)
      ;
    else
    {
      int x = prefix[l-1];
      for(int i=1;i<l-1;i++)
      {
        if(prefix[i]==x)
         { ans = x;break;}
      }
      if(ans!=x)
      {
        int y = prefix[prefix[l-1]-1];
        if(y!=0)
        {
            ans = y;
        }
      }
    }
    if(ans==0)
      cout<<"Just a legend";
    else
    {
      for(int i=0;i<ans;i++)
        cout<<str[i];
    }

    

    return 0;
}