import java.util.*;

public class soundData_1085{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long h = sc.nextInt();
        long b = sc.nextInt();
        long c = sc.nextInt();
        long s = sc.nextInt();
        float space = (float)(h*b*c*s)/8388608;
        System.out.printf("%.1f", space);

    }
}
