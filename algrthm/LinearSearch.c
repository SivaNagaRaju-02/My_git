#include "LinearSearch.h"
struct listof linearsearch(int list[20], int n, int k) {
    int i=0, j=0;
    struct listof l1;
    l1.x = 0;
    while(i<n) {
        if(list[i] == k) {
            l1.indices[j] = i;
            j++;
        }
        i++;
    }
    l1.x = j;
    return l1;
}