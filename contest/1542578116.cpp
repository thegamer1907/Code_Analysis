#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,j;
    cin>>n>>k;
    /*int a[4]={1,2,3,4};
    int b[6]={12,13,14,23,24,34};
    int c[4];{123,124,134,234};
    int d=1234;
    int ans=0;*/
    set<string> ms;
    map<string, list<string>> mp;
    if(k==1){
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
           if(x==0){
            cout<<"YES";
            break;
           }
        }
        if(i==n)
            cout<<"NO";
    }
    if(k==2){
        
        for(i=0;i<n;i++){
            string x;
            for(j=0;j<k;j++){
                int y;
                cin>>y;
                char c = '0' + y;
                x.push_back(c);
                
            }
            ms.insert(x);
        }
        int ans=0;
        if(ms.find("00")!=ms.end())
            ans=1;
        if(ms.find("01")!=ms.end()&&ms.find("10")!=ms.end())
            ans=1;
        if(ans)
            cout<<"yes";
        else
            cout<<"no";
        //mp["01"].push_back("10");
    }
    if(k==3){
        for(i=0;i<n;i++){
            string x;
            for(j=0;j<k;j++){
                int y;
                cin>>y;
                char c = '0' + y;
                x.push_back(c);
                
            }
            ms.insert(x);
        }
        int ans=0;
        if(ms.find("000")!=ms.end())
            ans=1;
        map<string, list<string>>::iterator it= mp.begin();
        
        mp["001"].push_back("010");
        mp["001"].push_back("100");
        mp["001"].push_back("110");
        mp["010"].push_back("100");
        mp["010"].push_back("101");
        mp["100"].push_back("011");
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(ms.find((*it).first)!=ms.end()){
                list<string>:: iterator itt = (*it).second.begin();
                for(;itt!=(*it).second.end();itt++){
                    if(ms.find(*itt)!=ms.end())
                        ans=1;
                }
            }
        }
         if(ans)
            cout<<"yes";
        else
            cout<<"no";
    }
    if(k==4){
        for(i=0;i<n;i++){
            string x;
            for(j=0;j<k;j++){
                int y;
                cin>>y;
                char c = '0' + y;
                x.push_back(c);
                
            }
            ms.insert(x);
        }
        int ans=0;
        if(ms.find("0000")!=ms.end())
            ans=1;
        map<string, list<string>>::iterator it= mp.begin();
        mp["0001"].push_back("0010");
        mp["0001"].push_back("0100");
        mp["0001"].push_back("1000");
        mp["0001"].push_back("0110");
        mp["0001"].push_back("1010");
        mp["0001"].push_back("1100");
        mp["0001"].push_back("1110");
        mp["0010"].push_back("0100");
        mp["0010"].push_back("1000");
        mp["0010"].push_back("0101");
        mp["0010"].push_back("1100");
        mp["0010"].push_back("1001");
        mp["0010"].push_back("1101");
        mp["0100"].push_back("1000");
        mp["0100"].push_back("0011");
        mp["0100"].push_back("1010");
        mp["0100"].push_back("1001");
        mp["0100"].push_back("1011");
        //mp["0100"].push_back("0011");
        mp["1000"].push_back("0011");
        mp["1000"].push_back("0110");
        mp["1000"].push_back("0101");
        mp["1000"].push_back("0111");
        mp["0011"].push_back("1100");
        mp["0101"].push_back("1010");
        mp["0110"].push_back("1001");
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(ms.find((*it).first)!=ms.end()){
                list<string>:: iterator itt = (*it).second.begin();
                for(;itt!=(*it).second.end();itt++){
                    if(ms.find(*itt)!=ms.end())
                        ans=1;
                }
            }
        }
         if(ans)
            cout<<"yes";
        else
            cout<<"no";
    }
    
	// your code goes here
	return 0;
}
