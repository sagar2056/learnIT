#include <stdio.h>
 
int main()
{
 
    char str[100];
    int i,j,len,len1;
 
    
    printf("Enter any string: ");
    gets(str);
     
    
    for(len=0; str[len]!='\0'; len++);
 
    
    len1=0;
 
   
    for(i=0; i<(len-len1);)
    {
        if(str[i]==str[i+1])
        {
            
            for(j=i;j<(len-len1);j++)
                str[j]=str[j+1];
            len1++;
        }
        else
        {
            i++;
        }
    }
 
    printf("String after removing characaters: %s\n",str);
 
    return 0;
}