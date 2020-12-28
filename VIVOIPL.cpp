#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class allteam{
	int s_no;
	char team1[30];
	char team2[30];
	char team3[30];

public:	void read_data()
	{
		cout<<"\nEnter the serial no. : ";
		cin>>s_no;
		cout<<"\nEnter the First Name of Team : ";
		cin>>team1;
		cout<<"\nEnter the middle Name of Team : ";
		cin>>team2;
		cout<<"\nEnter the last Name of Team : ";
		cin>>team3;
		
	}
	void showdata()
	{
		cout<<"S.No."<<setw(14)<<"IN SHORT"<<setw(30)<<"TEAM NAME"<<endl;
	}
	void show_data()
	{
		char *t1=team1;
	    char *t2=team2;
	    char *t3=team3;
		cout<<s_no<<"."<<setw(10)<<*t1<<*t2<<*t3<<setw(20)<<team1<<" "<<team2<<" "<<team3<<endl;
	}
	void readteam()
	{
		int g;
		cout<<"\nEnter the number of team from which you want to choose : ";
		cin>>g;
		fstream f1;
		allteam ab[8];
		f1.open("allteam.txt",ios::in|ios::binary);
		showdata();
		for(int i=0;i<g;i++)
		{
		
		f1.read((char*)&ab[i],sizeof(ab[i]));
		ab[i].show_data();
	}
	f1.close();
	}
	void readteamplayer()
	
	
	{
	
		int g;
		
		fstream f1;
		allteam ab[8];
		f1.open("allteam.txt",ios::in|ios::binary);
		showdata();
		for(int i=0;i<8;i++)
		{
		
		f1.read((char*)&ab[i],sizeof(ab[i]));
		ab[i].show_data();
	}
	f1.close();
	}
	
	
	
};
class stadium1{
 	
 	int s_no;
	char f_name[30],l_name[30];
	char state[30];
	char country[30];
	public:
		void read_data()
		{
		cout<<"\nEnter The serial number : ";
		cin>>s_no;
		cout<<"\nEnter the first name of the Stadium : ";
		cin>>f_name;
		cout<<"\nEnter the last name of the Stadium : ";
		cin>>l_name;
		cout<<"\nEnter the name of state where it is located : ";
		cin>>state;
		cout<<"\nEnter the name of country : ";
		cin>>country;
		}
		void showdata()
		{
			cout<<"S.NO."<<setw(10)<<"IN SHORT"<<setw(25)<<"NAME"<<setw(10)<<"STATE"<<setw(18)<<"COUNTRY"<<endl;
		    
		}
		void show_data()
		{
			char *s=f_name;
			char *j=l_name;
			cout<<s_no<<"."<<setw(7)<<*s<<*j<<setw(25)<<f_name<<" "<<l_name<<setw(10)<<state<<setw(16)<<country<<endl;
		}	
 	void readstad()
 	{
 			fstream f2;
int n;
		 cout<<"Enter the number of stadium from which you want to choose : ";
		  cin>>n;
		    stadium1 u[n];
		    stadium1 obj;
			f2.open("stadiumlist.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();	
 		
 		
	 }
 	
 	
 };
 
 

class matches{
	
	int s_no,r_t1,r_t2,w_t1,w_t2,t_over,t_wi;
	float o_t1,o_t2;
	char team1[10];
	char team2[10];
	char w_team[20];
	char l_team[20];
	int by_run;
	char f_name[30];
	char l_name[30];
	int r_p;
	float b_p;
public:	
		void a_team()
		{
		    allteam obj;
			obj.readteam();	
		}
	void read_dataplayerwise()
	{
		cout<<"\nEnter the s.no. : ";
		cin>>s_no;
		cout<<"\nEnter the first name of player : ";
		cin>>f_name;
		cout<<"\nEnter the last name of player : ";
		cin>>l_name;
		cout<<"\nEnter the run : ";
		cin>>r_p;
		
		cout<<"\nEnter the balls played by him : ";
		cin>>b_p;
		
		}
		
/*	void man_of_match()
	{
		fstream ob;
		ob.open("manofmatch.txt",ios::out|ios::app|ios::binary);
		ob
		
		}*/	
		
		
		
		
		
