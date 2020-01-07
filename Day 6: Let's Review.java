import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        for(int i=0; i<t ;i++)
        {
            String a=sc.nextLine();
             char[] charArray = a.toCharArray();
             for(int j=0;j<charArray.length;j=j+2)
             {
                 System.out.print(charArray[j]);
             }
                System.out.print(" ");
             for(int j=1;j<charArray.length;j=j+2)
            {
                 System.out.print(charArray[j]);
            }
           System.out.println();
        }
        
    }
}

