#include<stdio.h>
int main()
{
    int n,count=0,a[200];
    printf("Enter Number in Decimal Form\n");
    scanf("%d",&n);
    printf("Number in decimal form is %d\n",n);
    int b=n;// for hexa 10=a
    int c=n;    
    while(c!=0)
    {
        c=c/2;
        count++;
    }
    printf("Number in binary form is ");    
    for(int i=count-1;i>=0;i--)
    {
        a[i]=b%2;
        b=b/2;
    }
    for(int i=0;i<count;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    // for octal
    printf("Number in octal form is ");
    int d=n,m=0;
    int e=n,z[100];
    if(d<=8)
    {
        printf("\n octal number is %d",d);
    }
    else
    {
        while(d!=0)
        {
            d=d/8;
            m++;
        }
        
        
        for(int i=m-1;i>=0;i--)
        {
            z[i]=e%8;
            
            e=e/8;
            if(z[i]>8)
            {
                z[i]=z[i]+2;
            }
            else
                z[i]=z[i];  
        }
        for(int i=0;i<m;i++)
        {
          printf("%d",z[i]);
        } 
    }
        // for hexa
    printf("\nNumber in hexa decimal form ");
    int f=n,flag=0 ,temp;
    char x[100];
    if(n<16)
    {
        if(n<10)
        {
            printf("\nHexa number is %d",n);
        }
        else
        {
           printf("%c",n+55);
        }    
    }
    else
    {
        while(n!=0)
        {
            n=n/16;
            flag++;
        }
        
        
        for(int i=flag-1;i>=0;i--)
        {
            
            temp=f%16;
            
            f=f/16;
            if(temp>9)
            {
                x[i]=temp+55;          
            }    
            else
            {
                x[i]=temp+48;
            }        
        }
        for(int i=0;i<flag;i++)
        {
          printf("%c",x[i]);
        }  
    }  
    
}