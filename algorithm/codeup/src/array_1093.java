import java.util.*;

public class array_1093{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] student = new int[23];
        for(int i=0; i<n; i++){
            int num = sc.nextInt();
            student[num-1] = student[num-1]+1;
        }for(int j=0;j<23;j++){
            System.out.println(student[j]);
        }

    }
}