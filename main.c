/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() 
{

 char *B=(char *)malloc(10240 * sizeof(char));
 int t,i,count=0,x=0,l,r,total;
 
 scanf("%d",&t);
 
 int temp[26];
 
 while(t--)
 {
   for(i=0;i<26;i++)
    temp[i]=0;
 
    scanf("%s", B);
 
    count=0,x=0;i=0;
 
    while(B[i]!='\0')
    {
    i++; 
    }
    count=i-1;
    l=0;
    r=i/2;
 
    if(i%2==1)
      printf("NO\n");
    else
    {
 
     while(l<r)
      {
        temp[B[l]-97]=temp[B[l]-97]+1;
        l++;
 
     }
     
    while(B[r]!='\0')
      {
      if(temp[B[r]-97]!=0)
        {
          temp[B[r]-97]=temp[B[r]-97]-1;
        }
      r++;
      }
      
  i=0;total=0;
  while(i<26)
    {
    total=temp[i]+total;
    i++;
    }
    
 //printf("%d\n",total);
 printf("YES");
 i=0;
 
  }
 }
}
