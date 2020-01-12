#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
#include<iomanip>
class mainmenu{
public:
	void frontpage()
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n";
	system("COLOR 1F");
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	cout<<("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	cout<<("\t\t\t\t\t   ::Submitted By :- Anshul Sharma                 				   ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::****************************Welcome*****************************::\n");
	cout<<("\t\t\t\t\t   ::******************************To********************************::\n");
	cout<<("\t\t\t\t\t   ::************************Sharma'sHealth Club'********************::\n");
	cout<<("\t\t\t\t\t   ::***************************We care for you *********************::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::                                                                ::\n");
	cout<<("\t\t\t\t\t   ::Submitted to :- Mr Manmohan           Registration No.:-11704114::\n");
	cout<<("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	cout<<("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
}
void plans(){
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t Rs. 1500 :- One month \n";
	cout<<"\t\t\t\t\t Rs. 4000 :- Three Months \n";
	cout<<"\t\t\t\t\t Rs. 7000 :- Six Months \n";
	cout<<"\t\t\t\t\t Rs. 12000 :- One year \n";
	
}

void know(){
		cout<<"\n\n\n\n\n\n\n\n";
		ifstream anshul;
		anshul.open("know.txt");
		char word[50];
		anshul>>word;
		while(anshul.good())
		{
		cout<<word<<" ";
		anshul>>word;
		}
}
void fascilities()
{
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t MACHINES AVAILAIBLE:- \n";
	cout<<"\t\t\t\t\t\t 1.)Treadmil \n";
	cout<<"\t\t\t\t\t\t 2.) Stationary Bike \n";
	cout<<"\t\t\t\t\t\t 3.) Bench Press \n"; 
	cout<<"\t\t\t\t\t\t 4.) All The plains \n" ;
	cout<<"\t\t\t\t\t\t **** Pay us a visit and experience many more fascilities \n";
	
	
}
void login()
{
		cout<<"\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t 1.) Sign in as a new user \n"<<endl;
cout<<"\t\t\t\t\t\t     ********************* \n";

cout<<"\t\t\t\t\t\t 2.) Login in our network \n"<<endl;
cout<<"\t\t\t\t\t\t     *********************"<<endl;
}
void trainers()
{
		cout<<"\n\n\n\n\n\n\n\n";
		ifstream sharma;
		sharma.open("trainers.txt");
		char word[50];
		sharma>>word;
		while(sharma.good())
		{
		cout<<word<<" ";
		sharma>>word;
		}
}
};
main()
{
	mainmenu a;
	a.frontpage();
	cout<<("\n\n\n\t\t\t\t\t\t\t Press Enter to proceed \n");
	cout<<("\t\t\t\t\t\t\t********************** \n");
	getchar();
	system("cls");
	int k=0;
	a.login();
	int n1;
cout<<("\t\t\t\t\t Enter Your Choice  :-  ");
			cin>>n1;
			switch(n1)
			{
				case 1:
					{
						M :    	system("cls");
				fstream file5;
				fstream file6;
				fstream file7;
				fstream file8;
				fstream file9;
				string u,x,y,m;
				string s,r,t,z,z1;
				  string v= ".txt" ;
			    cout<<"\n\n\n\t\t\tEnter your username\n\t";
			    cin>>ws;
			    cin>>y;
			    
				cout<<"\n\n\n\n\t\t\t Enter your name  :-\n\t";
				cin>>ws;
				cin>>ws;
				  getline(cin,u);
			  
			   
				 cout<<"\n\n\n\t\t\t Enter your password :-\n\t";
				 
				 cin>>m;
				r=y+v;
				t=y+"email"+v;
				
				z=y+"username"+v;
				z1=y+"password"+v;
				s=y+"all"+v;
				cout<<"\n\tEnter your emailid\n\t";
				getline(cin,x);
				cin>>x;
				file5.open(r.c_str(),ios::out);
				file7.open(t.c_str(),ios::out);
				
				file8.open(z.c_str(),ios::out);
				
				file6.open(z1.c_str(),ios::out);
				file9.open(s.c_str(),ios::out);
				
				
				file5<<u;
				
				file8<<y;
					file6<<m;
				file7<<x;
				file9<<"Name :-"<< u<<"\n"<<"Username :- "<<y<<"\n"<<"Password :- "<<m<<"\n"<<"Email id :- "<<x<<endl;
				
				
					file5.close();
				
                file8.close();
			
				file6.close();
				file7.close();
				
				
				file9.close();
			
				cout<<"\n\n\n\t\tYou have succesfully registered";
				system("cls");
				goto A;
		
					}
				case 2:
					{
					system("cls");	
									cout<<"\n\n\n\t\t"<<"Enter Username of club  :-";
					printf("\n\t");
					string a2,a3,a4,a5,a6;
					string v1=".txt";
				
					cin>>ws;
					cin>>a2;
					
					a3=a2+"username"+v1;
					fstream file10;
					fstream file11;
					fstream file12;
					fstream file13;
				
					file11.open(a3.c_str(),ios::in);
					if(file11==NULL)
					{
						cout<<"\n\tyou are not registered yet\n";
					
					N1 :	cout<<"\t1 :- To register yourself\n";
				
						cout<<"\t2 :- To exit\n";
							printf("\n\n\n\t Enter Your Choice  :-  ");
							int n7;
			cin>>n7;
			switch(n7)
			{
				case 1:
					system("cls");
					goto M;
					break;
			
						case 2:
							system("cls");
						
						exit(1);
						default:
							cout<<"\n\n\n\n\tYou have entered a wrong choice"<<endl;
					getch();
					system("cls");
					goto N1;
					break;
							
			}
			
						
						
							getch();
					}
					else
					{
					
							O : cout<<"\n\n\t"<<"Enter Password :-"<<endl;
		printf("\t ");
		fstream file12;
	fstream file13;
	
						a5=a2+"password check and confirm for client login"+v1;
		
		a6=a2+"password"+v1;
	file12.open(a5.c_str(),ios::out);
	string password;
	
	char ch1;

	
	cin>>password;
	file12<<password;
	file12.close();
	
					
	file12.open(a5.c_str(),ios::in);
	file12.seekg(0,ios::end);
	int a8=file12.tellg();
	file12.close();
	file13.open(a6.c_str(),ios::in);
	file13.seekg(0,ios::end);
	int a9=file13.tellg();
	file13.close();
	if(a8==a9)
	{
	file12.open(a5.c_str(),ios::in);
	file13.open(a6.c_str(),ios::in);
	char e1,f1;
	int j1=0;
	while(file12&&file13)
	{
		file12>>e1;
		file13>>f1;
		if(e1==f1)
		{
			j1++;
		}
		
	}
	file12.close();
	file13.close();
	if(j1==a8+1||j1==a9+1)
	{
		cout<<"\n\n\t\t\t"<<"You Are Sucessfully logged in";
		getch();
			 	}
					
				
					
					else
	{   k++;
		cout<<"\n\n\n\t"<<"access denied";

		system("cls");
		goto O;
	}
}

else
{  k++;
	cout<<"\n\n\n\t"<<"not accepted"<<endl;
	getch();
	if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			int r;
		
		
		
		
			getch();
			cout<<"\n\t ***press enter*****";
			k=0;
			system("cls");
		goto O;
	}
	
		system("cls");
		goto O;
	
}
	break;
			
			}
		}
					
			}
		