	void showdataplayerwise()
	{
		cout<<"S.No."<<setw(12)<<"NAME"<<setw(11)<<"RUN"<<setw(11)<<"OVER"<<endl;
			}
	void show_dataplayerwise()
	{
	cout<<s_no<<setw(14)<<f_name<<" "<<l_name<<setw(11)<<r_p<<setw(9)<<setprecision(2)<<b_p/6<<endl;
	
	}				
		
		
	void read_data()
	{
		
		cout<<"\nEnter the serial no of match : ";
		cin>>s_no;
		cout<<"\n";
		a_team();
		cout<<"\nEnter the name of team in short(inning 1): ";
		cin>>team1;
		cout<<"\n";
		a_team();
		cout<<"\nEnter the name of second team in short(inning 2): ";
		cin>>team2;
		cout<<"\nEnter the run of first team : ";
		cin>>r_t1;
		cout<<"\Enter the run of second team : ";
		cin>>r_t2;
		cout<<"\nEnter total no of overs : ";
		cin>>t_over;
		cout<<"Enter total no of wickets : ";
		cin>>t_wi;
		cout<<"\nEnter the fall of wickets of first team : ";
		cin>>w_t1;
		cout<<"\nEnter the fall of wickets of second team : ";
		cin>>w_t2;
		cout<<"\nEnter the overs played by first team : ";
		cin>>o_t1;
		cout<<"\nEnter the overs played by second team : ";
		cin>>o_t2;
	}
void showdata()
	{
		cout<<"S.No."<<setw(8)<<"TEAM_1"<<setw(8)<<"TEAM_2"<<setw(11)<<"SCORE_T1"<<setw(11)<<"SCORE_T2"<<setw(10)<<"T_over"<<setw(10)<<"T_Wicket"<<setw(8)<<"WI_T1"<<setw(8)<<"WI_T2"<<setw(10)<<"OVER_T1"<<setw(10)<<"OVER_T2"<<setw(10)<<"WINNER"<<setw(8)<<"BY_RUN"<<setw(10)<<"BY_WI"<<endl;
		
	}

	
	
void show_data()
	{
		if(r_t1>r_t2)
		{
		     by_run=r_t1-r_t2;
			cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(11)<<r_t1<<setw(9)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<team1<<setw(10)<<by_run<<setw(10)<<"--"<<endl;
		   writewinnersemi();
	    }
	
     	else if(r_t1==r_t2)
	      {
		cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(12)<<r_t1<<setw(10)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<"TIE"<<setw(10)<<"--"<<setw(10)<<"**"<<endl;	
	      }
	else if(r_t1<r_t2)
	          {
	  	     	
				   int by_wi=t_wi-w_t2;
				cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(12)<<r_t1<<setw(10)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<team2<<setw(10)<<"--"<<setw(10)<<by_wi<<endl;
	           writewinnersemi1();
               }
	}
void read_datasemi()
{
		cout<<"\nEnter the serial no of match : ";
		cin>>s_no;
		cout<<"\n";
	    readsemi();
		cout<<"\nEnter the name of team in short(inning 1): ";
		cin>>team1;
		cout<<"\n";
	    readsemi();
		cout<<"\nEnter the name of second team in short(inning 2): ";
		cin>>team2;
		cout<<"\nEnter the run of first team : ";
		cin>>r_t1;
		cout<<"\Enter the run of second team : ";
		cin>>r_t2;
		cout<<"\nEnter total no of overs : ";
		cin>>t_over;
		cout<<"Enter total no of wickets : ";
		cin>>t_wi;
		cout<<"\nEnter the fall of wickets of first team : ";
		cin>>w_t1;
		cout<<"\nEnter the fall of wickets of second team : ";
		cin>>w_t2;
		cout<<"\nEnter the overs played by first team : ";
		cin>>o_t1;
		cout<<"\nEnter the overs played by second team : ";
		cin>>o_t2;
	}	
	
	
void show_datasemifinal()
	{
		if(r_t1>r_t2)
		{
		     by_run=r_t1-r_t2;
			cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(11)<<r_t1<<setw(9)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<team1<<setw(10)<<by_run<<setw(10)<<"--"<<endl;
		   writewinnerfinal();
	    }
	
     	else if(r_t1==r_t2)
	      {
		cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(12)<<r_t1<<setw(10)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<"TIE"<<setw(10)<<"--"<<setw(10)<<"**"<<endl;	
	      }
	else if(r_t1<r_t2)
	          {
	  	     	
				   int by_wi=t_wi-w_t2;
				cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(12)<<r_t1<<setw(10)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<team2<<setw(10)<<"--"<<setw(10)<<by_wi<<endl;
	           writewinnerfinal1();
               }
		
	}
	
void read_datafinal()
{
	
		cout<<"\nEnter the serial no of match : ";
		cin>>s_no;
		cout<<"\n";
		readfinal();
		cout<<"\nEnter the name of team in short(inning 1): ";
		cin>>team1;
		cout<<"\n";
	    readfinal();
		cout<<"\nEnter the name of second team in short(inning 2): ";
		cin>>team2;
		cout<<"\nEnter the run of first team : ";
		cin>>r_t1;
		cout<<"\Enter the run of second team : ";
		cin>>r_t2;
		cout<<"\nEnter total no of overs : ";
		cin>>t_over;
		cout<<"Enter total no of wickets : ";
		cin>>t_wi;
		cout<<"\nEnter the fall of wickets of first team : ";
		cin>>w_t1;
		cout<<"\nEnter the fall of wickets of second team : ";
		cin>>w_t2;
		cout<<"\nEnter the overs played by first team : ";
		cin>>o_t1;
		cout<<"\nEnter the overs played by second team : ";
		cin>>o_t2;
	
	}	
	
void show_datafinal()	
	{
			if(r_t1>r_t2)
		{
		     by_run=r_t1-r_t2;
			cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(11)<<r_t1<<setw(9)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<team1<<setw(10)<<by_run<<setw(10)<<"--"<<endl;
		   final();
	    }
	
     	else if(r_t1==r_t2)
	      {
		cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(12)<<r_t1<<setw(10)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<"TIE"<<setw(10)<<"--"<<setw(10)<<"**"<<endl;	
	      }
	else if(r_t1<r_t2)
	          {
	  	     	
				   int by_wi=t_wi-w_t2;
				cout<<s_no<<setw(11)<<team1<<setw(9)<<team2<<setw(12)<<r_t1<<setw(10)<<r_t2<<setw(10)<<t_over<<setw(8)<<t_wi<<setw(8)<<w_t1<<setw(8)<<w_t2<<setw(10)<<o_t1<<setw(10)<<o_t2<<setw(10)<<team2<<setw(10)<<"--"<<setw(10)<<by_wi<<endl;
	           final1();
               }
	
    }
	
	void writewinnersemi()
	{
		    fstream f1;
		    f1.open("selectedsemi.txt",ios::out|ios::app);
		    f1<<team1<<endl;
		    f1.close();	
	}
	void writewinnersemi1()
	{
		  fstream f1;
		    f1.open("selectedsemi.txt",ios::out|ios::app);
		    f1<<team2<<endl;
		    f1.close();	
	}
	
		void writewinnerfinal()
	{
		    fstream f1;
		    f1.open("selectedfinal.txt",ios::out|ios::app);
		    f1<<team1<<endl;
		    f1.close();	
	}
	void writewinnerfinal1()
	{
		  fstream f1;
		    f1.open("selectedfinal.txt",ios::out|ios::app);
		    f1<<team2<<endl;
		    f1.close();	
	}
	void final()
	{
		fstream f1;
		    f1.open("final.txt",ios::out);
		    f1<<team1<<endl;
		    f1.close();	
	}
		void final1()
	{
		fstream f1;
		    f1.open("final.txt",ios::out);
		    f1<<team2<<endl;
		    f1.close();	
	}
	void readsemi()
	{
	    fstream f3;
	    char ch1[100];
		f3.open("selectedsemi.txt",ios::in);
		while(f3.eof()==0)
		{
		   f3.getline(ch1,100);
		   cout<<"\n"<<ch1<<endl;	
			}	
			f3.close();
	}
	void readfinal()
	{
		 fstream f4;
	    char ch2[100];
		f4.open("selectedfinal.txt",ios::in);
		while(f4.eof()==0)
		{
		   f4.getline(ch2,100);
		   cout<<"\n"<<ch2<<endl;	
			}	
			f4.close();
	}
	void readwinner()
	{
		 fstream f5;
	    char ch3[100];
		f5.open("final.txt",ios::in);
		while(f5.eof()==0)
		{
		   f5.getline(ch3,100);
		   cout<<"\n"<<ch3<<endl;	
			}	
			f5.close();
		
	}
	
               
};




class Tournament{
	int s_no;
	char team1[30];
	char team2[30];
	int d_date,m_date,y_date;
	char stad[30];
	public:
		
