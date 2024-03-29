class bubbleSortThrd implements Runnable {
    Thread thrd;
    static sortArray srt;
    static int[] list;

    bubbleSortThrd(String name) {
        thrd = new Thread(this, name);
    }

    public static bubbleSortThrd bubbleSort(int[] x, String name) {
        srt = new bubbleSort();
        list = x;
        bubbleSortThrd newThread = new bubbleSortThrd(name);
        newThread.thrd.start();
        return newThread;
    }

    public void run() {
        srt.sort(list);
    }
}

class selectionSortThrd implements Runnable {
    Thread thrd;
    static sortArray srt;
    static int[] list;

    selectionSortThrd(String name) {
        thrd = new Thread(this, name);
    }

    public static selectionSortThrd selectionSort(int[] x, String name) {
        srt = new selectionSort();
        list = x;
        selectionSortThrd newThread = new selectionSortThrd(name);
        newThread.thrd.start();
        return newThread;
    }

    public void run() {
        srt.sort(list);
    }
}

class insertionSortThrd implements Runnable {
    Thread thrd;
    static sortArray srt;
    static int[] list;

    insertionSortThrd(String name) {
        thrd = new Thread(this, name);
    }

    public static insertionSortThrd insertionSort(int[] x, String name) {
        srt = new insertionSort();
        list = x;
        insertionSortThrd newThread = new insertionSortThrd(name);
        newThread.thrd.start();
        return newThread;
    }

    public void run() {
        srt.sort(list);
    }
}

class quickSortThrd implements Runnable {
    Thread thrd;
    static sortArray srt;
    static int[] list;

    quickSortThrd(String name) {
        thrd = new Thread(this, name);
    }

    public static quickSortThrd quickSort(int[] x, String name) {
        srt = new quickSort();
        list = x;
        quickSortThrd newThread = new quickSortThrd(name);
        newThread.thrd.start();
        return newThread;
    }

    public void run() {
        srt.sort(list);
    }
}

class mergeSortThrd implements Runnable {
    Thread thrd;
    static sortArray srt;
    static int[] list;

    mergeSortThrd(String name) {
        thrd = new Thread(this, name);
    }

    public static mergeSortThrd mergeSort(int[] x, String name) {
        srt = new mergeSort();
        list = x;
        mergeSortThrd newThread = new mergeSortThrd(name);
        newThread.thrd.start();
        return newThread;
    }

    public void run() {
        srt.sort(list);
    }
}
