#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void capcha();
int main()
{
  
  capcha();

  
}
void capcha()
{
  int x ,y;
  char a[100],b[100],m;
  x=rand();
  y=rand();
  x=x+y;
  int i=0;
  while(x>0)
  {
    
    m=x%10;
    if(i%3==0)
    {
      a[i]=m+49;
    }
    else if(i%2==0)
     {
      a[i]=m+97;
     }
    else
    {
      a[i]=m+65;
    }
    x=x/10;
    i++;
    
  }
  int n;
  printf("\n%s\n",a);
  printf("\nIF YOU WANT ANOTHER CAPCHA PLEASE ENTER 1.\nELSE PRESS 0.\n");
  scanf("%d",&n);
  if(n==1)
    {
      capcha();
    }
  printf("\n%s",a);
  printf("\n ENTER THE ABOVE CAPCHA\n");
  scanf("%s",b);
    
    if(strcmp(b,a))
    {
       printf("\nWRONG\n");
    }
    else
    printf( "CORRECT");

    
  

}