	system("cls");
A:	cout<<"\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t 1.Press one to Know all about us \n";
cout<<"\t\t\t\t\t   ****************************** \n";
cout<<"\t\t\t\t\t 2.Press two to know about Fascilities Provided By us  \n";
cout<<"\t\t\t\t\t   ************************************************** \n";
cout<<"\t\t\t\t\t 3. Press three if you Want to Know about our trainers \n";
cout<<"\t\t\t\t\t    ************************************************** \n";
cout<<"\t\t\t\t\t 4. Press 4 to know about our plans \n";
cout<<"\t\t\t\t\t    ******************************** n";
cout<<"\t\t\t\t\t 5. Press five to exit  \n";
cout<<"\t\t\t\t\t    ****************** \n";

int n;
cout<<"\n\n\n";
cout<<"\t\t\t\t\t Enter Your Choice :- ";
cin>>n;
switch(n)
{


	case 1:
		system("cls");
		a.know();
		cout<<"\n\n\n\n\t\t\t\t\t";
		cout<<"Press enter to go back to main mneu";
		getch();
		system("cls");
		goto A;
		break;
	
	case 2:
		system("cls");
		a.fascilities();
		cout<<"\n\n\n\n\t\t\t\t\t";
		cout<<"Press enter to go back to main mneu";
		getch();
		system("cls");
		goto A;
		break;
		
		
	case 3:
		
	system("cls");
	a.trainers();
		cout<<"\n\n\n\n\t\t\t\t\t";
		cout<<"Press enter to go back to main mneu";
		getch();
		system("cls");
		goto A;
	
	case 4:
		system("cls");
		a.plans();
			cout<<"\n\n\n\n\t\t\t\t\t";
		cout<<"Press enter to go back to main mneu";
		getch();
		system("cls");
		goto A;
		
	case 5:
		exit(1);
		
	default:
	cout<<"\t\t\t\t\t  ******************************************************************* \n ";
	cout<<"\t\t\t\t\t * You Entered an invalid input, Press enter to go back to main menu *\n";
	cout<<"\t\t\t\t\t  *******************************************************************";
	getch();
	system("cls");
	goto A;
}

}
