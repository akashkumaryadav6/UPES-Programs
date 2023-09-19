


void calculate_the_maximum(int n, int k) {
  int and, or, xor, andarr[10], orarr[10], xorarr[10], maxand, maxor, maxxor, l=1;
  for (int i = 1; i < n; i++){
      for (int j = 2; j <= n; j++){
        if (i==j ){
            j++;
        }
        if (i<j){
            and = i&j;
            or = i|j;
            xor = i^j;
            if (and<k){
                andarr[l]=and;
            }
            else{
                continue;
            }
            if (or<k){
                orarr[l]=or;
            }
            else{
                continue;
            }
            if (xor<k){
                xorarr[l]=xor;
            }
            else{
                continue;
            }
            l++;
        }
    }
}
    for (int h = 1; h<=l; h++){
        if (andarr[h]>=k){
            andarr[h]=0;
        }
        else{
            continue;
            }
        if (orarr[h]>=k){
            orarr[h]=0;
        }
        else{
            continue;
            }
        if (xorarr[h]>=k){
            xorarr[h]=0;
        }
        else{
            continue;
            }
    }
    for (int i=1; i<=n*2;i++){
    printf("%d ", xorarr[i]);
}
    for (int i=1; i <= n*2; i++ ){
        if (andarr[i]>andarr[i+1]){
            maxand = andarr[i];
        }
        else{
            continue;
        }
        if (orarr[i]>orarr[i+1]){
            maxor = orarr[i];
        }
        else{
            continue;
        }
        if (xorarr[i]>xorarr[i+1]){
            maxxor = xorarr[i];
            printf("MAX: %d\n",maxxor);
        }
        else{
            continue;
        }
    }
    printf("ARRAY: ");
for (int i=1; i<=n*2;i++){
    printf("%d ", xorarr[i]);
}

    printf("\n%d\n", maxand);
    printf("%d\n", maxor);
    printf("%d\n", maxxor);
}



