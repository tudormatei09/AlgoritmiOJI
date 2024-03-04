//iterez de la 0
smen[a][b] += val;
smen[a][d + 1] -= val;
smen[c + 1][b] -= val;
smen[c + 1][d + 1] += val;
smen[i][j] = smen[i][j] + smen[i][j-1] + smen[i-1][j] - smen[i-1][j-1];
mat[i][j] = mat[i][j] + smen[i][j];
