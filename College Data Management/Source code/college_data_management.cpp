#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct student
{
 string fname;
 string lname;
 string Registration;
 string classes;
 string addrs;
 string cel_no; 
 string blod_grp; 
 string session;
}studentData[50];

struct teacher
{
 string fst_name;
 string lst_name;
 string qualification;
 string exp;
 string pay;
 string subj;
 string lec;
 string addrs;
 string cel_no; 
 string blod_grp; 
}tech[50];

int main()
{
	int login();
	login();

int i=0,j,k=0;
char choice;
string find;
string srch;

while(1)
{ 
 system("cls");
 system("color 02");
 cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t\t\t\t\t    COLLEGE DATA MANAGEMENT";
 cout<<"\n\n\t\t\t\t\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t::SELECT YOUR CHOICE FIRST::\n\n\n";
 cout<<"\t\t\t\t\t\t\t\t1. STUDENT INFORMATION"<<endl;
 cout<<"\t\t\t\t\t\t\t\t2. TEACHER INFORMATION"<<endl;
 cout<<"\t\t\t\t\t\t\t\t3. EXIT"<<endl;
  cout<<"\n\n\t\t\t\t\t\t\t\tEnter your choice: ";
 cin>>choice;

system("cls");

switch(choice)
{
 
case '1': 
{ 
while(1)
{ 
system("cls");
system("color 06");
cout<<"\n\n\n\t\t\t\t\t\t\t\t  STUDENT'S INFORMATION AND BIODATA SECTION\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t1. CREATE NEW ENTRY\n";
cout<<"\t\t\t\t\t\t\t2. FIND AND DISPLAY DETAILS\n";
cout<<"\t\t\t\t\t\t\t3. BACK\n";
cout<<"\n\n\t\t\t\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)

{
case '1':
{  
 ofstream f1("student.txt",ios::app);
 system("CLS");
 system("color 37");
 cout<<"\n\n\t\t\t\t\t\t\t\t\t\tNEW ENTRY SECTION\n\n\n";
 cout<<"\t\t\t\t\tEnter First name:: ";
 cin>>studentData[k].fname;
 cout<<"\n\t\t\t\t\tEnter Last name:: ";
 cin>>studentData[k].lname;
cout<<"\n\t\t\t\t\tEnter Registration number:: ";
 cin>>studentData[k].Registration;
 cout<<"\n\t\t\t\t\tEnter class:: ";
 cin>>studentData[k].classes;
 cout<<"\n\t\t\t\t\tEnter Address:: ";
 cin>>studentData[k].addrs;
 cout<<"\n\t\t\t\t\tENTER Contact No.:: ";
 cin>>studentData[k].cel_no;
 cout<<"\n\t\t\t\t\tEnter Blood Group:: ";
 cin>>studentData[k].blod_grp;
 cout<<"\n\t\t\t\t\tEnter session:: ";
 cin>>studentData[k].session;
 
 f1<<studentData[k].fname<<endl<<studentData[k].lname<<endl<<studentData[k].Registration<<endl<<studentData[k].classes<<endl
 <<studentData[k].addrs<<endl<<studentData[k].cel_no<<endl<<studentData[k].blod_grp<<endl<<studentData[k].session<<endl;
 Sleep(500);	  
 system("cls");
f1.close();
}
continue;

case '2'://Display data
{ 
ifstream f2("student.txt"); 
system("CLS");
cout<<"\n\t\t\t\t\t\t\t\t\t   DISPLAY STUDENT'S ENTRY\n\n\n";
cout<<"\n\t\t\t\t\tEnter First name :: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData[j].fname);

if(studentData[j].fname==find)
{
 notFound = 1;
 cout<<"\n\t\t\t\t\t\t\t\t\t\t~::DETAILS::~\n";
 cout<<"\n\t\t\t\t\tFirst Name: "<<studentData[j].fname<<endl;
 getline(f2,studentData[j].lname);
 cout<<"\n\t\t\t\t\tLast Name: "<<studentData[j].lname<<endl;
 getline(f2,studentData[j].Registration);
 cout<<"\n\t\t\t\t\tRegistration Number: "<<studentData[j].Registration<<endl;
 getline(f2,studentData[j].classes);
 cout<<"\n\t\t\t\t\tClass: "<<studentData[j].classes<<endl;
 getline(f2,studentData[j].addrs);
 cout<<"\n\t\t\t\t\tAddress: "<<studentData[j].addrs<<endl;
 getline(f2,studentData[j].cel_no);
 cout<<"\n\t\t\t\t\tContact No.: "<<studentData[j].cel_no<<endl;
 getline(f2,studentData[j].blod_grp);
 cout<<"\n\t\t\t\t\tBlood Group: "<<studentData[j].blod_grp<<endl;
 getline(f2,studentData[j].session);
 cout<<"\n\t\t\t\t\tSession: "<<studentData[j].session<<endl<<endl; 
}

}
if(notFound == 0)
{
cout<<"\n\n\t\t\t\t\tNO SUCH STUDENT DETAILS AVAILABLE "<<endl;
}
f2.close();
cout<<"\n\t\t\tPress any key to back ";
getch();
}
continue;

case '3':
{
	break;
}
}

break;
}
continue;    

}

case '2':
{ 
while(1)
{ 
system("cls");
system("color 06");
cout<<"\n\n\n\t\t\t\t\t\t\t\t TEACHER'S INFORMATION AND BIODATA SECTION\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t1. ADD NEW TEACHER DETAIL\n";
cout<<"\t\t\t\t\t\t\t\t2. FIND AND DISPLAY DETAILS\n";
cout<<"\t\t\t\t\t\t\t\t3. BACK\n";
cout<<"\n\n\t\t\t\t\t\t\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{ 
ofstream t1("teacher.txt",ios::app);
  system("CLS");
  system("color 02");
  cout<<"\n\n\t\t\t\t\t\t\t\t\t\tNEW ENTRY SECTION";
  cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter First name:: ";
  cin>>tech[i].fst_name;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Qualification:: ";
  cin>>tech[i].qualification;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Experiance(year):: ";
  cin>>tech[i].exp;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Subject:: ";
  cin>>tech[i].subj;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Lecture(per Week):: ";
  cin>>tech[i].lec;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Pay:: ";
  cin>>tech[i].pay;
  cout<<"\n\t\t\t\t\t\t\t\tAddress:: ";
  cin>>tech[i].addrs;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Phone Number:: ";
  cin>>tech[i].cel_no;
  cout<<"\n\t\t\t\t\t\t\t\tEnter Blood Group:: ";
  cin>>tech[i].blod_grp;
  
  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl 
   <<tech[i].qualification<<endl<<tech[i].exp<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].addrs<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;
   Sleep(500);	  
   system("cls");
   t1.close();
}

continue;

case '2'://Display data
{ 
ifstream t2("teacher.txt"); 
system("CLS");
cout<<"\n\n\t\t\t\t\t\t\t\t\t   DISPLAY TEACHER'S ENTRY\n";
cout<<"\n\n\n\t\t\t\t\tENTER FIRST NAME : ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,tech[j].fst_name);
 
 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\t\t\t\t\t\t\t\t~::DETAILS::~\n";
  cout<<"\n\t\t\t\t\tFirst name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"\n\t\t\t\t\tLast name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"\n\t\t\t\t\tQualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"\n\t\t\t\t\tExperience: "<<tech[j].exp<<endl;
  getline(t2,tech[j].subj);
  cout<<"\n\t\t\t\t\tSubject: "<<tech[j].subj<<endl;
  getline(t2,tech[j].lec);
  cout<<"\n\t\t\t\t\tLecture (per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].pay);
  cout<<"\n\t\t\t\t\tPay: "<<tech[j].pay<<endl;
  getline(t2,tech[j].addrs);
  cout<<"\n\t\t\t\t\tAddress: "<<tech[j].addrs<<endl;
  getline(t2,tech[j].cel_no);
  cout<<"\n\t\t\t\t\tPhone Number: "<<tech[j].cel_no<<endl;
  getline(t2,tech[j].blod_grp);
  cout<<"\n\t\t\t\t\tBlood Group: "<<tech[j].blod_grp<<endl;
 }
 
}
t2.close();
if(notFound == 0)
{
 cout<<"\n\t\t\tNO SUCH TEACHER AVAILABLE"<<endl;
}
cout<<"\n\n\t\t\tPress any key to back";
getch();
}

