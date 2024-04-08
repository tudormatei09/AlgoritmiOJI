inline static void DIFF(){
std::reverse(a.begin(),a.end());
std::reverse(b.begin(),b.end());
        if(a.size() < b.size()){
             std::swap(a,b);
        }
        int i,j;

        for(i = 0; i < a.size(); i++){
             if(a[i] >= b[i]){
                     res.emplace_back(a[i]-b[i]);

             }else{
                for(j = i + 1; a[j] == 0;  j++){
                     a[j] = base - 1;
                     }
                     --a[j];
                res.emplace_back(base-b[i]+a[i]);
             }
        }
        while(res.empty()  == false  and res.back() == 0)
             res.pop_back();
        if(res.empty() == true){
             res.emplace_back(0);
        }
       std::reverse(res.begin(),res.end());

}
