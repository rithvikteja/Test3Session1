#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter a string\n");
  fgets(a,50,stdin);
}
int count_words(char *string)
{
  int count=0;
  for(int i=0;string[i]!='\0';i++)
    {
      if(string[i]==' ')
      {
count++;
  }
      }
return count;
}
void output(char *string,int no_words)
{
  printf("no of words=%d",no_words+1);
}
int main()
{
  char a[20];
  input_string(a);
  int no_words;
  no_words=count_words(a);
  output(a,no_words);
  return 0;
  }