#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

string ari(string s)
{
int c=0;
int w=0;
int se=0;
float aria;
for(int i=0; i<strlen(s);i++)
{
if(isalnum(s[i])){
c++;
} 
if(isspace(s[i])) {
w++;
}
if(s[i]=='.'||s[i]=='?'||s[i]=='!')
{
se++;
}
}
aria=4.71*((float)c/(float)w)+0.5*((float)w/(float)se)-21.43;
int ari=((int)(round(aria)));
string r;
switch(ari){
     case 1:
        r="Kindergarten";
        break;
     case 2:
        r="First/Second Grade";
        break;
     case 3: 
        r="Third Grade";
        break; 
     case 4:
        r="Fourth Grade";
        break;   
     case 5:
        r="Fifth Grade";
        break;  
     case 6:
        r="Sixth Grade";
        break;
     case 7:
        r="Seventh Grade";
        break;
     case 8:
        r="Eigth Grade";
        break;
     case 9:
        r="Ninth Grade";
        break;
     case 10:
        r="Tenth Grade";
        break;
     case 11:
        r="Eleventh Grade";
        break;
     case 12:
        r="Twelfth Grade";
        break;
     case 13:
        r="College student";
        break;
     case 14:
        r="Professor";
        break;
   }
return r;
}
