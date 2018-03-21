#include <stdio.h>
#include<string.h>
int main()
{
  char a[10],l,i;
  printf("Enter the string \n");
  scanf("%s",a);
  l=strlen(a);
  printf("the string after removing vowels are \n");
  for(i=l-1;i>=0;i--)
  {
      if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
      printf("%c \n",a[i]);
  }
  return 0;
}
