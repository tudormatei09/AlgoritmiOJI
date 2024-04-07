#include "bits/stdc++.h"
int n;
bool valid[300];
int st[300];
inline static void bkt(int pasi, int poz){
if(poz> 1){
     for(int i = 1; i < poz; i++){
          std::cout << st[i] << ' ';
     }
     std::cout << '\n';
}
        for(int i = pasi; i <= n; i++){
              if(!valid[i]){
                   valid[i] =true;
                   st[poz] = i;
                   bkt(pasi+1,poz+1);
                   valid[i] = false;
              }
        }
}
signed main(){
      freopen("submultimi.in","r",stdin);
      freopen("submultimi.out","w",stdout);
        std::cin >> n;
        bkt(1,1);
    return 0;
}



///// sau asa
#include <iostream>
#include <vector>

using namespace std;

void printSubsets(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
        cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                cout << nums[j] << " ";
            }
        }
        cout << "}\n";
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    printSubsets(nums);
    return 0;
}
