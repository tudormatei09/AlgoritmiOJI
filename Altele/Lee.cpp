#include "bits/stdc++.h"
#define INF  2e6+5

/**
6  8
0 1 0 0 0 0 0 0
0 1 0 1 0 1 1 0
0 0 0 1 0 0 0 0
0 1 0 1 0 1 1 0
0 1 0 1 0 1 0 0
0 0 0 1 0 1 0 0
1 1 6 8
*/


const int DIM = 1005;
int mat[DIM][DIM],lee[DIM][DIM];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int n,m;
int startx,starty,stopx, stopy;
std :: queue< std :: pair<int,int>>q;

inline static void citire(){
 std :: cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                std :: cin >> mat[i][j];
            }
        }
        std :: cin >> startx >> starty >> stopx >> stopy;
}

inline static void init(){
        for(int i = 1; i <= n; i++){
             for(int j = 1; j <= m; j++){
                   lee[i][j] = INF;
             }
        }
}

inline static void bordare(){
         for(int i = 0; i <= m+1; i++){
              mat[0][i] = mat[n+1][i] = 1;
         }
         for(int i = 0;  i <= n+1; i++){
              mat[i][0] = mat[i][m+1] = 1;
        }
}

inline static void Lee(int x, int y){
       q.push({x,y});
       lee[x][y] = 0;
       int i,j;
       while(q.empty() == false){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            for(int p = 0; p < 4; p++){
                 x = i + dx[p];
                 y = j + dy[p];
                 if(mat[x][y] != 1 and lee[x][y] > 1 + lee[i][j]){
                      lee[x][y] = 1 + lee[i][j];
                      q.push({x,y});
                 }
            }
       }
}

inline static void afis(){
     std :: cout << '\n';
     std :: cout << lee[stopx][stopy] << '\n';
      for(int i = 1; i <= n; i++){
           for(int j = 1; j <= m; j++){
                if(lee[i][j] == INF){
                     std :: cout << -1 << ' ';
                }else{
                     std :: cout << lee[i][j] << ' ';
                }
           }
           std :: cout << '\n';
      }
}

signed main(){

    std :: ios_base :: sync_with_stdio(false);
    std :: cin.tie(0);
    std :: cout.tie(0);

    citire();
    bordare();
    init();
    Lee(startx,starty);
    afis();

    return 0;

}
