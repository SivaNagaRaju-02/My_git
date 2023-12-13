#include <stdio.h>
#include <stdlib.h>
int n, list[20];

void showList();
void readList();
void bubbleSort();

void main() {
    int i;
    printf("Enter a Number: ");
    scanf("%d",&n);

    /*for(i=0; i<n; i++) {
        printf("Enter Element-%d: ",i+1);
        scanf("%d",&list[i]);
    }*/

	readList();
	
    showList("List");

    bubbleSort();

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
		if(i < n-1) printf("%d, ",list[i]);
		else printf("%d]\n",list[i]);
	}
}

void bubbleSort() {
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
