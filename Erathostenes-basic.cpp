#include "bits/stdc++.h"

std::vector<bool>prime(1000001,true);

void ciur(){
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= 1000000; i++){
       if(prime[i]){
           for(int j = i*i; j <= 1000000; j = j + i){
                prime[j] = false;
           }
       }
    }
}


int main(){
      ciur();
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(0);
     int n;
     std::cin >> n;
     for(int i = 0; i < n; i++){
          if(prime[i] == true){
             std::cout << i << " ";
          }
     }
    return 0;
}
