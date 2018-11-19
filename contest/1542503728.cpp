#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st,st1,st2="";
    cin>>st;
    //reverse(st.begin(), st.end());
    int n;
    cin>>n;
    //string st1=strrev(st);
    //cout<<st<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>st1;
        string st4=st1;
        reverse(st4.begin(), st4.end());
        if(st==st1 || st==st4){
            cout<<"YES"<<endl;
            return 0;
        }
        st2=st2+st1;
    }
    //cout<<st2<<endl;
    int m=st2.size();
    for(int i=0; i<m; i++)
    {
        if(st[0]==st2[i])
        {
            if(i%2==1)
            {
                for(int j=0; j<m; j++)
                {
                    if(st[1]==st2[j])
                    {
                        if(j%2==0)
                        {
                            cout<<"YES"<<endl;
                            return 0;
                        }

                    }
                }
            }


        }
        else if(st[1]==st2[i])
        {
            if(i%2==0)
            {
                for(int j=0; j<m; j++)
                {
                    if(st[0]==st2[j])
                    {
                        if(j%2==1)
                        {
                            cout<<"YES"<<endl;
                            return 0;
                        }

                    }
                }
            }


        }
    }
    cout<<"NO"<<endl;
}
