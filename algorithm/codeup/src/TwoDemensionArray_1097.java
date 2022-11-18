import java.util.*;

public class TwoDemensionArray_1097{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int[][] go = new int[19][19];
        int i, j, x,y;
        for(i=0; i<19;i++){
            for(j=0; j<19;j++){
                go[i][j] = sc.nextInt();
            }
        }

        int n = sc.nextInt();

        for(i=0; i<n; i++){
            x = sc.nextInt();
            y = sc.nextInt();

            for(j=0; j<19; j++){
                if(go[x-1][j]==0) go[x-1][j]++;
                else go[x-1][j]--;
            }
            for(j=0; j<19;j++){
                if(go[j][y-1]==0) go[j][y-1]++;
                else go[j][y-1]--;
            }

        }
        for(i=0; i<19; i++){
            for(j=0; j<19;j++){
                System.out.printf("%d ", go[i][j]);
            }System.out.printf("\n");
        }
    }
}
