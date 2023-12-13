#include "bubbleSort.h"

void bubblesort(int list[20], int n) {
    int i,j,temp;

    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(list[j] > list[j+1]) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
