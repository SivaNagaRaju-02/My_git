#include "insertionSort.h"

void insertionsort(int list[20], int n) {
    int i,j,x, temp;

    for(i=0; i<n-1; i++) {
        j = i+1;
        while(j>0 && list[j-1] > list[j]) {
            temp = list[j-1];
            list[j-1] = list[j];
            list[j] = temp;
            j--;
        }
    }
}