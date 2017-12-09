/*
Scribble
Build 1.0
Barathy ;)
*/

#include<stdio.h>
#include<conio.h>
#include<string>
#include<fstream.h>
#include<process.h>

int cnt=1;//Count Variable used for response simulation
char e[20];
char h[20];
int q;
void menu()//Menu Function
{
void Write();
void Read();
void Listen();
void Mail();
void Config();

char mchoice;
cnt++;
if(cnt==-1)
{
cout<<"\n\t\t\t\t\t\t\t\t  Lovely! Next? ;)       \n";
system("ask7.vbs");
}
else if(cnt==-2)
{
cout<<"\n\t\t\t\t\t\t\t\t  Beautiful! What shall we proceed with?       \n";

system("ask3.vbs");
}
else if(cnt%2==0)
{
cout<<"\n\t\t\t\t\t\t\t\t  How can I be of any favour?        \n";
system("ask1.vbs");
}
else if(cnt%3==0)
{
cout<<"\n\t\t\t\t\t\t\t\t  Sounds like you are interested!     \n";
system("ask2.vbs");

}
else if(cnt%5==0)
{
cout<<"\n\t\t\t\t\t\t\t\t  What next?     \n";
system("ask4.vbs");
}
else
{
cout<<"\n\t\t\t\t\t\t\t\t    We've been through a long way!  \n";
system("ask5.vbs");
cout<<"\n\t\t\t\t\t\t\t\t    What's for now?     \n";
system("ask6.vbs");
}

cout<<"\n\t\t\t\t\t\t\t\t    Write a text     (W)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Read  my text    (R)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Listen to my text(L)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Mail my text     (M)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Configurations   (C)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Exit             (E)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    ";
cin>>mchoice;

switch(mchoice)
   {
	case 'W':
	case 'w':
	
	Write();
	break;
	
	case 'R':
	case 'r':
	
	Read();
	break;
	
	case 'E':
	case 'e':
	
    cout<<"\n\t\t\t\t\t\t\t\t      Thanks,Always.\n";
    system("thanks.vbs");
    exit(0);
	break;
	
	case 'L':
	case 'l':
	
	Listen();
    break;
    
   	case 'M':
	case 'm':
	
	Mail();
    break;
    
   	case 'C':
	case 'c':
	
	Config();
    break;
    
    default :
    menu();
    break;
   }

}

void Write()//Write function performs the writing and saving actions.
{
char savechar;//Each letter to be inputted.       
system("cls");

fstream filein;
string ifn,ffn;//ifn is InputFileName, ffn is FullFileName

int i=1;

fstream ifs;

while(i!=0)
{	
cout<<"File Name:";
cin>>ifn;

int x=0;
x=ifn.find(".txt");

if(x<0)
ffn=ifn+".txt";
else
;

fstream fin;
char e[10];

strcpy(e, ffn.c_str());//Converts multichar array to a string.

filein.open(e,ios::in|ios::out);
cout<<"\n  Input <~>+<Enter> to save your text\n";
cout<<"_______________________________________________________________________________________________________________________________________________________\n\n";
int status=0;
while(savechar!='~')
{
     cin.get(savechar);
     if(savechar!='~')//Checks for ~
    filein<<savechar;    
}
cout<<"\n_______________________________________________________________________________________________________________________________________________________\n";

cout<<"Saving...";
filein.close();

char cc;

cout<<"\n\nWould you want to explore more?(Y for Yes): ";
cin>>cc;
if(cc=='Y'||cc=='y')
menu();
else
 {
cout<<"\n\t\t\t\t\t\t\t\t      Thanks,Always.\n";
system("thanks.vbs");
exit(0);
 }
}
}

