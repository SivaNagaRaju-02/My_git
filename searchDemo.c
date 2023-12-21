#include <stdio.h>
#include "LinearSearch.h"

void showList(int [20], int, char [20]);

void main() {
    int list[20];
    int i,k,n;
    struct listof l1;
    
    printf("Enter list size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        printf("Enter Ele-[%d]: ",i+1);
        scanf("%d",&list[i]);
    }

    printf("Enter a key: ");
    scanf("%d",&k);

    printf("\n");
    showList(list,n,"List");
    printf("And your Key: %d",k);
    printf("\n");

    l1 = linearsearch(list, n, k);
    showList(l1.indices, l1.x, "indices");
}

void showList(int z[20], int n, char str[20]) {
    int i;
	printf("%s = [",str);
	for(i=0; i<n; i++) {
		if(i < n-1) printf("%d, ",z[i]);
		else printf("%d]\n",z[i]);
	}
}