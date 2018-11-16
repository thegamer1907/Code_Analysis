#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int M=20000;
int d[M];

/*class Node{
private:
    Node* blue;
    Node* red;


};*/


vector<int> graf[M];
void add(int a, int b){
    graf[a].push_back(b);
}

int main()
{
    add(1,2);
    for(int i = 2;i<M;i++){
        if(i<10000){
            add(i,2*i);
        }
        add(i,i-1);
    }

    int n,m;
    scanf("%d %d",&n,&m);
    if(n==m){
        printf("0");
        return 0;
    }
    queue<int> q;
    d[n]=1;
    q.push(n);
    int tr,temp;
    while(!q.empty()){
        tr=q.front();
        q.pop();
        for(int i = 0;i<graf[tr].size();i++){
            temp=graf[tr][i];
            if(temp==m){
                printf("%i",d[tr]);
                return 0;
            }
            else{
                if(d[temp]==0){
                    d[temp]=d[tr]+1;
                    q.push(graf[tr][i]);
                }
            }
        }
    }




    /*int temp = n;
    int rez = 0, counter=0, calc=0;
    while(temp<m){
        temp*= 2;
        counter++;
    }
    rez=((temp-m)/(int)pow(2,counter)) + ((temp-m)% (int)(int)pow(2,counter+1))-1;
    printf("%d",rez, (int)(temp-m));*/
    return 0;
}
