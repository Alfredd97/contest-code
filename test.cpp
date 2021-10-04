#include <bits/stdc++.h>
using namespace std;

struct par{
    int f,c;
};

const int mf[4] = {0,0,-1,1},
          mc[4] = {1,-1,0,0};  

int t, n, m;
char z;
int f, c, nf, nc;
int matriz[200][200], mi[200][200];

queue <par> Q;

int main(){

    cin >> t;

    while(t--){

        cin >> n >> m;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
               cin >> z; matriz[i][j] = z;
               mi[i][j] = 99999;    
            }
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
               if(matriz[i][j] == '1'){
                   mi[i][j] = 0;
                   Q.push((par){i,j});
                   while(!Q.empty()){
                       f = Q.front().f;
                       c = Q.front().c;
                       Q.pop();

                        for(int k = 0 ; k < 4 ; k++){
                            nf = f + mf[k];
                            nc = c + mc[k];
                            if( (nf > 0 && nf <= n) && (nc > 0 && nc <= m) && mi[f][c] + 1 < mi[nf][nc]){
                                Q.push((par){nf,nc});
                                mi[nf][nc] = mi[f][c] + 1;
                            }
                        }

                   }
               }        
            }
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
               cout << mi[i][j] << " ";   
            }
            cout << endl;
        }

    }

    return 0;
}