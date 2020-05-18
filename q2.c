#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{

    printf("Enter the String\n");
    char str[100];
    scanf("%[^\n]", str);

    char *arr[100];
    int i;
    for( i=0;i<100;i++)
    {
        arr[i] = (char *)malloc(100*sizeof(char));
    }

    char buffer[100]="";
    int k=0,j=0;
    for( i=0;i<strlen(str);i++)
    {
        if(str[i+1]=='\0'||str[i+1]=='.')
        {
            buffer[k]= str[i];
            buffer[k+1]='\0';
            int m;
            for( m=0;m<=k+1;m++)
            arr[j][m]=buffer[m];
            j++;
            i++;
            strcpy(buffer,"");
            k=0;
        }
        else
        buffer[k++]=str[i];
    }

    char newstr[100]= "";
    int p;
    for( p=j-1;p>=0;p--)
    {
        strcat(newstr, arr[p]);
        if(p==0)
        strcat(newstr, "\0");
        else
        strcat(newstr, ".");


    }

    printf("%s\n", newstr);



}
	
	
	

