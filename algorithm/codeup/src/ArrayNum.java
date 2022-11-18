import java.util.*;

public class ArrayNum{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int[] num = new int[3];
        for( int i=0; i<num.length ; i++){
            num[i] = sc.nextInt();

            System.out.println((num[i]%2)==0 ? "even": "odd" );

        }

    }
}