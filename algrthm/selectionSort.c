#include "selectionSort.h"
void selectionsort(int list[20], int n) {
    int i,j,x,c;

    for(i=0; i<n; i++) {
        x = list[i];
        c = -1;
        j = i+1;
        while(j<n) {
            if(x < list[j]) {
                x = list[j];
                c = j;
            }
            j++;
        }

        if(c != -1) {
            list[c] = list[i];
            list[i] = x;
        }
    }
}