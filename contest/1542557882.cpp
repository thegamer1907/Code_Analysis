#include<iostream>
using namespace std;
#include<vector>
#include<string>
int main()
{
    string s1;
    while(cin>>s1)
    {
        int n;
        cin>>n;
        vector<string>v;
        while(n--)
        {
            string s2;
            cin>>s2;
            v.push_back(s2);
        }
        int t;
        for(int i = 0 ; i < v.size() ; i++)
        {
            for(int j = 0 ; j < v.size() ; j++)
            {
                string s3 = v[i] + v[j];
                int len = s3.length();
                t = 0;
                for(int l = 0 ; l < len; l++)
                {
                    if((s1[0] == s3[l]) && (s1[1] == s3[l+1])){
                        cout<<"YES"<<endl;
                        t = 1 ;
                        break;
                    }
                }
                if(t == 1)
                    break;
            }
            if(t == 1)
                break;
        }
        if(t == 0)
            cout<<"NO"<<endl;
    }
}