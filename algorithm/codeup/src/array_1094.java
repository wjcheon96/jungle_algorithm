import java.util.*;

public class array_1094{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n, i;
        n=sc.nextInt();
        int[] student = new int[10001];
        for(i=1; i<=n;i++){
            int k=sc.nextInt();
            student[i] = k;
        }for(int j=n; j>=1; j--){
            System.out.println(student[j]);
        }
    }
}