void Read()//Read function let's you view what's inside a text file.
{		
cout<<"\nWell..Look for your file\n";
string ifn,ffn;//ifn is InputFileName,ffn is FullFileName

system("dir /b/s *.txt  ");//Displays the text files present in the source directory

cout<<"\nIf you can't find your file here,place it in the source directory.\n";

int i=1;

while(i!=0)
{
cout<<"File Name:";
cin>>ifn;

int x=0;
x=ifn.find(".txt");

if(x<0)
ffn=ifn+".txt";
else
;
strcpy(e, ffn.c_str());//Converts a multichar array to a string

fstream fin(e,ios::in);

if(!fin)
{
i=2;
cout<<"Oops!..File not found.\nValid ";
}
else
i=0;
}

fstream ifs(e,ios::in);

string text;
getline(ifs,text, '\0');//Converts file to a string

system("cls");
cout<<"_______________________________________________________________________________________________________________________________________________________\n\n";
cout<<text;
cout<<"\n_______________________________________________________________________________________________________________________________________________________\n\n";

ifs.close();

char cc;
cout<<"\n\nWould you want to explore more?(Y for Yes): ";
cin>>cc;
if(cc=='Y'||cc=='y')
menu();
else
 {
cout<<"\n\t\t\t\t\t\t\t\t      Thanks,Always.\n";
system("thanks.vbs");
exit(0);
 }
}

void Listen()//Listen function reads the text to you
{
cout<<"\nWell..Look for your file\n";
string ifn,ffn;//ifn is InputFileName,ffn is FullFileName
system("dir /b/s *.txt  ");//Displays the text files present in the source directory
cout<<"\nIf you can't find your file here,place it in the source directory.\n";

int i=1;

while(i!=0)
{
cout<<"File Name:";
cin>>ifn;

int x=0;
x=ifn.find(".txt");

if(x<0)
ffn=ifn+".txt";
else
;
strcpy(e, ffn.c_str());//Converts a multichar array to a string
fstream fin(e,ios::in);
if(!fin)
{i=2;
cout<<"Oops!..File not found.\nValid ";}
else
i=0;
}
fstream ifsp(e,ios::in);
fstream speak;
string viewText;
getline(ifsp, viewText, '\0');//Converts file to a string
system("cls");
cout<<"_______________________________________________________________________________________________________________________________________________________\n\n";
cout<<viewText;
cout<<"\n_______________________________________________________________________________________________________________________________________________________\n\n";
ifsp.close();
fstream ifs(e,ios::in);
string addText,text;
 while(!ifs.eof())//Converts a File to a string
{ 
getline(ifs,addText);
text=text+" "+addText;
}

speak.open("kkk.txt",ios::in|ios::out);

//Script text for speech synthesis
string s="Dim A \n Set A= CreateObject(\"SAPI.SpVoice\")\nA.Rate=-3 \n A.Speak(\"";
string vo=s+text+"\")";

speak<<vo;

speak.close();

rename("kkk.txt","speech.vbs");
system("speech.vbs");//Runs script for speech
remove("speech.vbs");

ifs.close();

char cc;
cout<<"\n\nWould you want to explore more?(Y for Yes): ";
cin>>cc;
if(cc=='Y'||cc=='y')
menu();
else
 {
cout<<"\n\t\t\t\t\t\t\t\t      Thanks,Always.\n";
system("thanks.vbs");
exit(0);
 }
}

