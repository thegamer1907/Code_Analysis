#include<bits/stdc++.h>
using namespace std;

int size_check(string root){
    for(int i=10;i>=0;i--){
        bool flag=true;
        for(int j=0;j<pow(2,i);j++){
            string str;
            for(int k=0;k<i;k++){
                if(j&(1<<k)) str+='1';
                else str+='0';
            }

            if(root.find(str)==string::npos){
                flag=false;
                break;
            }
        }

        if(flag)
            return i;
    }
}

int main(){
    int n,m;
    string s1[300];
    int arr[300];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1[i];
        arr[i]=size_check(s1[i]);
    }
    cin>>m;

    for(int q=0;q<m;q++){
        int l,r;
        cin>>l>>r;
        l--;r--;

        s1[n]=s1[l]+s1[r];
        if(s1[n].length()>1024){
            s1[n]=s1[n].substr(0,500)+s1[n].substr(s1[n].length()-500,500);
        }
        arr[n]=max(max(arr[l],arr[r]),size_check(s1[n]));
        cout<<arr[n]<<endl;
        n++;
    }




    return 0;
}
