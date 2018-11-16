//
//  main.cpp
//  code
//
//  Created by Reza Godarzi on 8/7/1397 AP.
//  Copyright © 1397 w. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            ans+=1;
            if(ans==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            ans=1;
    }
    cout<<"NO"<<endl;
    return 0;
}