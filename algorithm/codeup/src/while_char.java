import java.util.*;
public class while_char{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        char a = 'a';
        char x = sc.next().charAt(0);
        do{
            System.out.println(a);
            a = (char) (a + 1);
        }while( a <= x );
    }
}