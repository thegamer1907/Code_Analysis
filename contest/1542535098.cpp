#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[5],s[110][10],temp[10];
    int n;
    cin>>str>>n;
    for (int i=0;i<n;i++) cin>>s[i];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++){
            strcpy(temp,s[i]);
            strcat(temp,s[j]);
            if (strstr(temp,str)) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    cout<<"NO"<<endl;
    return 0;
}