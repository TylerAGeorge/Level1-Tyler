#include <stdio.h>

/*checks if the given string is a palindrome
 *returns 0 for false and 1 for true
 */
int isPalindrome(char *str)
{
  //get the length of the string
  int len=0;
  for(char*i = str; *(i) != NULL; i++)
  {
    len++;
  }


  // make pointers to the beginning of the string and the end
  char *beg, *end;
  beg = str;
  end = str + len - 1;

  // compare both ends of the string to see what is good.
  while(beg < end) 
  {
    if(*beg != *end)
    {
      return 0;
    }
    beg++;
    end--;
  }

  return 1;
}


int main()
{
  char str[64];

  printf("Enter the string you wish to test for palindronimity\n(Must be shorter that 64 characters)\n");
  scanf("%64s", str);
  if (isPalindrome(str))
  {
    printf("%s is a palindrome\n", str);
  } else{
    printf("%s is not a palindrome\n", str);
  }
  return 0;
}

