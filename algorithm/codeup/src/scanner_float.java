import java.util.Scanner;

public class scanner_float {
    public static void main(String[] args) {
            float x;
            Scanner sc = new Scanner(System.in);

            x=sc.nextFloat();
            System.out.printf("%f", x);     //scanner를 이용해서 float를 출력시, %f를 사용하기에, 자바에선 잘 쓰지 않으나 C언어에서 쓰는 방식으로 printf를 쓴다
    }
}
