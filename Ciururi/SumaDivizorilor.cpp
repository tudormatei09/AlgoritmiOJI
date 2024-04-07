int S[DIM + 1];
for(int i = 1 ; i <= DIM ; i ++)
    S[i] = 0;
for(int i = 1; i <= DIM ; i ++)
    for(int j = 1 ; i * j <= DIM ; j ++)
        S[i * j] += i;
