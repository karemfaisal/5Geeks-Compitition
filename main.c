/* Find How many times a word appears in another sentence */
/* Notice : 5Geeks didn't carried out the promise of announcing the winners , They are liars */ 

#include<stdio.h>
#include<string.h>

main()
{
    char string [20] , sentence[2000]; 
    int x ,i ,j , result , l ,t;
    gets(string);
    gets(sentence);
    x = strlen(string);
    i=0;
    l=0;

    result = 0;
    for (i=0;sentence[i]!='\0';i++) /* check every character in the sentence */
    {
        if ( sentence [i] == string[0])   /* if a character in the sentence mathcs the first letter in the word */
        {
             l=0; /* reset l */
             t=0;  /* reset t */
            for (j=i ; j<(i+x) ; j++) /* check if the all word in the sentence sequentially */
            {

                if ( sentence[j] == string[t])
                {
                    l++; /* how many characters are matched in a row ,if l=length of the word then we have the first duplicate*/
                }
                t++;  /* to check the next character */
            }

            if ( l == x)   /* if l = length of the word then we have a Duplicate */
            {
                result++;  /* Number of Duplicates */
                i+=x-1; /* to jump to the character after the match in the Main loop not to the next character */
            }
        }
    }

printf("The Result is %d",result);  /* Print The Result */

}
