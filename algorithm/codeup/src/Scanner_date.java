import java.util.*;

public class Scanner_date {
    public static void main(String[] args) {
        String date[];
        Scanner sc = new Scanner(System.in);
        date = sc.next().split("\\.");
        int y = Integer.parseInt(date[0]);
        int m = Integer.parseInt(date[1]);
        int d = Integer.parseInt(date[2]);
        System.out.printf("%04d.%02d.%02d", y, m, d);

    }

}