import java.util.*;

public class array_1095{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] student = new int[10001];
        int min=24;
        for(int i=1; i<=n; i++){
            int k = sc.nextInt();
            student[i] = k;
            if(student[i]<min){
                min = student[i];
            }
        }System.out.println(min);
    }
}