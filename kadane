inline static void kadane(std::vector<int> v, int &st, int &dr){
            int max_initial = INT_MIN;
            int max_sum =  0;
            int s = 0;
            for(int i = 0; i < v.size(); i++){
                 max_sum = max_sum + v[i];
                 if(max_initial < max_sum){
                      max_initial = max_sum;
                    st = s;
                    dr = i;
                 }
                 if(max_sum < 0){
                     max_sum = 0;
                     s = i + 1;
                 }
            }

}
