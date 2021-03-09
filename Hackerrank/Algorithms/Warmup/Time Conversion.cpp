//https://www.hackerrank.com/challenges/time-conversion/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int i;
    char ch[10];

    scanf("%s",ch);
    if(ch[8]=='P'&&ch[9]=='M')
        {
            if(ch[1]=='1'&&ch[0]=='0'){printf("13");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='2'&&ch[0]=='0'){printf("14");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
        else if(ch[1]=='3'){printf("15");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='4'){printf("16");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='5'){printf("17");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='6'){printf("18");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='7'){printf("19");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='8'){printf("20");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[1]=='9'){printf("21");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[0]=='0'&&ch[1]=='1'){printf("22");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
            else if(ch[0]=='1'&&ch[1]=='1'){printf("23");for(i=2;i<8;i++)
        printf("%c",ch[i]);}
           else 
            {
            for(i=0;i<8;i++)printf("%c",ch[i]);
        }
        
        }
    else if(ch[8]=='A'&&ch[9]=='M')
        {
                if(ch[1]=='2'&&ch[0]=='1')
                {
                    printf("00");
                    for(i=2;i<8;i++)
                         printf("%c",ch[i]);
                }
        else 
            {
            for(i=0;i<8;i++)printf("%c",ch[i]);
        }
        
    }
    return 0;
}
