#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
void main()
{
textmode(2);
textcolor(BLACK);
textbackground(WHITE);
clrscr();
int nc,a,b,c,d;
char fn[100],ln[100],pnm[15];
cprintf("ENTER THE NUMERICAL VALUE OF NUMBER OF CONTACTS YOU WANT TO SAVE");
gotoxy(1,2);
cin>>nc;
gotoxy(1,7);
textcolor(RED);
cprintf("     FIRST");
gotoxy(1,8);
cprintf("      NAME");
textcolor(BLACK);
gotoxy(15,7);
cprintf("|");
gotoxy(15,8);
cprintf("|");
gotoxy(75,7);
cprintf("|");
gotoxy(75,8);
cprintf("|");
gotoxy(16,6);
for(a=0;a<=58;++a)
{
textcolor(BLACK);
cprintf("_");
}
gotoxy(16,8);
for(a=0;a<=58;++a)
{
textcolor(BLACK);
cprintf("_");
}
gotoxy(1,13);
textcolor(GREEN);
cprintf("      LAST");
gotoxy(1,14);
cprintf("      NAME");
textcolor(BLACK);
gotoxy(15,13);
cprintf("|");
gotoxy(15,14);
cprintf("|");
gotoxy(75,13);
cprintf("|");
gotoxy(75,14);
cprintf("|");
gotoxy(16,12);
for(a=0;a<=58;++a)
{
textcolor(BLACK);
cprintf("_");
}
gotoxy(16,14);
for(a=0;a<=58;++a)
{
textcolor(BLACK);
cprintf("_");
}
gotoxy(1,19);
textcolor(BLUE);
cprintf("     PHONE");
gotoxy(1,20);
cprintf("  [MOBILE]");
textcolor(BLACK);
gotoxy(15,19);
cprintf("|");
gotoxy(15,20);
cprintf("|");
gotoxy(75,19);
cprintf("|");
gotoxy(75,20);
cprintf("|");
gotoxy(16,18);
for(a=0;a<=58;++a)
{
textcolor(BLACK);
cprintf("_");
}
gotoxy(16,20);
for(a=0;a<=58;++a)
{
textcolor(BLACK);
cprintf("_");
}
ofstream cnts ("CONTACTS.vcf");
for(b=0;b<nc;++b)
{
gotoxy(16,7);
gets(fn);
gotoxy(16,11);
cprintf("PRESS ANY KEY TO GO TO NEXT FEILD");
getch();
gotoxy(16,13);
gets(ln);
gotoxy(16,17);
cprintf("PRESS ANY KEY TO GO TO NEXT FEILD");
getch();
gotoxy(16,19);
gets(pnm);
cnts<<"BEGIN:VCARD"<<"\n"<<"VERSION:2.1"<<"\n"<<"N:"<<ln<<";"<<fn<<";;;"<<"\n"<<"FN:"<<fn<<"\n"<<"TEL;CELL;PREF:"<<pnm<<"\n"<<"END:VCARD"<<"\n";
gotoxy(16,7);
cout<<"                                                           ";
gotoxy(16,13);
cout<<"                                                           ";
gotoxy(16,19);
cout<<"                                                           ";
}
gotoxy(7,25);
cprintf("YOUR CONTACTS IS SAVED BY THE NAME CONTACTS.VCF.PRESS ENTER TO EXIT");
getch();
}
