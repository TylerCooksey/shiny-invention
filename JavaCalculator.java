// Author: Tyler Cooksey
// Date Created: 11/03/2014
// Program Name: Calculator

package javacalculator;
import java.util.Scanner;

public class JavaCalculator {

    static int op = 0;
    static Scanner scan = new Scanner (System.in);
    static double num1;
    static double num2;
    static double ans;
    static boolean temp = true;
    
    public static void main(String[] args) {
        while (temp) {
            do {
                System.out.println("'1' For Addition\n'2' For Subtraction\n'3' For Multiplication\n'4' For Division\n'5' For Exit Calculator'");
                op = scan.nextInt();
            }
            while (op < 1 && op > 5);
            if (op == 1) {
                System.out.println ("Input first number: ");
                num1 = scan.nextDouble();
                System.out.println ("Input second number: ");
                num2 = scan.nextDouble();
                ans = num1 + num2;
                System.out.println (ans);
            }
            if (op == 2) {
                System.out.println ("Input first number: ");
                num1 = scan.nextDouble();
                System.out.println ("Input second number: ");
                num2 = scan.nextDouble();
                ans = num1 - num2;
                System.out.println (ans);
            }
            if (op == 3) {
                System.out.println ("Input first number: ");
                num1 = scan.nextDouble();
                System.out.println ("Input second number: ");
                num2 = scan.nextDouble();
                ans = num1 * num2;
                System.out.println (ans);
            }  
            if (op == 4) {
                System.out.println ("Input first number: ");
                num1 = scan.nextDouble();
                System.out.println ("Input second number: ");
                num2 = scan.nextDouble();
                ans = num1 / num2;
                System.out.println (ans);
            }
            if (op == 5) {
                temp = false;
            }
        }
    }
}
