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
    for (i=0;sentence[i]!='\0';i++)
    {
        if ( sentence [i] == string[0])
        {
             l=0;
             t=0;
            for (j=i ; j<(i+x) ; j++)
            {

                if ( sentence[j] == string[t])
                {
                    l++;
                }
                t++;
            }

            if ( l == x)
            {
                result++;
                i+=x-1;

            }

        }

    }

printf("The Result is %d",result);

}