continue;

case '3':
{
break;
}

}
break;
}
continue;
}
case '3':
{
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t~~GOODBYE~~";
	cout<<"\n\t\t\t\t\t\t\t\tTHANKS FOR USING COME BACK AGAIN";
break;
}
}   
break;
}
}

int login()
{
   system("color 34");
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\bCOLLEGE DATA MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t\t\b    LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t\t------------------------------\n\n\n";	
   cout << "\t\t\t\t\t\t\t\t\t\bPLEASE ENTER PASSWORD: ";
   ch = _getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "vivo")
   {
   	    cout<<"\n\n\n\t\t\t\t\t\t\t\t       LOADING PLEASE WAIT  ";
   	    Sleep(500);
        cout << "\\\\" ;
        Sleep(500);
        cout << "//";
        Sleep(500);
        cout << "\\\\";
        Sleep(500);
        cout << "//";
      	Sleep(500);
        cout << "\\\\";
        Sleep(500);
        cout << "//";
        Sleep(500);
        cout << "\\\\";
      cout << "\n\n\n\t\t\t\t\t\t\t\t\tLOGGED IN SUCCESSFULLY! \n";
		Sleep(500);
      system ("CLS");
   }
   else
   {
   		cout<<"\n\n\n\t\t\t\t\t\t\t\t       LOADING PLEASE WAIT  ";
   	    Sleep(500);
        cout << "\\\\" ;
        Sleep(500);
        cout << "//";
        Sleep(500);
        cout << "\\\\";
        Sleep(500);
        cout << "//";
      	Sleep(500);
        cout << "\\\\";
        Sleep(500);
        cout << "//";
        Sleep(500);
        cout << "\\\\";
	  cout << "\n\n\n\t\t\t\t\t\t\t\t\t\bWRONG PASSWORD PLEASE RETRY\n\n";
        Sleep(950);
      system("CLS");
      login();
   }
}
