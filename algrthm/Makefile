CFLAGS = -Wno-implicit-function-declaration

all: sort

sort: sortDemo.o bubbleSort.o selectionSort.o insertionSort.o mergeSort.o quickSort.o
	gcc $(CFLAGS) sortDemo.o bubbleSort.o selectionSort.o insertionSort.o mergeSort.o quickSort.o -o sort

sortDemo.o: sortDemo.c
	gcc $(CFLAGS) -c sortDemo.c

bubbleSort.o: bubbleSort.c
	gcc $(CFLAGS) -c bubbleSort.c

selectionSort.o: selectionSort.c
	gcc $(CFLAGS) -c selectionSort.c

insertionSort.o: insertionSort.c
	gcc $(CFLAGS) -c insertionSort.c

mergeSort.o: mergeSort.c
	gcc $(CFLAGS) -c mergeSort.c

quickSort.o: quickSort.c
	gcc $(CFLAGS) -c quickSort.c

clean:
	@echo "DEL ALL Non-SRC files"
	del sortDemo.o bubbleSort.o selectionSort.o insertionSort.o mergeSort.o quickSort.o sort.exe
