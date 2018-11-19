#include<bits/stdc++.h>
using namespace std;
void tellMe(vector<string> vec,string str){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++)
        {            
                   if((vec[i][1]==str[0] and vec[j][0]==str[1]))
                   {
                       cout<<"YES\n";
                       exit(0);
                   }
        }
    }
}
int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    vector<string> vec;
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp.find(str)!=string::npos){
            cout<<"YES\n";
            return 0;
        }
        vec.push_back(temp);
    }
    tellMe(vec,str);
    cout<<"NO\n";
}