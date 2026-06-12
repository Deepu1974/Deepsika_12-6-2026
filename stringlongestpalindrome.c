#include <stdio.h>
#include <string.h>
/*
//Naive approach//
void longestPalindrome(char *s,int n)
{
    int max=1,start=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {int low=i,high=j,l=0;
             while (low<high)
            {
            if (s[low]!=s[high])
            break;
            else 
	     	{
			 l = j - i + 1;
		     }
            low++;
            high--;
             if (l > max)
                {
                    max = l;
                    start = i;
                }
        }
               
            }
    }
    printf("Longest palindrome: ");

    for (int i=start;i<start+max;i++)
    {
        printf("%c",s[i]);
    }
    printf("\nLength=%d\n", max);
}
  

int main()
{
     char s[100];
    printf("Enter main string: ");
    scanf("%s", s);
     int n=strlen(s);
     if(s == NULL)
{
    printf("Invalid\n");
    return 0;
}
    if (n==0)
    {
	printf("Invalid input");  
	return 0;
    }
    longestPalindrome(s,n);
    return 0;
}

*/

//Expansion from center approach//
int longestpalindrome(char *s,int n)
{   int c,max,start=0;
    
	for (int i=0;i<n;i++)
{
	for(int j=0;j<=1;j++)
	{
	int left=i;
	int right=i+j;
	while(left>=0&&right<n)
	if(s[left]==s[right])
	{   c=right-left+1;
	if(c>max)
	  {max=c;
	    start= i-(c-1)/2;}
		left--;
		right++;
	}
	else
	break;
}
}
for (int i=start;i<start+max;i++)
    {
        printf("%c",s[i]);
    }
	return max;
}

int main()
{
    char s[100];
    printf("Enter main string: ");
    scanf("%s", s);

    int n=strlen(s);

    if (n==0)
    {
	printf("Invalid input");  
	return 0;
    }
    printf("%d",longestpalindrome(s,n));
    return 0;
}
