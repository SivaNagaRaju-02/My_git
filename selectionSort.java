public class selectionSort extends sortArray{
    static void swap(int[] ar, int i, int j) {
        int t;
        t = ar[i];
        ar[i] = ar[j];
        ar[j] = t;
    }
    public void sort(int[] list) {
        System.out.println("Inside SelectionSort");
        int n = list.length;
        int x,t;

        for(int i=0; i<n-1; i++){
            x = list[i];
            t = i;
            for(int j=i+1; j<n; j++){
                if(list[j] < x) {
                    x = list[j];
                    t = j;
                }
            }
            if(t != i) swap(list, i, t);
        }
        System.out.println("SelectionSort Ended.\n");
    }
}
