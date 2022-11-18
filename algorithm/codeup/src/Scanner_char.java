import java.util.Scanner;

public class Scanner_char {

        public static void main(String args[]){
            char x;
            Scanner sc = new Scanner(System.in);

            x=sc.next().charAt(0);      //char 형을 쓸때는 다른 타입과 달리 next().charAt(0)과 같이 써주어야한다.
            System.out.println(x);

    }
}
