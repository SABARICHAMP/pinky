#include <stdio.h>
#include<string.h>
int main()
{
	char str[20];
    int n,i;
    printf("enter something:\n");
    scanf("%[^\t\n]s",str);
    n=strlen(str);
    str[0]=str[0]-32;
    for(i=0;i<n;i++)
    {
      if(str[i]==' ')
      {
       str[i+1]=str[i+1]-32;
      }
    }
    printf("%s",str);

	return 0;
}
