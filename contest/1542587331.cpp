#include <bits/stdc++.h>

#define MAX(a,b) ((a>b)?a:b)
#define MIN(a,b) ((a<b)?a:b)
#define loop(i, a, b) for(int i=(a);i<=(b);i++)

#define pf(x) printf(x);
#define dbg(x) printf("\n--bug: %d --\n",x)
#define PI 2*acos(0.0)
#define all(x) x.begin(),x.end()
#define ll long long
#define pb push_back
#define NL printf("\n")


using namespace std;


int main()
{
	//freopen("input.txt","r",stdin);
	string s,x;
	vector<string> v;
	int n;
	cin>>s;
	cin>>n;

	while(n--)
    {
        cin>>x;
       // if(x==s) return !printf("YES\n");
        v.pb(x);
        v.pb(x+x);


    }
    int f=0,l=0;
    int ind1,ind2;
    for(int i=0;i<v.size();i++)
    {

        if(v[i][1]==s[0])
        {
            f=1;

            ind1=i;
            break;
        }
    }

     for(int i=0;i<v.size();i++)
    {
        if(v[i][0]==s[1])
        {
            l=1;
            ind2=i;
            break;
        }
    }
       for(int i=0;i<v.size();i++)
    {
        if(v[i].size()>2)
        {
           for(int j=0;j<v[i].size()-1;j++)
           {
               if(s[0]==v[i][j] && s[1]==v[i][j+1])
                return !printf("YES\n");
           }
        }
    }



 //   cout<<f<<l<<endl;
    if(f==1 && l==1 && ind1!=ind2)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




    return 0;
}
