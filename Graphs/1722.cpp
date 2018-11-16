/*
I am Hunting High and Low
Diving from the sky above
Looking for, more and more, once again
I'm Hunting High and Low
Sometimes I may win, sometimes I'll lose
It's just a game that I play

After the storm there's a calm
Through the clouds shines a ray of the sun
I'm carried from all my harm
There is no one I can't outrun

Now I'm leaving my worries behind
Feel the freedom of body and mind
I'm starting my journey, I'm drifting away with the wind, I go___________________:-
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 3e4+1;
int vis[N];
vector < int > v[N];

void dfs(int i){
    vis[i] = 1;
   // cout << i ;
    for(auto it : v[i]){
        if(!vis[it])dfs(it);
    }
}


int main(){
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   int i, j;
   int n, dest;
   cin >> n >> dest;

   for(i = 1; i <= n-1; i++){
        cin >> j;
        v[i].push_back(j + i);
   }
    dfs(1);
    if(!vis[dest])cout << "NO";
    else cout << "YES";
  	return 0;
}
