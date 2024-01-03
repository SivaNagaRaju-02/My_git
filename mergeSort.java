public class mergeSort extends sortArray{
    public void sort(int[] list) {
        int p,r;
        p = 0;
        r = list.length;

        devide(list, p, r-1);
    }

    private static void devide(int[] x, int p, int r) {
        int q = (p + r) / 2;
        if(r > q) {
            devide(x, p, q);
            devide(x, q+1, r);
            merge(x, p, q, r);
        }
    }

    private static void merge(int[] x, int p, int q, int r) {
        int m, n;
        m = q-p+1;
        n = r-q;

        int[] L,R;
        L = new int[m];
        R = new int[n];

        for(int i=0; i<m; i++) {
            L[i] = x[p+i];
        }

        for(int i=0; i<n; i++) {
            R[i] = x[q+1+i];
        }

        int i=0, j=0, k=p;
        while(i<m && j<n) {
            if(L[i] <= R[j]){
                x[k] = L[i];
                i++;
            }else{
                x[k] = R[j];
                j++;
            }
            k++;
        }

        while(i<m) {
            x[k] = L[i];
            i++;
            k++;
        }

        while(j<n) {
            x[k] = R[j];
            j++;
            k++;
        }
    }
}
