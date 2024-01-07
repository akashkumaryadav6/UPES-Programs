#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k){
    int cases = (n*(n-1))/2;
    int a, b, and, or, xor, andarr[cases], orarr[cases], xorarr[cases], andmax, ormax, xormax;
    int index = 0;
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= n; j++){
            if (i==j){
                j=j+1;
            }
            if (j>i){
                and = i & j;
                if (and<k){
                    andarr[index]=and;
                }
                else{
                    andarr[index]=0;
                }
                or = i | j;
                if (or<k){
                    orarr[index]=or;
                }
                else{
                    orarr[index]=0;
                }
                xor = i ^ j;
                if (xor<k){
                    xorarr[index]=xor;
                }
                else{
                    xorarr[index]=0;
                }
                index = index + 1;
            }

        }
    }
    for (int i = 0; i<cases; i++){
        if (andarr[0]<andarr[i] || andarr[0] == andarr[i]){
            andarr[0] = andarr[i];
            andmax = andarr[0];
        }
        if (orarr[0]<orarr[i] || orarr[0] == orarr[i]){
            orarr[0] = orarr[i];
            ormax = orarr[0];
        }
        if (xorarr[0]<xorarr[i] || xorarr[0] == xorarr[i]){
            xorarr[0] = xorarr[i];
            xormax = xorarr[0];
        }
    }

    printf("%d\n",andmax);
    printf("%d\n",ormax);
    printf("%d\n",xormax);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
