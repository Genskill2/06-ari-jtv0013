#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>

string ari(string s)
{
int c=0;
int w=0;
int s=0;
float aria;
for(int i=0; i<strlen(s);i++)
{
if(isalnum(s[i]))){
c++;
} 
if(isspace(s[i])) {
w++;
}
if(s[i]=='.'||s[i]=='?'||s[i]=='!')
{
s++;
}
}
aria=4.71*((float)c/(float)w)+0.5*((float)w/(float)s)-21.43;
int ari=((int)(round(aria)));
string r;
switch(ari);
{
case 1:	
{
r= "Kindergarten";
break;
}
case 2:	
{
r= "First/Second Grade";
break;
}
case 3:	
{
r= "Third Grade";
break;
}
case 4:	
{	
r= "Fourth Grade";
break;
}
case 5:
{

r= "Fifth Grade";
break;
}
case 6:	
{
r= "Sixth Grade";
break;
}
case 7:	
{
r= "Seventh Grade";

break;
}
case 8:	
{
r= "Eighth Grade";
break;
}
case 9:	
{
r= "Ninth Grade";
break;
}
case 10:	
{
r= "Tenth Grade";
break;
}
case 11:	
{
r= "Eleventh Grade";
break;
}
case 12:	
{
r= "Twelfth grade";
break;
}
case 13:	
{
r= "College student";
break;
}	
case 14:	
{
r= "Professor";
break;
}
default : 
{
r= "Extraordinaire";
break;
}
}
	
return r;
}
