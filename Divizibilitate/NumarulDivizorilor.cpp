long long numberOfDivisors(long long num) {
    long long total = 1;
    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            do {
                e++;
                num /= i;
            } while (num % i == 0);
            total *= e + 1;
        }
    }
    if (num > 1) {
        total *= 2;
    }
    return total;
}


/////sau ciur
#include "bits/stdc++.h"
const int NMAX = 1e6;
std::vector<int>nrdiv(NMAX,0);
inline static void task(){
     for(int i = 1; i <= NMAX+6; i++){
            for(int j = i; j <= NMAX; j=j+i){
                 nrdiv[j]++;
            }
     }
     int n;
     std::cin >> n;
     std::cout <<  nrdiv[n];
}
signed main(){
     freopen("nrdiv.in","r",stdin);
     freopen("nrdiv.out","w",stdout);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    task();
    return 0;
}