		void b_team()
		{
		    allteam obj;
			obj.readteam();	
		}
		void r_stad()
		{
			stadium1 oj;
			oj.readstad();
		}
		void read_data()
		{
			cout<<"\nEnter the Match No. : ";
			cin>>s_no;
			cout<<"\n"<<endl;
			b_team();
			
			cout<<"\nEnter the name of First team : ";
			cin>>team1;
				cout<<"\n"<<endl;
			b_team();
			cout<<"\nEnter the name of second team (other than first) : ";
		     cin>>team2;
		     cout<<"\nEnter the date (dd) : ";
		     cin>>d_date;
		     cout<<"\nEnter the date (mm) : ";
		     cin>>m_date;
		     cout<<"\nEnter the date (yy) : ";
		     cin>>y_date;
		     r_stad();
		     cout<<"\nEnter the stadium name(in short) : ";
		     cin>>stad;
		}
		void showdata()
		{
		      cout<<"S.No."<<setw(12)<<"TEAM1"<<setw(12)<<"TEAM2"<<setw(20)<<"DATE(DD/MM/YY)"<<setw(20)<<"STADIUM"<<endl;
			  	
		}
		void show_data()
		{
			cout<<s_no<<setw(14)<<team1<<setw(14)<<team2<<setw(15)<<d_date<<"/"<<m_date<<"/"<<y_date<<setw(16)<<stad<<endl;
		}
	
	
};




class player{
	int s_no,player_id;
	char f_name[30],l_name[30];
	char team[30];
	char country[30];
	char role[30];
	public:
		void read_data()
		{
		cout<<"\nEnter The serial number : ";
		cin>>s_no;	
		cout<<"\nEnter the first name of the player : ";
		cin>>f_name;
		cout<<"\nEnter the last name of the player : ";
		cin>>l_name;
		cout<<"\nEnter the player ID : ";
		cin>>player_id;
		cout<<"\nEnter the name of country : ";
		cin>>country;
		cout<<"\nEnter the Role of player : ";
		cin>>role;
		}
		void showdata()
		{
			cout<<"S.NO."<<setw(15)<<"NAME"<<setw(15)<<"PLAYER ID"<<setw(15)<<"COUNTRY"<<setw(15)<<"ROLE"<<endl;
		    
		}
		void show_data()
		{
			cout<<s_no<<"."<<setw(15)<<f_name<<" "<<l_name<<setw(15)<<player_id<<setw(12)<<country<<setw(14)<<role<<endl;
		}
};

class own{
	int s_no,owner_id;
	char f_name[30],l_name[30];
	char team[30];
	char country[30];
	char ocupation[30];
	public:
		void read_data()
		{
		cout<<"\nEnter The serial number : ";
		cin>>s_no;	
		cout<<"\nEnter the OWNER ID : ";
		cin>>owner_id;
		cout<<"\nEnter the first name of the owner : ";
		cin>>f_name;
		cout<<"\nEnter the last name of the owner : ";
		cin>>l_name;
		cout<<"\nEnter the name of team : ";
		cin>>team;
		cout<<"\nEnter the name of country : ";
		cin>>country;
		cout<<"\nEnter the Ocupation : ";
		cin>>ocupation;
		}
		
		
		void showdata()
		{
			cout<<"S.NO."<<setw(12)<<"OWNER_ID"<<setw(15)<<"NAME"<<setw(15)<<"TEAM"<<setw(18)<<"COUNTRY"<<setw(30)<<"OCUPATION"<<endl;
		    
		}
		void show_data()
		{
			cout<<s_no<<"."<<setw(15)<<owner_id<<setw(15)<<f_name<<" "<<l_name<<setw(10)<<team<<setw(16)<<country<<setw(40)<<ocupation<<endl;
		}	
};	

class ump{
		int s_no,umpire_id;
	char f_name[30],l_name[30];
	char country[30];
	public:
		void read_data()
		{
		cout<<"\nEnter The serial number : ";
		cin>>s_no;	
		cout<<"\nEnter the Umpire ID : ";
		cin>>umpire_id;
		cout<<"\nEnter the first name of the umpire : ";
		cin>>f_name;
		cout<<"\nEnter the last name of the umpire : ";
		cin>>l_name;
		cout<<"\nEnter the name of country : ";
		cin>>country;
		}
		void showdata()
		{
			cout<<"S.NO."<<setw(15)<<"UMPIRE ID"<<setw(15)<<"NAME"<<setw(18)<<"COUNTRY"<<endl;
		    
		}
		void show_data()
		{
			cout<<s_no<<"."<<setw(15)<<umpire_id<<setw(15)<<f_name<<" "<<l_name<<setw(16)<<country<<endl;
		}
	
	
	
};

class coach1{
	
	int s_no,coach_id;
	char f_name[30],l_name[30];
	char team[30];
	char country[30];
	public:
		void read_data()
		{
		cout<<"\nEnter The serial number : ";
		cin>>s_no;	
		cout<<"\nEnter the Coach ID : ";
		cin>>coach_id;
		cout<<"\nEnter the first name of the coach : ";
		cin>>f_name;
		cout<<"\nEnter the last name of the coach : ";
		cin>>l_name;
		cout<<"\nEnter the name of team : ";
		cin>>team;
		cout<<"\nEnter the name of country : ";
		cin>>country;
		}
		void showdata()
		{
			cout<<"S.NO."<<setw(15)<<"COACH ID"<<setw(15)<<"NAME"<<setw(10)<<"TEAM"<<setw(18)<<"COUNTRY"<<endl;
		    
		}
		void show_data()
		{
			cout<<s_no<<"."<<setw(15)<<coach_id<<setw(15)<<f_name<<" "<<l_name<<setw(10)<<team<<setw(16)<<country<<endl;
		}	
	
	
}; 
 


	
class process{
		int p;
		int n;
		int l;
		int k;
		char ch[20];
			int n8;
		public:
void password(){
	
label1: cout<<"ENTER FOUR DIGIT PIN TO ACCESS THIS SOFTWARE:";
        cin>>p;
       password1();
        if(p==l)
        {
		
        home();
    }

         else{
	    cout<<"\nPIN YOU ENTERED IS INCORRECT.\n"<<endl;
	    goto label1;
	    
	    
             }

    }
void result()
{
    matches ol;
    cout<<"\nTHIS TEAM WINS THE TOURNAMENT :-"<<endl;
	ol.final();	
	int i;
	cout<<"\n0.HOME \n1.DETAILS OF WINNER";
label90:	cout<<"\nYour Option : ";
	cin>>i;
	switch(i)
	{
		case 0: home();break;
	//	case 1: details();break;
		default : cout<<"\nInvalid Option"<<endl;goto label90;break;
	}
	
   }   
    
    
void home()

