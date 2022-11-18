import java.util.*;

public class wordSplit{
    public static void main(String args[]){
        String word[];
        Scanner sc = new Scanner(System.in);
        word = sc.next().split("");

        for(int i=0;i<word.length; i++){
            System.out.println("\'" + word[i] + "\'");
        }
    }
}