#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1001];
    int i,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
    scanf("%[^\n]",s);
    for(i=0;i < strlen(s);i++)
    {
        if(s[i]== '0')
            zero++;
        else if(s[i]== '1')
            one++;
        else if(s[i]== '2')
            two++;
        else if(s[i]== '3')
            three++;
        else if(s[i]== '4')
            four++;
        else if(s[i]== '5')
            five++;
        else if(s[i]== '6')
            six++;
        else if(s[i]== '7')
            seven++;
        else if(s[i]== '8')
            eight++;
        else if(s[i]== '9')
            nine++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}
