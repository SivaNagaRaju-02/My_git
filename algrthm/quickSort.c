#include <stdio.h>
#include "quickSort.h"
int *list;
int n;

void pivote(int, int , int);
void sort(int, int);
void quicksort(int x[20], int y) {
    list = x;
    n = y;

    sort(0,n-1);
} 

void pivote(int p, int q, int r) {
    sort(p, q-1);
    sort(q+1, r);
}

void sort(int p, int r) {
    if(p < r) {
        int i,j,q,temp,x;

        x = list[r];
        q = p;
        for(i=p; i<=r; i++) {
            if(list[i] <= x) {
                temp = list[i];
                list[i] = list[q];
                list[q] = temp;
                q++;
            }
        }

        pivote(p,q-1,r);
    }
}