import java.util.*;

public class TwoDemensionArray_1099{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int[][] ant = new int[10][10];
        for(int x=0; x<10; x++){
            for(int y=0; y<10; y++)
                ant[x][y]=sc.nextInt();
        }

        int i=1;
        for(int j=1;j<ant.length;j++){
            if(ant[i][j]==2){
                ant[i][j]=9;
                break;
            } else if(ant[i][j]==1){
                i=i+1;
                j=j-2;
            }else{
                ant[i][j]=9;
            }
            if(i==9)
                break;
        }
        for(int x=0;x<10;x++){
            for (int y=0; y<10; y++)
                System.out.print(ant[x][y] + " ");
            System.out.println();
        }
    }
}