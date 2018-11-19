#include <bits/stdc++.h>


using namespace std;







int main() {

    int n,k;

    cin>>n>>k;

    int x;




    int vis[500];

    memset(vis,0,sizeof(vis));



    for(int i = 0 ; i < n ; i++) {
        int temp = 0;
        for(int j = 0 ; j < k ; j++) {

            scanf("%d",&x);
            x = 1 - x;
            if(x)  {
                temp += (1 <<(k - j - 1));

            }
        }


        vis[temp] = 1;
    }




    for(int i = 0 ; i <= (1<<k) - 1 ; i++) {
        if(vis[i]) {
            for(int j = i ; j <= (1<<k) - 1 ; j++) {
                if(vis[j] && (i|j) == (1<<k) - 1) {
                    cout<<"yes"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"no"<<endl;






    return 0;
}
