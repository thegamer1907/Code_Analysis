#include <cstdio>

void DFS(const int &x, const int &y, bool visited[][500], char maze[][500], const int &n, const int &m, int &k){
    if (x >= 0 && x < n && y >= 0 && y < m && k > 0){
        if (!visited[x][y]){
            visited[x][y] = true;
            DFS(x - 1, y, visited, maze, n, m, k);
            DFS(x + 1, y, visited, maze, n, m, k);
            DFS(x, y - 1, visited, maze, n, m, k);
            DFS(x, y + 1, visited, maze, n, m, k);
            if (k > 0){
                maze[x][y] = 'X';
                k--;
            }
        }
    }
}

int main (){
    bool visited[500][500] = {};
    char maze[500][500];
    int n, m, k, sx, sy;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++){
        scanf("\n");
        for (int j = 0; j < m; j++){
            scanf("%c", &maze[i][j]);
            if (maze[i][j] == '.'){
                sx = i;
                sy = j;
            } else
                visited[i][j] = true;
        }
    }
    DFS(sx, sy, visited, maze, n, m, k);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            printf("%c", maze[i][j]);
        printf("\n");
    }
    return 0;
}