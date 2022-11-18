import java.util.*;

public class commonMultiple_1092{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int day = 1;
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        while(day%a != 0 | day%b!=0 | day%c!=0){
            day++;}
        System.out.println(day);
    }
}