void MailS()//Mail function e-Mails the text file
{		
char text[50];

system("cls");
cout<<"\n\nWhat's your name?\n";
char name[20];string Rec;
Rec="barathykolappan@gmail.com";
cin>>name;
if(q==0)
cout<<"\n\nWhat do you have to tell?\n";
else
cout<<"We're Worried. What's the bug?\n";
gets(text);
string addText(text);
fstream Mt("MailText.txt",ios::in|ios::out);
//Script for Mail send functionality
string s="Set cdomsg = CreateObject(\"CDO.message\")\nWith cdomsg.Configuration.Fields \n.Item(\"http://schemas.microsoft.com/cdo/configuration/sendusing\") = 2 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpserver\") = \"smtp.gmail.com\" \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smptserverport\") = 587 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpauthenticate\") = 1 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpusessl\") = True \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpconnectiontimeout\") = 60 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/sendusername\") = \"ScribbleApp2016@gmail.com\" \n.Item(\"http://schemas.microsoft.com/cdo/configuration/sendpassword\") = \"#ScribbleApp2016\" \n.Update \nEnd With";
string d=s+"\nWith cdomsg \n.To = \""+Rec+"\"\n.From = \"ScribbleApp2016@gmail.com\""+" \n.Subject = \"You have a mail from "+name+"\" \n.TextBody = \""+" "+addText+"\" \n.Send \nEnd With";

Mt<<d;
Mt.close();
rename("MailText.txt","mail.vbs");
system("mail.vbs");
remove("mail.vbs");
cout<<"\nThanks!, Will see to it.";
system("ask8.vbs");
cnt=0;
char cc;
cout<<"\n\nWould you want to explore more?(Y for Yes): ";
cin>>cc;
if(cc=='Y'||cc=='y')
menu();
else
 {
 
cout<<"\n\t\t\t\t\t\t\t\t      Thanks,Always.\n";
	system("thanks.vbs");
exit(0);
 }
}

void Mail()//Mail function e-Mails the text file
{		
cout<<"\nWell..Look for your file\n";
string ifn,ffn;//ifn is InputFileName,ffn is FullFileName
system("dir /b/s *.txt  ");//Displays the text files present in the source directory
cout<<"\nIf you can't find your file here,place it in the source directory.\n";

int i=1;

while(i!=0)
 {
cout<<"File Name:";
cin>>ifn;

int x=0;
x=ifn.find(".txt");

if(x<0)
ffn=ifn+".txt";
else
;
strcpy(e, ffn.c_str());//Converts a multichar array to a string
fstream fin(e,ios::in);
if(!fin)
  {
i=2;
cout<<"Oops!..File not found.\nValid ";
  }
else
i=0;
 }
 
fstream ifs(e,ios::in);
string addText,text;

 while(!ifs.eof())//Converts a File to a string
 {
getline(ifs,addText);
text=text+" "+addText;
 }
 
system("cls");

cout<<"\nWhat's your name?\n";
char name[20];string Rec;
gets(name);	
cout<<"\nWho are you sending this to?\n";
cin>>Rec;
fstream Mt("MailText.txt",ios::in|ios::out);
//Script for Mail send functionality
string s="Set cdomsg = CreateObject(\"CDO.message\")\nWith cdomsg.Configuration.Fields \n.Item(\"http://schemas.microsoft.com/cdo/configuration/sendusing\") = 2 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpserver\") = \"smtp.gmail.com\" \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smptserverport\") = 587 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpauthenticate\") = 1 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpusessl\") = True \n.Item(\"http://schemas.microsoft.com/cdo/configuration/smtpconnectiontimeout\") = 60 \n.Item(\"http://schemas.microsoft.com/cdo/configuration/sendusername\") = \"ScribbleApp2016@gmail.com\" \n.Item(\"http://schemas.microsoft.com/cdo/configuration/sendpassword\") = \"#ScribbleApp2016\" \n.Update \nEnd With";
string d=s+"\nWith cdomsg \n.To = \""+Rec+"\"\n.From = \"ScribbleApp2016@gmail.com\""+" \n.Subject = \"You have a mail from "+name+"\" \n.TextBody = \""+" "+text+"\" \n.Send \nEnd With";

Mt<<d;
Mt.close();

rename("MailText.txt","mail.vbs");
system("mail.vbs");
remove("mail.vbs");
cout<<"\nMail Sent!";
ifs.close();

char cc;
cout<<"\n\nWould you want to explore more?(Y for Yes): ";
cin>>cc;
if(cc=='Y'||cc=='y')
menu();
else
 {
 
cout<<"\n\t\t\t\t\t\t\t\t      Thanks,Always.\n";
	system("thanks.vbs");
exit(0);
 }
}



