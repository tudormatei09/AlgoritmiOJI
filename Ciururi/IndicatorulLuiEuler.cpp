int F[DIM + 1];
for(int i =1 ; i <= DIM ; i ++)
    F[i] = i;
for(int i = 2;  i <= DIM ; i ++)
    if(F[i] == i)
    {
        for(int j = 1 ; j * i <= DIM ; j ++)
            F[j * i]= F[j * i] / i * (i - 1);
    }
