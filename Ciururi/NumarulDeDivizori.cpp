int Nr[DIM + 1];
for(int i = 1 ; i <= DIM ; i ++)
    Nr[i] = 0;
for(int i = 1; i <= DIM ; i ++)
    for(int j = 1 ; i * j <= DIM ; j ++)
        Nr[i * j] ++;
