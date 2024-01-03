import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Random;

public class ArrayMethods {
    public static void showArray(int[] x, String s) {
        System.out.print(s+": [");

        for(int i: x) {
            System.out.print(i+", ");
        }

        System.out.println("\b\b]");
    }

    public static int read_int(String str)throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(ir);

        System.out.print(str+": ");
        int x = Integer.parseInt(br.readLine());

        br.close();

        return x;
    }

    public static int[] readArray()throws IOException {
        Random rand = new Random();
        int n = read_int("Enter Size of the List");
        int[] x = new int[n];

        for(int i=0; i<n; i++) {
            x[i] = rand.nextInt(100);
        }

        return x;
    }
}
