public class bubbleSort extends sortArray{
    static void swap(int[] ar, int i, int j) {
        int t;
        t = ar[i];
        ar[i] = ar[j];
        ar[j] = t;
    }
    public void sort(int[] list) {
        System.out.println("Inside BubbleSort");
        int n = list.length;
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<n-i-1; j++) {
                if(list[j] > list[j+1]) swap(list, j, j+1);
            }
        }
        System.out.println("BubbleSort Ended.");
    }
}
