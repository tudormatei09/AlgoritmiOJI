inline static void maximSubsecventa(std::vector<int> v, int &inceput, int &sfarsit){
    int maxim_initial = INT_MIN;
    int suma_maxima =  0;
    int start = 0;
    for(int i = 0; i < v.size(); i++){
         suma_maxima = suma_maxima + v[i];
         if(maxim_initial < suma_maxima){
              maxim_initial = suma_maxima;
              inceput = start;
              sfarsit = i;
         }
         if(suma_maxima < 0){
             suma_maxima = 0;
             start = i + 1;
         }
    }
}
