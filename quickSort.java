public class quickSort extends sortArray{
    static void swap(int[] ar, int i, int j) {
        int t;
        t = ar[i];
        ar[i] = ar[j];
        ar[j] = t;
    }
    
    public void sort(int[] list) {
        sortList(list, 0, list.length-1);
    }

    private static void partition(int[] list, int p, int q, int r) {
        sortList(list, p, q-1);
        sortList(list, q+1, r);
    }

    private static void sortList(int[] list, int p, int r) {
        if(r > p) {
            int n = r+1;
            int x = list[r];

            int i,q = p;
            for(i=p; i<n; i++) {
                if(i<n-1 && list[i] < x) {
                    swap(list,i,q);
                    q++;
                }
                if(i==(n-1)) {
                    swap(list, i, q);
                }
            }
            partition(list,p,q,r);
        }
    }
}
