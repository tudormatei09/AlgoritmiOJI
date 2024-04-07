std::vector<int>sum_mare(std::vector<int> a, std::vector<int> b){
std::vector<int>rez;
      int i = a.size()-1;
      int j = b.size()-1;
      int carry = 0;
      while(i>=0 or j>= 0 or carry > 0){
      int sum = carry;
             if(i>=0){
                    sum = sum + a[i];
                        i--;
             }
             if(j>=0){
                   sum = sum + b[j];
                   j--;
             }
             carry = sum/10;
             sum = sum %10;
             rez.push_back(sum);
      }
      std::reverse(rez.begin(),rez.end());
      return rez;
}
