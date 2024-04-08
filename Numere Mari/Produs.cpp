const int base = 10;
inline static void MULTIPLY(){
        std::reverse(a.begin(),a.end());
        std::reverse(b.begin(),b.end());
        for(int i = 0; i < a.size() + b.size(); i++){
              res.emplace_back(0);
        }
        for(int i = 0 ; i  < a.size(); i++){
            for(int j = 0; j < b.size(); j++){
                   res[i+j] = res[i+j] + (a[i]*b[j]);
            }
        }
        int carry = 0;
        for(int i = 0; i < res.size(); i++){
                carry  = carry +  res[i];
                res[i] = carry % base;
                carry = carry / base;
        }
        while(carry!=0){
           res.emplace_back(carry%base);
           carry = carry/base;
        }
        while(res.empty() == false  and res.back() == 0){
              res.pop_back();
        }
        if(res.empty() == true){
             res.emplace_back(0);
        }
        std::reverse(res.begin(),res.end());
}
