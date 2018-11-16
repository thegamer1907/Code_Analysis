#include <iostream>

using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        string b=a;
        bool flag1=false;
        bool flag2=false;
        int flag3=0;
        bool k1=true;
        bool k2=true;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]=='B')
            {
                if(a[i+1]=='A'&&a[i+2]=='B')
                    {
                        flag3++;
                        a[i]='x';
                        a[i+1]='x';
                        a[i+2]='x';
                        continue;
                    }
            }
            if(a[i]=='A')
            {
                if(a[i+1]=='B'&&a[i+2]=='A')
                    {
                        flag3++;
                        a[i]='x';
                        a[i+1]='x';
                        a[i+2]='x';
                        continue;
                    }
            }
            if(k1)
            {
                if(a[i]=='A')
                {
                    if(a[i+1]=='B')
                    {
                        a[i]='x';
                        a[i+1]='x';
                        flag1=true;
                        k1=false;
                        continue;
                    }
                }
            }
            if(k2)
            {
                if(a[i]=='B')
                {
                    if(a[i+1]=='A')
                    {
                        a[i]='x';
                        a[i+1]='x';
                        flag2=true;
                        k2=false;
                        continue;
                    }
                }
            }

        }
        if((flag1&&flag2)||((flag3>0)&&flag1)||((flag3>0)&&flag2)||(flag3>=2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
