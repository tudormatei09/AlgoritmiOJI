#include "bits/stdc++.h"

const int DIM = 1e6+6;
char stiva[DIM];

inline static void task(){
        int k;
        std::string s;
        std::cin >> k >> s;
        int top = 0;
         for(int i = 0; i < s.length(); i++){
               while(top > 0 and k > 0 and stiva[top] > s[i]){
                top--;
                    k--;

               }
              stiva[++top] = s[i];
         }
         while(k > 0){
              top--;
              k--;
         }
         for(int i = 1; i <= top; i++){
               std::cout << stiva[i];
         }
}
signed main(){
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(0);
     std::cout.tie(0);
     task();
     return 0;
}
