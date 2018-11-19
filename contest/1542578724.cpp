#include <bits/stdc++.h>

using namespace std;
bool sub(string s1, string s2){
if (s1.find(s2) != string::npos) {
      return true;
}
return false;
}
int main()
{
    string pass;
    cin>>pass;
    int n;
    scanf("%d",&n);
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
  //  cout<<words[0]+words[1]<<endl;
    int flag=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                string tmp=words[i]+words[j];
               //  cout<<words[i]+words[j]<<endl;
                if(sub(tmp,pass)){

                        printf("YES\n");
                        return 0;
                }
                else{
                    flag=1;
                }
            }
    }
    if(flag=1){
    printf("NO\n");
    }

    return 0;
}
