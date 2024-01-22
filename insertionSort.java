public class insertionSort extends sortArray{
    static void swap(int[] ar, int i, int j) {
        int t;
        t = ar[i];
        ar[i] = ar[j];
        ar[j] = t;
    }
    public void sort(int[] list) {
        System.out.println("Inside InsertionSort");
        int n = list.length;
        int j;

        for(int i=0; i<n-1; i++) {
            j = i+1;
            while(j>0 && list[j] < list[j-1]){
                swap(list, j, j-1);
                j--;
            }
        }
        System.out.println("InsertionSort Ended.");
    }
}
