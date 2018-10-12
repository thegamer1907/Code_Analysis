#include<bits/stdc++.h>
#define 	sf  	scanf
#define 	pf  	printf
#define 	mo  	1000000000
#define 	li  	long long int
#define 	uli  	unsigned long long int
#define 	pi  	acos(-1)
using namespace std;


int main()
{
    vector<string>v,v1;
    map<string ,int>mp;
    int n,m,cnt,cont;
    string str,str1;
    sf("%d %d",&n,&m);
    int k=n,l=m;
    getchar();
    while(n--)
    {
        getline(cin,str);
        v.push_back(str);
        mp[str]++;
    }
    while(m--)
    {
        getline(cin,str1);
        v1.push_back(str1);
        mp[str1]++;
    }
    cnt=0;
    for(int i=0;i<v.size();i++)
	{
		if(mp[v[i]]==2)cnt++;
	}
	//cout<<cnt<<endl;
//    if(k>=l)
//    {
//		cnt=0,cont=0;
//        for(int i=0; i<v.size(); i++)
//        {
//            if(mp[v[i]]==0)
//            {
//            	cnt++;
//                mp[v[i]]=1;
//                for(int j=0; j<v1.size(); j++)
//                {
//                	//cout<<98<<endl;
//                    if(mp[v1[j]]==1)continue;
//                    mp[v1[j]]=1;
//                    cont++;
//                    break;
//                }
//            }
//        }
//    }
     k=k-cnt,l=l-cnt;

    if(k>=l&&(cnt%2==1)||(k>l&&(cnt%2==0)))pf("YES\n");
    else pf("NO\n");
    //cout<<cnt<<" "<<cont<<endl;




        return 0;
    }
