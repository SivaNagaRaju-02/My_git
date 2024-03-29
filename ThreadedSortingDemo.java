import java.io.IOException;

public class ThreadedSortingDemo extends ArrayMethods{
    public static void main(String args[]) throws IOException {
        System.out.println("In the Main Thread...");

        int[] list = readArray();
        //showArray(list, "List");
        System.out.println("\n");

        //int[] x1 = list;
        //int[] x2 = list;
        int[] x3 = list;
        int[] x4 = list;
        int[] x5 = list;

        //bubbleSortThrd t1 = bubbleSortThrd.bubbleSort(x1, "B#Sort");
        //selectionSortThrd t2 = selectionSortThrd.selectionSort(x2, "S#Sort");
        quickSortThrd t5 = quickSortThrd.quickSort(x5, "Q#Sort");
        insertionSortThrd t3 = insertionSortThrd.insertionSort(x3, "I#Sort");
        mergeSortThrd t4 = mergeSortThrd.mergeSort(x4, "M#Sort");

        try {
            //t1.thrd.join();
            //System.out.println(t1.thrd.getName()+" is joined");
            //t2.thrd.join();
            //System.out.println(t2.thrd.getName()+" is joined");
            t3.thrd.join();
            System.out.println(t3.thrd.getName()+" is joined");
            t4.thrd.join();
            System.out.println(t4.thrd.getName()+" is joined");
            t5.thrd.join();
            System.out.println(t5.thrd.getName()+" is joined");
        }catch (InterruptedException exe) {
            System.out.println("Process interrupted with exe:\n"+exe);
        }

        //showArray(x1, t1.thrd.getName());
        //showArray(x2, t2.thrd.getName());
        //showArray(x3, t3.thrd.getName());
    }
}
