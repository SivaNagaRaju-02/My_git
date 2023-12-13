#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
#include "selectionSort.h"

int n, list[20], x[20];

void showList();
void readList();

void main() {
    int i;
    printf("Enter a Number: ");
    scanf("%d",&n);

    /*for(i=0; i<n; i++) {
        printf("Enter Element-%d: ",i+1);
        scanf("%d",&list[i]);
    }*/

	readList();
    for(i=0; i<n; i++) {
        x[i] = list[i];
    }
	
    showList("List");

    selectionsort(x, n);

    showList("\nSorted List");
}

void readList() {
	int i;
	for(i=0; i<n; i++) {
		list[i] = rand() % 1000 + 1;
	}
}

void showList(char str[20]) {
    int i;
	printf("%s = [",str);
	for(i=0; i<n; i++) {
		if(i < n-1) printf("%d, ",x[i]);
		else printf("%d]\n",x[i]);
	}
}