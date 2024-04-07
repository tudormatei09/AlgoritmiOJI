int M[DIM + 1];
for(int i = 1 ; i <= DIM ; i ++)
    M[i] = i;
for(int i = 2; i <= DIM ; i ++)
    if(M[i] == i)
        for(int j = 2 ; i * j <= DIM ; j ++)
            M[i * j] = i;
