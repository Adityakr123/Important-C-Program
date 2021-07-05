/**
 * W.A.P. to input basic salary and print basic, ta, da, pf net salary in proper format:
 * Basic    <=7200          >7200
 * TA       30% of basic    20% of basic
 * DA       25% of basic    15% of basic
 * PF       14.25% of basic 12.5% of basic
 * Net=basic+TA+DA-PF
 */
 import java.util.*;
 public class Basic_Salary {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int b;
        double t,d,p,net;
        System.out.println("Enter Basic Salary : ");
        b=sc.nextInt();
        if(b<=7200)
        {
            t=0.3*b;
            d=0.25*b;
            p=0.1425*b;
        }
        else
        {
            t=0.2*b;
            d=0.15*b;
            p=0.125*b;
        }
        net=b+t+d-p;
        System.out.println("Basic\t\tTA\t\tDA\t\tPF\t\tNet Salary");
        System.out.println(b+"\t\t"+t+"\t\t"+d+"\t\t"+p+"\t\t"+net);
    }
}