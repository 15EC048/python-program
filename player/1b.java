import java.io.*;
import java.util.*;
class renumber
{
   public static void main(String args[])
   {
     int n=123,r=0,d;
     while(n!=0)
     {
         d=n%10;
         r=r*10+d;
         n=n/10
     }
      System.out.println("Reverse of entered num is:"+n);
   }
}
