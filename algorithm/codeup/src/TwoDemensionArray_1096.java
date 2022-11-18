import java.util.*;

public class TwoDemensionArray_1096{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] go = new int[20][20];
        for(int i=0;i<n; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            go[x-1][y-1]=1;
        }

        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                System.out.printf("%d", go[i][j]);
            }System.out.printf("\n");
        }
    }
}