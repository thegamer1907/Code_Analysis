#include <bits/stdc++.h>
using namespace std;
string s[555555];
int ans[555555];
int len[555555];
int  main()
{
       int n;
       cin >> n;
       for(int i=0;i<n;i++)
       {
               cin >> s[i];
               len[i]=s[i].length();
       }
       int mid=s[n-1].length();
       ans[n-1]=mid;
       string smid=s[n-1];
       int flag=0;
       for(int i=n-2;i>=0;i--)
       {
               if(s[i]<smid)
                {
                        ans[i]=len[i];
                        smid=s[i];
                }
                else
                {
                        string ssmid;
                        int flag=0;
                        int nmid=smid.length();
                        for(int j=0;j<min(len[i],nmid);j++)
                        {
                                if(s[i][j]>smid[j])
                                {
                                        ans[i]=j;
                                        flag=1;
                                        break;
                                }
                                ssmid+=s[i][j];
                        }
                        if(!flag)
                                ans[i]=min(len[i],nmid);
                        smid=ssmid;
                }
       }
       for(int i=0;i<n;i++)
       {
               for(int j=0;j<ans[i];j++)
                cout << s[i][j];
               cout << endl;
       }
}
