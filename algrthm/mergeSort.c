#include <stdio.h>
#include "mergeSort.h"
int *list;
int n;

void devide(int , int);
void merge(int, int, int);

void mergesort(int x[20], int y) {
    list = x;
    n = y;
    devide(0, n-1);
}

void devide(int p, int r) {
    int q;
    if(p<r) {
        q = (p+r)/2;
        devide(p, q);
        devide(q+1, r);
        merge(p, q, r);
    }
}

void merge(int p, int q, int r) {
    int L[20],R[20], i,j,k,x,y;

    x = 0;
    for(i=p; i<=q; i++){
        L[x] =  list[i];
        x++;
    }

    y = 0;
    for(j=q+1; j<=r; j++) {
        R[y] = list[j];
        y++;
    }

    i = j = 0;
    k = p;
    while(i<x && j<y) {
        if(L[i] > R[j]) {
            list[k] = R[j];
            j++;
        }else {
            list[k] = L[i];
            i++;
        }
        k++;
    }

    while(i<x) {
        list[k] = L[i];
        k++;
        i++;
    }

    while(j<y) {
        list[k] = R[j];
        k++;
        j++;
    }
}