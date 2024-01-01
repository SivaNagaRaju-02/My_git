#include <stdio.h>
#include <stdlib.h>
#include "LinearSearch.h"
#include "BinarySearch.h"

void showList(int [20], int, char [20]);
void readList(int [20], int);

int main() {
    int list[20];
    int i,k,n,ind;
    int op,opt,q1=0;
    struct listof l1;

    while(q1 == 0) {

        printf("Enter a Number: ");
        scanf("%d",&n);

        printf("\n[1]. Manual Read List.\n");
        printf("[Any]. Auto Read List.\n");
        printf("Choose An Option: ");
        scanf("%d",&op);

        if(op == 1) {
            for(i=0; i<n; i++) {
                printf("Enter Element-%d: ",i+1);
                scanf("%d",&list[i]);
            }
        }else   readList(list, n);

        showList(list, n, "\nList");
        opt = -1;

        while(opt != 9 && opt != 0) {
            printf("Enter a key: ");
            scanf("%d",&k);
            
            printf("\n\t\t*****MENU*****\n");
            printf("\t[1]. Linear Search.\n");
            printf("\t[2]. Binary Search.\n");
            printf("\t[3]. Recursive Binary Search.\n");
            printf("\t[9]. Update List.\n");
            printf("\t[0]. Exit.\n");
            printf("Choose a Searching Algorithm: ");
            scanf("%d",&opt);

            printf("Searching the list for key: %d\n",k);
            if(opt == 1) {
                l1 = linearsearch(list, n, k);
                if(l1.x == 0) {
                    printf("The Key %d is not found in The list..!",k);
                }else {
                    printf("The Key %d is found at",k);
                }
                showList(l1.indices, l1.x, "\nIndices");
            }else if(opt == 2) {
                ind = binarysearch(list, n, k);
                showList(list,n,"\nSortedList");

                if(ind == -1) printf("The Number %d is not found in the Array..!\n",k);
                else printf("The Number %d is Found at the index: %d\n",k,ind);
            }else if(opt == 3) {
                ind = binarysearchRec(list, n, k);
                showList(list,n,"\nSortedList");

                if(ind == -1) printf("The Number %d is not found in the Array..!\n",k);
                else printf("The Number %d is Found at the index: %d\n",k,ind);
            }else if(opt == 9) {
                printf("Update Your List.\n");
            }else if(opt == 0) {
                printf("You Choose to Quit...!\n");
                q1 = 99;
            }else {
                printf("You Entered an Invalid Option...\n");
            }
        }
    }

    return 0;
}

void readList(int list[20], int n) {
	int i;
	for(i=0; i<n; i++) {
		list[i] = rand() % 1000 + 1;
	}
}

void showList(int z[20], int n, char str[20]) {
    int i;
	printf("%s = [",str);
	for(i=0; i<n; i++) {
		if(i < n-1) printf("%d, ",z[i]);
		else printf("%d]\n",z[i]);
	}
}