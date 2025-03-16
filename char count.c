#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100],dest[100];
     char patt[6]={'0','1','1','1','1','1'};
   
    
     int i=0,j;
     int k=0,count=0;
     printf("Enter bits:");
     scanf("%s",str);
     strcpy(dest,"01111110");
     j=8;
    for(i=0;i<strlen(str);i++)
    {
      if(str[i]==patt[k])
      {
          count++;
          k++;
       }
    else
    
        count=0;
    dest[j++]=str[i];

    if(count==6)
    {
        dest[j++]='0';
        count=0;
    }
}
     dest[j] ='\0'; 
     j++;
 strcat(dest,"01111110");  
   printf("%s",dest);
return 0;
}
