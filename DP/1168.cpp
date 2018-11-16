#include<bits/stdc++.h>
using namespace std;
int n,one,zero,one_trimmed_zero_sub_array=-1;
int main(){
    cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        if(tmp==1){ one++;if(zero>0)zero--;}
        
        else zero++,one_trimmed_zero_sub_array=max(zero,one_trimmed_zero_sub_array);
    }
    cout<<one+one_trimmed_zero_sub_array<<endl;
}