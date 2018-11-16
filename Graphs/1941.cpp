#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,f,inp,res = 0;
    map<int,int>male,female;

    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>inp;
        male[inp]++;
    }

    cin>>f;
    for(int i=0; i<f; i++)
    {
        cin>>inp;
        female[inp]++;
    }

    map<int,int> :: iterator itr;

    int arr[] = {-1,0,1};

    for(itr = male.begin(); itr != male.end() ; itr++)
    {
        int inx = itr->first;
        for(int i=0; i<3; i++)
        {
            int r = arr[i]+inx;
            if(female[r]>0)
            {
                if(male[inx]<=female[r])
                {
                    res += male[inx];
                    female[r] -= male[inx];
                    break;
                }
                else
                {
                    res += female[r];
                    male[inx] -= female[r];
                    female[r] = 0;
                }
            }
        }
    }

    cout<<res<<endl;

    return 0;
}
