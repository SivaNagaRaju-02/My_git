#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"

int n, list[20], x[20];

void showList(int [20], char [20]);
void readList();
void setX();

void main() {
    int i,op,opt,q1=0,q2;
    while(q1 == 0) {

        printf("Enter a Number: ");
        scanf("%d",&n);
        q2 = 0;

        printf("\n[1]. Manual Read List.\n");
        printf("[Any]. Auto Read List.\n");
        printf("Choose An Option: ");
        scanf("%d",&op);

        if(op == 1) {
            for(i=0; i<n; i++) {
                printf("Enter Element-%d: ",i+1);
                scanf("%d",&list[i]);
            }
        }else   readList();

        showList(list, "\nList");

        while(q2 == 0) {
            printf("\n\t****MENU****\n");
            printf("[1].Bubble Sort\n");
            printf("[2].Selection Sort\n");
            printf("[3].Insertion Sort\n");
            printf("[4].merge Sort\n");
            printf("[5].Quick Sort\n");
            printf("[9].Update List\n");
            printf("[0].Exit\n");
            printf("\nChoose Any Option: ");
            scanf("%d", &opt);

            switch(opt) {
                case 1 : setX();
                    bubblesort(x, n);
                    showList(x, "BubbleSortList");
                    break;
                case 2 : setX();
                    selectionsort(x,n);
                    showList(x, "SelctSortList");
                    break;
                case 3 : setX();
                    insertionsort(x,n);
                    showList(x, "InSortList");
                    break;
                case 4 : setX();
                    mergesort(x, n);
                    showList(x, "MergeSortList");
                    break;
                case 5 : setX();
                    quicksort(x, n);
                    showList(x, "QuickSortList");
                    break;
                case 9 : q2 = 1;
                    break;
                case 0 : q1 = q2 = 1;
                    break;
                default : printf("\nYour InPut Doesn't Match With Options...! Choose A correct Option.\n");
                    q2 = 1;
            }
        }
    }
}

void readList() {
	int i;
	for(i=0; i<n; i++) {
		list[i] = rand() % 1000 + 1;
	}
}

void showList(int z[20], char str[20]) {
    int i;
	printf("%s = [",str);
	for(i=0; i<n; i++) {
		if(i < n-1) printf("%d, ",z[i]);
		else printf("%d]\n",z[i]);
	}
}

void setX() {
    int i;
    for(i=0; i<n; i++) {
        x[i] = list[i];
    }
    showList(x, "\nList");
}