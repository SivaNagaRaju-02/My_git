#include <stdio.h>
#include "BinarySearch.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "mergeSort.h"

int *list, l[20];
int n, x;

void selectSort();
int search(int , int);
void setL();

int binarysearch(int ar[20], int len, int k) {
    int p,q,r;

    list = ar;
    n = len;
    selectSort();

    p = 0;
    r = n-1;
    while(p<=r) {
        q = (p+r)/2;
        if(k < ar[q]) {
            r = q-1;
        }else if(k > ar[q]) {
            p = q+1;
        }else {
            break;
        }
    }

    if(p<=r) return q;
    else return -1;
}

int binarysearchRec(int ar[20], int len, int k) {
    int ind;
    list = ar;
    n = len;

    selectSort();
    ind = search(0, len-1);
    return ind;
}

int search(int p, int r) {
    int q,ind = -1;
    if(p<=r) {
        q = (p+r) / 2;
        if(x < list[q]) r = q-1;
        else if(x > list[q]) p = q+1;
        else return q;
        ind = search(p,r);
    }
    return ind;
}

void selectSort() {
    int opt;
    
    printf("\n\t[1].Selection Sort.\n");
    printf("\t[2].Insertion Sort.\n");
    printf("\t[3].Merge Sort.\n");
    printf("Choose a Sorting Algorithm: ");
    scanf("%d",&opt);

    setL();
    if(opt == 1) selectionsort(l, n);
    else if(opt == 2) insertionsort(l, n);
    else if(opt == 3) mergesort(l, n);
    else {
        printf("You choose an Invalid Option..! We are using Insertion Sort.\n");
        insertionsort(l,n);
    }
}

void setL() {
    int i;
    for(i=0; i<n; i++) {
        l[i] = list[i];
    }
}