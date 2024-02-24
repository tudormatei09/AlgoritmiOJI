int cb(std::vector<int>&v,int n){
    int st = 0;
    int dr = v.size();
    while(st<=dr){
       int mij = (st+dr)/2;
       if(v[mij] == n){
          return true;
       }
       if(v[mij] < n){
           st = mij+1;
       }
       if(v[mij] > n){
          dr = mij - 1;
       }
    }
  return false;
}
