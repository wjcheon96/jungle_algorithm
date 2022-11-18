import java.util.*;

public class parsing_num{
    public static void main(String args[]){
        String num[];
        Scanner sc = new Scanner(System.in);
        num = sc.next().split("");
        int a;

        for(int i = 0 ; i<num.length; i++){
            a = Integer.parseInt(num[i])*10000*1/(int)(Math.pow(10,i));
            System.out.println("[" + a + "]");
        }

    }
}