#include <stdio.h>
int n, list[20];

void showList();
void bubbleSort();

void main() {
    int i;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        printf("Enter Element-%d: ",i+1);
        scanf("%d",&list[i]);
    }

    printf("Origional List\n");
    showList();

    bubbleSort();
    printf("Sorted List\n");
    showList();
}

void showList() {
    int i;
	printf("Array = [");
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