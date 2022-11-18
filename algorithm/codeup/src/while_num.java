import java.util.*;

public class while_num{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n =1;
        while ( n != 0 ){
            n = sc.nextInt();
            if(n != 0) {
                System.out.println(n);
            }
        }
    }
}