    {
	    cout<<setw(20)<<"\nPRESS ANY KEY FROM AVAILABLE OPTIONS:- \n\n"<<
	    setw(10)<<"1.OWNER"<<setw(16)<<"2.TEAM"<<setw(16)<<"3.COACH"<<setw(15)<<"4.UMPIRE"<<endl;
	    cout<<setw(15)<<"5.TOURNAMENT"<<setw(14)<<"6.STADIUM"<<setw(14)<<"7.RESULT"<<endl;
	    cout<<setw(10)<<"8.ADMIN"<<setw(16)<<"9.EXIT"<<endl;

label2: cout<<"\nYOUR OPTION: ";
	    cin>>n;
	switch(n)
	{
		
	    case 1: owner();    break;
	    case 2: team();  	break;
     	case 3: coach();    break;
	 	case 4: umpire();	break;
	    case 5: tournament();break;
	    case 6: stadium();	 break;
	    case 7: result(); break;      
	    case 8: admin(); break;
	    case 9:	
		cout<<"\nTerminated Program."<<endl;
	    exit(1);break;
	    
		default: cout<<"Invalid option."<<endl;goto label2;break;
	}
	}
void umpire()
{
int c;
	cout<<"\n\n0.HOME \n1.UMPIRE DETAILS \n2.UPDATE DETAILS";
label13:	cout<<"\n\nYour Option : ";
	cin>>c;
	switch(c)
	{
		case 0: home();break;
		case 1: umpirelist();break;
		case 2: updateumpire();break;
		default : cout<<"\nInvalid Option\n";goto label13;break;
	}	
}
void umpirelist()
{
	
fstream f2;
int n;
		 cout<<"How many umpire do you want to see? : ";
		  cin>>n;
		    ump u[n];
		    ump obj;
			f2.open("umpirelist.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();	
			
			int p;
			cout<<"\n0.HOME \n1.PREV";
label9:			cout<<"\n\n Your Option : ";
			cin>>p;
			switch(p)
			{
				case 0: home(); break;
				case 1: umpire(); break;
				default : cout<<"\nInvalid Option\n";goto label9;break;
			}
			
	
}


void updateumpire()
{
		fstream f4;
		ump f;	
		int p;
		f4.open("umpirelist.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the  s.no. of umpire whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}	
	
		int u;
			cout<<"\n0.HOME \n1.PREV";
	label9:		cout<<"\n\n Your Option : ";
			cin>>u;
			switch(u)
			{
				case 0: home(); break;
				case 1: umpire(); break;
				default : cout<<"\nInvalid Option\n";goto label9;break;
			}
}






void stadium()
{
int c;
	cout<<"\n\n0.HOME \n1.STADIUM DETAILS\n2.UPDATE DETAILS";
label13:	cout<<"\n\nYour Option : ";
	cin>>c;
	switch(c)
	{
		case 0: home();break;
		case 1: stadiumlist();break;
		case 2: updatestadium();break;
		default : cout<<"\nInvalid Option\n";goto label13;break;
	}	
}
  void stadiumlist()
  {
  	
  	fstream f2;
int n;
		 cout<<"How many stadium do you want to see? : ";
		  cin>>n;
		    stadium1 u[n];
		    stadium1 obj;
			f2.open("stadiumlist.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();	
			
			int f;
			cout<<"\n0.HOME \n1.PREV";
label9:			cout<<"\n\n Your Option : ";
			cin>>f;
			switch(f)
			{
				case 0: home(); break;
				case 1: stadium(); break;
				default : cout<<"\nInvalid Option\n";goto label9;break;
			}

  	
  	
  }
  
  void updatestadium()
{
		fstream f4;
		stadium1 f;	
		int p;
		f4.open("stadiumlist.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the  s.no. of stadium whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}	
	
		int u;
			cout<<"\n0.HOME \n1.PREV";
label9:			cout<<"\n\n Your Option : ";
			cin>>u;
			switch(u)
			{
				case 0: home(); break;
				case 1: stadium(); break;
				default : cout<<"\nInvalid Option\n";goto label9;break;
			}
}	
void coach()
{
	int c;
	cout<<"\n\n0.HOME \n1.COACH LIST \n2.UPDATE COACH DATA";
label13:	cout<<"\n\nYour Option : ";
	cin>>c;
	switch(c)
	{
		case 0: home();break;
		case 1: coachlist();break;
		case 2: updatecoach();break;
		default : cout<<"\nInvalid Option\n";goto label13;break;
	}
	}
	
void coachlist()
{
	 fstream f2;
	 int n;
		 cout<<"How many coach do you want to see? : ";
		  cin>>n;
		    coach1 u[n];
		    coach1 obj;
			f2.open("coachlist.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();
	  cout<<"\n\n0.HOME \n1.PREV ";
int e;
label10:	  cout<<"\nYour Option : ";
	  	  cin>>e;
	  switch(e)
	  {
	  	case 0: home();break;
	  	case 1: coach();break;
	  	default : cout<<"\nInvalid Option\n";goto label10;break;
	  }
	
	}	
		
void updatecoach()
{
		fstream f4;
		coach1 f;	
		int p;
		f4.open("coachlist.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the s.no. of coach whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}	

	  cout<<"\n\n0.HOME \n1.PREV ";
int e;
label10:	  cout<<"\nYour Option : ";
	  	  cin>>e;
	  switch(e)
	  {
	  	case 0: home();break;
	  	case 1: coach();break;
	  	default : cout<<"\nInvalid Option\n";goto label10;break;
	  }
	
	}	
	
	
void ownerlist()
        {
        	int e;
	     int n;
	     fstream f2;
		 cout<<"How many Team Owner do you want to see?(1 to 8) : ";
		  cin>>n;
		 own u[n];
		own obj4;
			f2.open("ownerlist.txt",ios::in|ios::binary);
			obj4.showdata();
			for(int i=0;i<n;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();
	 
	  cout<<"\n\n0.HOME \n1.PREV ";

label10:	  cout<<"\nYour Option : ";
	  	  cin>>e;
	  switch(e)
	  {
	  	case 0: home();break;
	  	case 1: owner();break;
	  	default : cout<<"\nInvalid Option\n";goto label10;break;
	  }
		}
void updateowner()
{          int e;
				fstream f4;
		own o;	
		int p;
		f4.open("ownerlist.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(o);
		cout<<"\nEnter the owner s.no. whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(o);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		o.read_data();	
		f4.write((char*)&o,sizeof(o));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		o.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&o,sizeof(o));
			o.show_data();
			}
	cout<<"\n\n0.HOME \n1.PREV ";

label10:	  cout<<"\nYour Option : ";
	  	  cin>>e;
	  switch(e)
	  {
	  	case 0: home();break;
	  	case 1: owner();break;
	  	default : cout<<"\nInvalid Option\n";goto label10;break;
	  }
}	
	
	
void owner()
     {
	  int k;
	  cout<<"\nAvailable option:- \n\n0.HOME \n1.OWNER DETAILS \n2.UPDATE DETAILS";
label9:	  cout<<"\nYour Option : ";
	  cin>>k;
	  switch(k)
	  {
	    	case 0: home(); break;
	 	case 1:ownerlist();break;
	  	case 2:updateowner();break;
	   	default : cout<<"\n\nInvalid Input\n";goto label9;
		 
	  	
	  }
	  
	  }
	
void team1()
{
		int g;
		cout<<"\nHow many team do you want to see? : ";
		cin>>g;
	
		fstream f1;
		allteam ab[g];
		allteam ob;
		f1.open("allteam.txt",ios::in|ios::binary);
		ob.showdata();
		for(int i=0;i<g;i++)
		{
		
		f1.read((char*)&ab[i],sizeof(ab[i]));
		ab[i].show_data();
	}
	f1.close();
		cout<<"9.HOME \n10.UPDATE DETAILS OF TEAM NAME"<<endl;
	
	}	
				
void updateteam()
{
		fstream f4;
		allteam f;	
		int p;
		f4.open("allteam.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the team number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}	
	int y;
	cout<<"\n0.HOME \n1.PREV";
    cout<<"\nYour Option : ";	
		cin>>y;
		switch(y)
		{
			case 0: home(); break;
			case 1: team(); break;
		}
	
	}	
void team()
{

	team1();
	cout<<"\nEnter the s.no of that team of which you want to see the details : ";
	int t;
label3:	cout<<"\nYOUR OPTION : ";
	cin>>t;
	switch(t)
	{
	
		case 1: kkrsquad();	break;
        case 2: srhsquad();break;
		case 3: rrsquad();break;
		case 4: rcbsquad();	break;
	    case 5: ddsquad();	break;
	    case 6: kxpsquad();	break;
	    case 7: csksquad();	break;
	    case 8: misquad();	break;
	    case 9: home();break;
	    case 10: updateteam(); break;
	    default: cout<<"Invalid option."<<endl;
	    goto label3;
		break;
	}
}


	


void updatekkr()
{
		fstream f4;
		player f;	
		int p;
		f4.open("playerkkr.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:kkrsquad();break;
			
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
				
						
		}		
	
	
	
void  kkrsquad()
    {
	    int n1;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n1;
		    player u[n1];
		    player obj;
			f2.open("playerkkr.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n1;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();  
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatekkr();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	
	}
	
void srhsquad()
    {
	   
	   int n2;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n2;
		    player u[n2];
		    player obj;
			f2.open("playersrh.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n2;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();   
	   
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatesrh();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}
	
void updatesrh()
{
	
			fstream f4;
		player f;	
		int p;
		f4.open("playersrh.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:srhsquad();break;

			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
	
	}	

void updaterr()
{
	
    	fstream f4;
		player f;	
		int p;
		f4.open("playerrr.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:rrsquad();break;
		
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
		
	
}
	
		
void rrsquad()
    {
	  int n3;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n3;
		    player u[n3];
		    player obj;
			f2.open("playerrr.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n3;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();    
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}	
void rcbsquad()
    {
	      int n4;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n4;
		    player u[n4];
		    player obj;
			f2.open("playerrcb.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n4;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();  
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatercb();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}
	
void updatercb()
{
	
    	fstream f4;
		player f;	
		int p;
		f4.open("playerrcb.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:rcbsquad();break;
			
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
		
	
}
	
void updatedd()
{
	
    	fstream f4;
		player f;	
		int p;
		f4.open("playerdd.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:ddsquad();break;
			
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
		
	
}
	
void ddsquad()
    {
	    
	  int n5;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n5;
		    player u[n5];
		    player obj;
			f2.open("playerdd.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n5;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();      
	    
	    
	    
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatedd();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}
	
	
	
void updatekxp()
{
	
    	fstream f4;
		player f;	
		int p;
		f4.open("playerkxp.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:kxpsquad();break;
			
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
		
	
}	
		
void kxpsquad()
    {
	      int n6;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n6;
		    player u[n6];
		    player obj;
			f2.open("playerkxp.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n6;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();  
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatekxp();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}
	
void updatecsk()
{
	
    	fstream f4;
		player f;	
		int p;
		f4.open("playercsk.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:csksquad();break;
			
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
		
	
}	
	
		
void csksquad()
    {
	      int n7;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n7;
		    player u[n7];
		    player obj;
			f2.open("playercsk.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n7;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();  
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatecsk();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}
	
void updatemi()
{
	
    	fstream f4;
		player f;	
		int p;
		f4.open("playermi.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the player number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
		int j;
		cout<<"\n0.HOME \n1.PREV "<<endl;
label21:		cout<<"\nYOUR OPTION : ";
		cin>>j;
		switch(j)
		{
			case 0:home();break;
			case 1:misquad();break;
		
			default : cout<<"\nInvalid Option\n";goto label21;break;
			}	
					
		
	
}	
	
		
void misquad()
    {
	      int n8;
		fstream f2;
		 cout<<"How many player do you want to see? (1 to 11): ";
		  cin>>n8;
		    player u[n8];
		    player obj;
			f2.open("playermi.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n8;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();  
    int s;
    cout<<"\nAVAILABLE OPTIONS:-"<<endl;
	cout<<"\n0.HOME \n1.PREV \n2.UPDATE PLAYER INFO";
label8:	cout<<"\nYOUR OPTION : ";
	cin>>s;
	switch(s)
	{
		case 0: home();break;
		case 1: team();break;
		case 2: updatemi();break;
		default: cout<<"\nInvalid Option.";goto label8;break;
	}
	}
	

	
void ownerwrite()
{
	int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more owner ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many Owner do you want to add? : ";
		    cin>>n;
		    own o[n];
		    f1.open("ownerlist.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    own o[n];
		    f1.open("ownerlist.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n owners appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
			
			
}
void umpirewrite()
{
  int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more Umpire ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many Umpire do you want to add? : ";
		    cin>>n;
		    ump o[n];
		    f1.open("umpirelist.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n umpires added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many Umpires do you want to append? : ";
		    cin>>n;
		    ump o[n];
		    f1.open("umpirelist.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n umpires appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}	
}

void coachwrite()
{
	int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more coach ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many coach do you want to add? : ";
		    cin>>n;
		     coach1 o[n];
		    f1.open("coachlist.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n coaches added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many coach do you want to append? : ";
		    cin>>n;
		    coach1 o[n];
		    f1.open("coachlist.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Coaches appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}		
}
void stadiumwrite()
{
	

	int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more Stadium ?(press 1 for overwrite and 0 to Add New to previous) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many stadium do you want to add? : ";
		    cin>>n;
		    stadium1 o[n];
		    f1.open("stadiumlist.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Stadium added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV \n";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many Stadium do you want to append? : ";
		    cin>>n;
		    stadium1 o[n];
		    f1.open("stadiumlist.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n New Stadium added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}
void addplayers()
{
	int y;
	cout<<"\n0.HOME \n1.PREV \n2.KKR \n3.SRH \n4.RR \n5.RCB \n6.DD \n7.KXIP \n8.CSK \n9.MI"<<endl;
	
	cout<<"\n	Enter the Team No. of which you want to add player."<<endl;
label22:	cout<<"Your Option : ";
	cin>>y;
	switch(y)
	{
		case 0: home(); break;
		case 1: admin(); break;
		case 2: kkrwrite();break;
		case 3: srhwrite();break;
		case 4: rrwrite(); break;
		case 5: rcbwrite(); break;
		case 6: ddwrite(); break;
		case 7: kxpwrite(); break;
		case 8: cskwrite(); break;
		case 9: miwrite(); break;
		default : cout<<"\nInvalid Option\n";goto label22;break;
	}
	}
void kkrwrite()
{
		int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerkkr.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV \n";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerkkr.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}

	
void srhwrite()
{
		int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playersrh.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playersrh.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}	
}	

void rrwrite()
{
		int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerrr.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerrr.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}

void rcbwrite()
{
		int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerrcb.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerrcb.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}	
}
	
void ddwrite()
{
		int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerdd.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerdd.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}


void kxpwrite()
{
			int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerkxp.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playerkxp.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}

void cskwrite()
{
		int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playercsk.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playercsk.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
	
}

void miwrite()
{    int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more players ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many players do you want to add? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playermi.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many players do you want to append? : ";
		    cin>>n;
		    player o[n];
		    f1.open("playermi.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: addplayers();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}

}
void credits()
	{
	    int z;
		int o;
	   cout<<"\nTHIS SOFTWARE IS NON COPY WRITABLE."<<endl;
	   cout<<"\nIdea of this software given by MR. SALIL BATRA SIR."<<endl;
	   cout<<"Creater of this software is Shekhar Anand."<<endl;
	   cout<<"Some References websites for data only:-\n1.https://www.ipl.com/wikipedia \n2.http://www.espncricinfo.com"<<endl;
	   cout<<"\n\nDo you want to see some more info about founder and creater of this software? (press 1 for YES and 0 for NO)"<<endl;
	   cout<<"\nYOUR OPTION: ";
	   cin>>o;
	   if(o==1)
	   {
	   	 cout<<"\nMore Info About Founder and Creater:-";
	   	 cout<<"\nFOUNDER:- \nNAME: MR. SALIL BATRA SIR\nOcuupation: Faculty ,Lovely Professional University"<<endl;
	   	 cout<<"\nCreater:- \nName: shekhar Anand  \nOccupation: Student , Lovely Professional University \nSection: K18KH \nRoll NO.: B60"<<endl;
		 	  
	   }
	   cout<<"\n0.HOME \n1.PREV \n2.EXIT";
label16:	   cout<<"\nYour Option: ";
	   cin>>z;
	   switch(z)
	   {
	   	   case 0: home();break;
	   	   case 1: admin();break;
	   	   case 2: exit(1);cout<<"\nTerminated program.";break;
	   	   default: cout<<"\nInvalid Option"<<endl;goto label16;
	   }
	  	
	}
	void password1()
	{
		fstream obj;
		obj.open("password.txt",ios::in);
		obj>>l;
		obj.close();
	}
	void cpin()
	{
		int j;
		int e;
label10:	cout<<"\nEnter your previous pin: ";
		    cin>>j;
			fstream obj;
	     	obj.open("password.txt",ios::in);
	     	obj>>l;
	    	obj.close();
		if(j==l)
		{
			fstream obj2;
			obj2.open("password.txt",ios::out);
label11:	cout<<"\nEnter your new pin : ";
			cin>>l;
			cout<<"\nConfirm Pin : ";
			cin>>e;
			if(e==l)
			{
			obj2<<l;
			obj2.close();
			cout<<"\nPin Changed Successfully."<<endl;
		    }
		else
		    {
			cout<<"\nPin does not match."<<endl;
			goto label11;
		    }
		}
		else
		{
			cout<<"\nWrong previous pin."<<endl;
			goto label10;
		}
		cout<<"\nAvailable Option:-"<<endl;
		cout<<"\n0.Home \n1.prev \n2.Exit \n3.Restart"<<endl;
		int q;
		cout<<"\nYour Option : ";
		cin>>q;
		switch(q)
		{
			case 0: home(); break;
			case 1: admin(); break;
			case 2: 
			cout<<"\nTerminated program.";
			exit(1); break;
			case 3: 
			cout<<"Program Restarting"<<endl;
			cout<<"please wait";
			for(int y=0 ;y<2000;y++)
			{
				cout<<".";
			}
			cout<<"\n";
			password(); break;
		}
	}
void scheduleread()
{
	int n;
       fstream f2;
		 cout<<"How many Matches schedule do you want to see? : ";
		  cin>>n;
		    Tournament u[n];
		    Tournament obj;
			f2.open("schedule.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();
       int f;
		cout<<"\n0.HOME \n1.PREV \n2.MATCHES DETAILS AFTER PLAYED";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>f;
		switch(f)
		{
			case 0: home();break;
			case 1: tournament();break;
			case 2: matchesdone();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}

void matchesdone()
{
	  fstream f2;
	  int j;
		 cout<<"How many Matches do you want to see? : ";
		  cin>>j;
		  cout<<"\n";
		    matches u[j];
		    matches obj;
			f2.open("allmatches.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<j;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_data();
			}
			f2.close();
		cout<<"\n0.HOME \n1.PREV \n2.UPDATE DETAILS OF MATCHES \n3.SEARCH AND SEE INDIVIDUALLY" ;
label29:		cout<<"\nYOUR OPTION : ";
		int f;
		cin>>f;
		switch(f)
		{
			case 0: home();break;
			case 1: scheduleread();break;
			case 2: matchesdoneupdate();break;
			case 3: matchesdonesearch();break;
			default : cout<<"\nInvalid Option.";
			goto label29;
			break;
			}	
	

}
void matchesdoneupdate()
{
		fstream f4;
		matches f;	
		int p;
		f4.open("allmatches.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the match s.number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
			int o;
		cout<<"\n0.HOME \n1.PREV ";
		label23:		cout<<"\nYOUR OPTION : ";
		cin>>o;
		switch(o)
		{
			case 0: home();break;
			case 1: matchesdone();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}		
				
	
	
}

void matchesdonesearch()
{
		fstream f3;
		matches e;
		int t;
		f3.open("allmatches.txt",ios::in|ios::binary);
		cout<<"\nEnter match s.Number to search : ";
		cin>>t;
		int l=(t-1)*sizeof(e);
		f3.seekg(l);
		f3.read((char*)&e,sizeof(e));
		e.showdata();
		e.show_data();
	int o;
		cout<<"\n0.HOME \n1.PREV ";
		label23:		cout<<"\nYOUR OPTION : ";
		cin>>o;
		switch(o)
		{
			case 0: home();break;
			case 1: matchesdone();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}			
			
	
}
void matchesdonewrite()
{
	int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more Matches played (press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many Matches played do you want to add? : ";
		    cin>>n;
		    matches o[n];
		    f1.open("allmatches.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n matches added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many played Matches do you want to append? : ";
		    cin>>n;
		    matches o[n];
		    f1.open("allmatches.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Matches appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}
void searchandupdate()
{
		fstream f3;
			Tournament obj;
		int t,p;
		f3.open("schedule.txt",ios::in|ios::binary);
		cout<<"\nEnter Match No. to search : ";
		cin>>t;
		
		int l=(t-1)*sizeof(obj);
		f3.seekg(l);
		f3.read((char*)&obj,sizeof(obj));
		obj.showdata();
		obj.show_data();	
	cout<<"\n\nDo you want to make changes in this schedule? (press 1 for yes and 0 for no): ";
label12:	cout<<"\nYour Option : ";
	cin>>p;
	if(p==1)
	{
	   	fstream f4;
		Tournament f;	
		int p;
		f4.open("schedule.txt",ios::ate|ios::in|ios::out|ios::binary);
		int num=f4.tellp()/sizeof(f);
		cout<<"\nEnter the Match number whose data has to be updated : ";
		cin>>p;
			int l=(p-1)*sizeof(f);	
		f4.seekp(l);
		cout<<"\n\nEnter New Details:-"<<endl;
		f.read_data();	
		f4.write((char*)&f,sizeof(f));
		f4.seekg(0);
		cout<<"\n\n        FILE UPDATED......  "<<endl;
		f.showdata();
		for(int i=0;i<num;i++)
		{
			f4.read((char*)&f,sizeof(f));
			f.show_data();
			}
			int o;
		cout<<"\n0.HOME \n1.PREV ";
		label23:		cout<<"\nYOUR OPTION : ";
		cin>>o;
		switch(o)
		{
			case 0: home();break;
			case 1: tournament();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
					
		
	}
	else if(p==0)
	{
			int u;
		cout<<"\n0.HOME \n1.PREV ";
		label29:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: tournament();break;
			default : cout<<"\nInvalid Option.";
			goto label29;
			break;
			}
}
	else
	{
		cout<<"\nInvalid Option\n";
		goto label12;
	}
}
void semifinalwrite()
{
		
		cout<<"\nTEAMS SELECTED FOR SEMIFINAL:-"<<endl;
		matches ok;
		ok.readsemi();
	
		  fstream f1;
	     
		    matches o[2];
		    f1.open("semifinal.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<2;i++)
		    {
		    	o[i].read_datasemi();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n data added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}



void finalwrite()
{
	    matches on;
	    cout<<"\nTEAM SELECTED FOR FINAL:-"<<endl;
	    
	    on.readfinal();
		
		  fstream f1;
	      matches ob;
		    f1.open("final1.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    ob.read_datafinal();
		    f1.write((char *)&ob,sizeof(ob));
			cout<<"\n\n Data added successfully...."<<endl;
			f1.close();
		    int u;
		    cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
	        	cin>>u;
	        	switch(u)
		       {
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
		    	}	
        }
	
void playerwise()
{
  
  allteam k;
  int x;
  k.readteamplayer();
label29:  cout<<"\nEnter the s.no. of team to see the player performance : ";
  cin>>x;
  
  switch(x)
  
		{
		case 0: home();break;
	/*	case 1:  kkrreadplayerwise();	break;
        case 2:  srhreadplayerwise();break;
		case 3:  ddreadplayerwise();break;
		case 4:  kxpreadayerwise();	break;
	    case 5:  rcbreadplayerwise();	break;
	    case 6:  rrreadplayerwise();	break;
	    case 7:  cskreadplayerwise();	break;*/
	    case 8: mireadplayerwise();	break;
			
			case 9: tournament();break;
		  
			default : cout<<"\nInvalid Option.";
			goto label29;
			break;
			}
  }
  		
		



void mireadplayerwise()
	{
		
		fstream f2;
	     int h;
	     cout<<"Enter no of player performance in mumbai indian you want to see : ";
	     cin>>h;
		    matches u[h];
		    matches obj;
			f2.open("miplayerwise.txt",ios::in|ios::binary);
			obj.showdataplayerwise();
			for(int i=0;i<h;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_dataplayerwise();
			}
			f2.close();
		cout<<"\n0.HOME \n1.PREV " ;
label29:		cout<<"\nYOUR OPTION : ";
		int f;
		cin>>f;
		switch(f)
		{
			case 0: home();break;
			case 1: playerwise();break;
		  
			default : cout<<"\nInvalid Option.";
			goto label29;
			break;
			}
		
	}
	
	
	
	
	





			

void tournament()	
        {
        	int u;
	         cout<<"\n                 YOU ARE WELCOME TO THE TOURNAMENT ";
	         cout<<"\n\n0.HOME \n1.SCHEDULE \n2.SEARCH MATCHES SCHEDULE AND UPDATE \n3.SEMI FINAL \n4.FINAL \n5.PLAYERS PERFORMANCE"<<endl;
			
	label12:         cout<<"Your Option: ";
	         cin>>u;
	        switch(u)
	        {
	        	case 0: home();break;
	        	case 1: scheduleread();break;
	        	case 2: searchandupdate();break;
	        	case 3: semifinal();break;
	        	case 4: final();break;
	        	case 5: playerwise();break;
				default : cout<<"\nInvalid Option.";
				goto label12;
			}
}
void semifinal()
{
          fstream f2;
	     
		    matches u[2];
		    matches obj;
			f2.open("semifinal.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<2;i++)
			{
				f2.read((char *)&u[i],sizeof(u[i]));
				u[i].show_datasemifinal();
			}
			f2.close();
		cout<<"\n0.HOME \n1.PREV " ;
label29:		cout<<"\nYOUR OPTION : ";
		int f;
		cin>>f;
		switch(f)
		{
			case 0: home();break;
			case 1: tournament();break;
		  
			default : cout<<"\nInvalid Option.";
			goto label29;
			break;
			}	
	}

	

	
	
	
	
void final()

     {
	       int h;
		    matches a;
            fstream f2;
            cout<<"\nPRESS 1 IF YOU WANT TO SEE WHICH TEAM IS SELECTED FOR FINAL\n";
            cout<<"\nYOUR OPTION : ";
            cin>>h;
		  if(h==1){
		    cout<<"\nTEAM SELECTED FOR FINAL:-";
		    a.readfinal();
		}
		    matches u;
		    matches obj;
			f2.open("final1.txt",ios::in|ios::binary);
			obj.showdata();
			f2.read((char *)&u,sizeof(u));
				u.show_datafinal();
			
			f2.close();
		cout<<"\n0.HOME \n1.PREV" ;
label29:		cout<<"\nYOUR OPTION : ";
		int f;
		cin>>f;
		switch(f)
		{
			case 0: home();break;
			case 1: tournament();break;
		   
			default : cout<<"\nInvalid Option.";
			goto label29;
			break;
			}		
	
	
	
	
}

    	


void schedulewrite()
{
	int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more schedule (press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many Matches do you want to add? : ";
		    cin>>n;
		    Tournament o[n];
		    f1.open("schedule.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Schedule added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many Matches do you want to append? : ";
		    cin>>n;
		    Tournament o[n];
		    f1.open("schedule.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Players appended successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
	
	}
void allteamwrite()
	{
			int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more team ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		  fstream f1;
	      cout<<"\nHow many team do you want to add? : ";
		    cin>>n;
		    allteam o[n];
		    f1.open("allteam.txt",ios::out|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\n Team added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  fstream f1;
	      cout<<"\nHow many new team do you want to add? : ";
		    cin>>n;
		    allteam o[n];
		    f1.open("allteam.txt",ios::out|ios::app|ios::binary);
		    cout<<"\nEnter the Details.."<<endl;
		    for(int i=0;i<n;i++)
		    {
		    	o[i].read_data();
		    	f1.write((char *)&o[i],sizeof(o[i]));
			}
			f1.close();
			
				cout<<"\n\nNew Team added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
	
	}
	
void writeplayerwise()
{    
  allteam g;
  g.readteamplayer();
  int y;
label32:  cout<<"\nEnter the s.no of team to write the run and ball player wise : ";
  cin>>y;
  switch(y)
  {
  		case 0: home(); break;
	/*	case 1:  kkrwriteplayerwise();	break;
        case 2:  srhwriteplayerwise();break;
		case 3:  ddwriteplayerwise();break;
		case 4:  kxpayerwise();	break;
	    case 5:  rcbteplayerwise();	break;
	    case 6:  rrwriteplayerwise();	break;
	    case 7:  cskwriteplayerwise();	break;*/
	    case 8: miwriteplayerwise();	break;
	    default : cout<<"\nInvalid Option\n";goto label32;
  }
  	
	}	
	
void miplayer()
    {

	player a[n8];
		    player obj;      
	
		fstream f2;
		 cout<<"How many wicket fall in inning 1? (1 to 10): ";
		  cin>>n8;
		   
			f2.open("playermi.txt",ios::in|ios::binary);
			obj.showdata();
			for(int i=0;i<n8;i++)
			{
				f2.read((char *)&a[i],sizeof(a[i]));
				a[i].show_data();
			}
			
			f2.close();  
		
		}		
	
	
	
	
		
void miwriteplayerwise()
{
	    
	      
    int m;
	cout<<"\nEnter the details of matches played by above players:-"<<endl;
    cout<<"\nEnter no of wicket fall : ";
    cin>>m;
	int n;
	int j;
		cout<<"\nDo you want to Overwrite previous data or add more player performance ?(press 1 for overwrite and 0 to append) : ";
		cout<<"\nYour Option : ";
		cin>>j;
		if(j==1)
		{
		      fstream f1;
	     
		    matches d[m];
		    f1.open("miplayerwise.txt",ios::out|ios::binary);
		    
		    for(int i=0;i<m;i++)
		    {
		    	d[i].read_dataplayerwise();
		    	f1.write((char *)&d[i],sizeof(d[i]));
			}
			f1.close();
			
				cout<<"\n\n Team added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label23:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label23;
			break;
			}	
}
	else if(j==0)
	{
		  int n;
		  fstream f1;
	      cout<<"\nHow many new player match do you want to add? : ";
		    cin>>n;
		    matches k[n];
		    f1.open("miplayerwise.txt",ios::out|ios::app|ios::binary);
		   
		    for(int i=0;i<n;i++)
		    {
		    	k[i].read_dataplayerwise();
		    	f1.write((char *)&k[i],sizeof(k[i]));
			}
			f1.close();
			
				cout<<"\n\nData added successfully...."<<endl;
			f1.close();
		int u;
		cout<<"\n0.HOME \n1.PREV ";
label20:		cout<<"\nYOUR OPTION : ";
		cin>>u;
		switch(u)
		{
			case 0: home();break;
			case 1: admin();break;
			default : cout<<"\nInvalid Option.";
			goto label20;
			break;
			}	
	}
}
	
	
void admin()
		{
		
			cout<<"\n\n0.HOME \n1.CHANGE PIN \n2.CREDITS \n3.ADD PLAYERS \n4.ADD OWNER \n5.ADD UMPIRE  \n6.ADD COACH \n7.ADD STADIUM \n8.ADD SCHEDULE OF MATCHES \n9.ADD MATCHES DATA AFTER PLAYED \n10.ADD MATCHES DATA OF SEMIFINAL \n11.ADD MATCHES DATA OF FINAL \n12.ADD TEAM \n13.ADD PLAYER WISE PERFORMANCE";
			
		
	label14:	cout<<"\n\nYour Option:";
		cin>>k;
		switch(k)
		{
			case 0: home();break;
			case 1: cpin();break;
			case 2: credits();break;
			case 3: addplayers();break;
			case 4: ownerwrite();break;
			case 5: umpirewrite();break;
			case 6: coachwrite();break;
			case 7: stadiumwrite();break;
			case 8: schedulewrite();break;
			case 9: matchesdonewrite();break;
			case 10: semifinalwrite();break;
			case 11: finalwrite();break;
			case 12: allteamwrite();break;
			case 13: writeplayerwise();break;
		    default: cout<<"\nInvalid option"<<endl;goto label14;
		}
		
	}	
	
	
											
							
};
int main()
{ 
    cout<<setw(100)<<"VIVO******************INDIAN PREMIER LEAGUE*****************VIVO\n"<<endl;
    cout<<"FOR THE SECURITY PURPOSE THIS SOFTWARE IS PIN PROTECTED.\n\n";
    cout<<"Enter 1234 as a PIN to access this software"<<endl;
    cout<<"\nYou can change your pin (Admin --> changepin) \n"<<endl;
	process obj1;
	obj1.password();
	return 0;
	system("pause");
}