void Config()
{
	cnt=0;
char configCh;
system("cls");
cout<<"\n\t\t\t\t\t\t\t\t    Configuration Settings                 \n";
cout<<"\n\t\t\t\t\t\t\t\t    Change Theme      (C)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Offer Suggestions (S)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    Report a Bug      (B)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    About             (A)                   \n";
cout<<"\n\t\t\t\t\t\t\t\t    ";
cin>>configCh;
switch(configCh)
   {
	case 'C':
	case 'c':
	{   char clr[20];
	system("cls");
        string chclr,chclr1,chclr2;
	agab:
	{
		
		cout<<"\n\nBack Color :";
		cin>>clr;
		if(strcmpi(clr,"black")==0)
		chclr1="0";
		else if(strcmpi(clr,"blue")==0)
		chclr1="1";
		else if(strcmpi(clr,"green")==0)
		{chclr1="A";
		cnt=1;}
		else if(strcmpi(clr,"aqua")==0)
		chclr1="3";
		else if(strcmpi(clr,"red")==0)
	{	chclr1="4";
		cnt=1;
	}
		else if((strcmpi(clr,"purple")==0)||(strcmpi(clr,"violet")==0))
		chclr1="5";
		else if((strcmpi(clr,"yellow")==0))
		chclr1="E";
		else if((strcmpi(clr,"white")==0))
		chclr1="f";
		else
	{	cout<<"Color not Recognized.\nTry Again.";
		goto agab;
	}
	}
		
	agaf:
	{
		cout<<"\n\nFore Color :";
		cin>>clr;
		if(strcmpi(clr,"black")==0)
		chclr2="0";
		else if(strcmpi(clr,"blue")==0)
		chclr2="1";
		else if(strcmpi(clr,"green")==0)
		chclr2= "A";
		else if(strcmpi(clr,"aqua")==0)
		{chclr2= "3";
		cnt=1;}
		else if(strcmpi(clr,"red")==0)
		chclr2= "4";
		else if((strcmpi(clr,"purple")==0)||(strcmpi(clr,"violet")==0))
		chclr2="5";
		else if(strcmpi(clr,"yellow")==0)
		{chclr2="E";
		cnt=1;}
		else if(strcmpi(clr,"white")==0)
		chclr2="f";
		else
		{cout<<"Color not Recognized.\nTry Again.";
		goto agaf;
		}
	}
		chclr="color "+chclr1+chclr2;
		char sysclr[20];
		strcpy(sysclr,chclr.c_str());
		system(sysclr);
		if(cnt==0)
		cnt=-2;
		else
		cnt=-3;
		
	}
	menu();
	break;
	
	case 'S':
	case 's':
    {
    	q=0;
	MailS();
	break;
   }
	
	case 'B':
	case 'b':
	{
    	q=1;
	MailS();
	break;
   }
	case 'A':
	case 'a':
	{
	cout<<"\n\n\nScribble is an Auto-attendant text editor. \n\nDeveloped for a formal reason, very. :P";
	cnt=4;
	menu();	
	}
    break;

    
    default :
    menu();
    break;
   }

}
	

void main()
{                                                                                                             
system("color f5");
system("title Scribble");
system("MODE 800");
cout<<"\t\t\t\t\t\t\t*******************************************\n";
cout<<"\t\t\t\t\t\t\t**                                       **\n";
cout<<"\t\t\t\t\t\t\t**  **** **** ***  * **** **** *   ****  **\n";
cout<<"\t\t\t\t\t\t\t**  *    *    *  *   *  * *  * *   *     **\n";
cout<<"\t\t\t\t\t\t\t**  **** *    ***  * ***  ***  *   **    **\n";
cout<<"\t\t\t\t\t\t\t**     * *    **   * *  * *  * *   *     **\n";
cout<<"\t\t\t\t\t\t\t**  **** **** * *  * **** **** *** ****  **\n";
cout<<"\t\t\t\t\t\t\t**                                       **\n";
cout<<"\t\t\t\t\t\t\t*******************************************\n";
system("welcome.vbs");
menu();
}	

