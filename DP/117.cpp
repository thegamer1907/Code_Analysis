#include <bits/stdc++.h>

#define MaxN 105
#define Out  std::cout
#define In   std::cin

int A, B;

template <int NNodes> class UndirectedGraph {
public:
    inline void AddEdge(int x, int val, bool t) {
       Skill[t][val].push_back(x);
       Value[t][x] = val;
    }

    bool MatchNode(int Node) {
        if (Seen[Node]) return false;
        Seen[Node] = 1;

        for (int skl = Value[0][Node]-1; skl <= Value[0][Node]+1; ++skl) {
            for (auto Vecin:Skill[1][skl]) {
                if (!Match[1][Vecin] || MatchNode (Match[1][Vecin])) {
                    Match[0][Node] = Vecin;
                    Match[1][Vecin] = Node;
                    return true;
                }
            }
        }   return false;
    }

    int Coverage() {
        bool Check = 1;

        while (Check) {
            Check = 0;
            for (int i=0; i<A; ++i)
                Seen[i+1] =  0;

            for (int i=0; i<A; ++i)
                if (!Match[0][i+1])
                    Check |= MatchNode(i+1);
        }

        int NMatches = 0;
        for (int i=0; i<A; ++i)
            if (Match[0][i+1])
                ++ NMatches;
        return NMatches;
    }

private:
    int Value[2][NNodes];
    std::list <int> Skill[2][105];

    int Match[2][NNodes];
    bool Seen[NNodes];

};  UndirectedGraph <MaxN> Graph;

void Citire() {
    In >> A;
    for (int i=0, x; i<A; ++i)
        In >> x, Graph.AddEdge(i+1, x, 0);
    In >> B;
    for (int i=0, x; i<B; ++i)
        In >> x, Graph.AddEdge(i+1, x, 1);
}

void Rezolvare() {
    Out << Graph.Coverage();
}

int main()
{
    Citire();
    Rezolvare();

    return 0;
}
