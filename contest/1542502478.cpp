#include<bits/stdc++.h>

using namespace std;

#define FOR(i,j,k) for(int i=j;i<=k;i++)
#define PB push_back
#define MAX 1010

int cc;

struct node
{
    int val, lev;
    char ch;
    node *next[3], *fail, *pa;
    vector<int> output;

    node()
    {
        cc++;
        lev = val = 0;
        pa = fail = NULL;
        FOR(i,0,2) next[i] = NULL;
    }
};

node *Root;

string getMask(int val,int k)
{
    string ret = "";

    FOR(i,0,k-1)
    {
        char ch = '0';
        if(val & (1<<i)) ch = '1';
        ret += ch;
    }

    return ret;
}

int ID(char ch)
{
    if(ch == '#') return 2;
    else return ch - '0';
}

void in(string str,int p)
{
    node *s = Root;
    int n = str.size();

    FOR(i,0,n-1)
    {
        int x = ID( str[i] );
        if(s->next[x] == NULL)
        {
            s->next[x] = new node();

            s->next[x]->ch = str[i];
            s->next[x]->pa = s;
        }
        s = s->next[x];
    }

    s->output.PB( p ); ///output link list create korar jonno
    s->val = s->val + 1;

    return;
}

queue<node*> que;


/// creating output link list
void outputLink(node *go,node *p)
{
    FOR(i,0,(int)go->output.size()-1)
    {
        int oto = go->output[i];
        p->output.PB( oto );
    }

}

void bfs(node* p)
{
    que.push( p );

    while(!que.empty())
    {
        p = que.front(); que.pop();
        int C = ID( p->ch ); /// what is my character

        if(p->pa == Root)
        {
            p->fail = Root;
        }
        else
        {
            node *s = p->pa->fail;

            while(true)
            {
                if(s->next[C] != NULL)
                {
                    p->fail = s->next[C];
                    outputLink(s->next[C], p);
                    ///cout << p->ch << '(' << p->lev << ')' << ' ' <<  s->next[C]->ch << '(' << s->next[C]->lev << ')' << endl;
                    break;
                }
                else if(Root == s)
                {
                    p->fail = s;
                    break;
                }

                s = s->fail;
            }
        }

        FOR(i,0,2)
        {
            if(p->next[i] != NULL)
            {
                p->next[i]->lev = p->lev + 1;
                que.push( p->next[i] );
            }
        }
    }
}

string pattern[MAX], text;
int col[MAX];

void readText()
{
    int p = 0, n = text.size(), x;
    node *s = Root;

    while(p<n)
    {
        int x = ID( text[p] );///- 'a';
        if(s->next[x] != NULL)
        {
            s = s->next[x];
            FOR(i,0,(int)s->output.size()-1)
            {
                int go = s->output[i];
                col[go]++;
            }
            p++;
        }
        else if(s == Root) p++;
        else s = s->fail;
    }
}

int id[MAX], curId, ara[MAX];

int main()
{
    ios::sync_with_stdio(false);
    //freopen("in.txt", "r", stdin);
    ///freopen("out.txt", "w", stdout);

    Root = new node();
    Root->fail = Root;
    Root->pa = Root;

    int n, m, a, b;
    string pot;


    FOR(i,1,7)
    {
        int v = (1<<i) - 1;
        FOR(p,0,v)
        {
            pot = getMask(p, i);
           // cout << pot << endl;
            in(pot, curId);
            id[curId] = i - 1;
            curId++;
        }
    }

    bfs( Root );
    cin >> n;
    FOR(i,0,n-1)
    {
        cin >> pattern[i];
        memset(col, 0, sizeof(col));
        text = pattern[i];
        readText();

        FOR(p,0,MAX-1)
        {
            if(!col[p])
            {
                ara[i] = p;
                break;
            }
        }
    }

    cin >> m; m += n;
    FOR(i,n,m-1)
    {
        cin >> a >> b;
        pattern[i] = pattern[a - 1] + pattern[b - 1];

        memset(col, 0, sizeof(col));
        text = pattern[i];
        readText();

        FOR(p,max(ara[a - 1], ara[b - 1]),MAX-1)
        {
            if(!col[p])
            {
                cout << id[p] << endl;
                ara[i] = p;
                break;
            }
        }
        if(pattern[i].size() > 200)
        {
            pattern[i] = pattern[i].substr(0, 50) + "#"
             + pattern[i].substr(pattern[i].size() - 50, 50);
        }
    }

    return 0;
}
