#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    string aim;
    cin>>aim;
    int N;
    char a[103][3];
    cin>>N;

    for(int i = 0;i<N;i++){
        cin>>a[i];
    }
    bool flag = 0;
    for(int i = 0;i<N && flag==0;i++){
        if ((a[i][0]==aim[0]) &&(a[i][1]==aim[1])){
            flag=1;
        }
        if(a[i][1]==aim[0]){
            for(int j = 0;j<N&&flag==0;j++){
                if(a[j][0]==aim[1]){
                    flag=1;
                }
            }
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
