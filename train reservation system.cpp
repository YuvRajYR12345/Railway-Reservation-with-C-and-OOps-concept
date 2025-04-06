#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;
class Train
{
	private:
		char fname[20],lname[20],add[50],email[30]; // this is for passenger details...
		int dob;
		long double mob;
		public:
			void cna()
			{
				char fullname[20];
				char username[30],pass[30];;
				system("cls");
				cout<<"\n>>>>>>>>>>>>>Creating A New Account<<<<<<<<<<<<<<<\n"<<endl;
				std::cout<<"ENTER YOUR NAME:>>>"<<std::endl;
				cin>>fullname;
				cout<<"CREATE A VALID USERNAME:>>>"<<endl;
				cin>>username;
				cout<<"CREATE A VALID PASSWORD WITH 6 DIGIT NUMBERS ONLY:>>>"<<endl;
				cin>>pass;
				cout<<"\n";
				cout<<"==YOUR ACCOUNT IS CREATED IN OUR DEPARTMENT==::::"<<endl;
				cout<<"YOUR NAME IS:>>"<<"  "<<fullname<<endl;
				cout<<"YOUR USERID IS:>>"<<"  "<<username<<endl;
				cout<<"YOUR PASSWORD IS:"<<"  "<<pass<<endl<<endl;
				cout<<"THANKU FOR USING OUR SOFTWARE:::):):)"<<endl<<endl;
				cout<<"PRESS 2 FOR FILL PASSENGER DETAILS:::)))"<<endl;
			}
			
			void passdtl()
			{
				system("cls");
				cout<<"===Welcome To The Passenger Details Form:>>==="<<endl;
				cout<<"ENTER YOUR FIRST NAME:>>>";
				cin>>fname;
				cout<<"ENTER YOUR LAST NAME:>>>";
				cin>>lname;
				cout<<"ENTER YOUR DATE OF BIRTH:>>>";
				cin>>dob;
				cout<<"ENTER YOUR ADDRESS:>>>";
				cin>>add;
				cout<<"ENTER YOUR EMAIL FOR VERIFICATION:>>>";
				cin>>email;
				cout<<"ENTER YOUR PHONE NUMBER:>>>";
				cin>>mob;
				cout<<"YOUR INFORMATION IS SAVED INTO OUR FILE...>>>)))\n"<<endl;
				cout<<"PRESS 3 KEY FOR SHOW YOUR INFORMATON:>>>"<<endl;
			}
			
			void showpassdtl()
			{
				system("cls");
				cout<<"====HERE SHOWING PASSENGER DETAILS:>>>\n"<<endl;
				cout<<"YOUR FIRST NAME IS :>>"<<fname<<endl<<endl;
				cout<<"YOUR LAST NAME IS:>>"<<lname<<endl<<endl;
				cout<<"YOUR DATE OF BIRTH IS:>>"<<dob<<endl<<endl;
				cout<<"YOUR ADDRESS IS:>>"<<add<<endl<<endl;
				cout<<"YOUR EMAIL IS:>>"<<email<<endl<<endl;
				cout<<"YOUR PHONE NUMBER IS:>>"<<mob<<endl<<endl;
				cout<<"\t===NOW YOU CAN RESERVED YOUR SEAT===:>>"<<endl;
			}
			private:
			int resage,resdate,restno,press,sel,atmth,cvv,otp;
			double long mblno,bnkno,atmno;
			char resgnd[20],accname[30],resbth[20],resname[30],restname[30],resfrom[30],resto[20],upid[30],bank[30],ifsc[20],quota[30],cls[30];// this is for train reservation
			public:
				
			void trainres()
			{
				system("cls");
				cout<<"<<<<<<<<<<<==== TRAIN   RESERVATION  ====>>>>>>>>>>>>"<<endl;
				cout<<"ENTER YOUR FIRST NAME:>>"<<endl;
				cin>>resname;
				cout<<"ENTER YOUR AGE:>>"<<endl;
				cin>>resage;
				cout<<"ENTER YOUR GENDER:>>"<<endl;
				cin>>resgnd;
				cout<<"ENTER QUOTA:>>"<<endl;
				cin>>quota;
				cout<<"ENTER YOUR CLASS:>>"<<endl;
				cin>>cls;
				cout<<"ENTER YOUR BERTH:>>"<<endl;
				cin>>resbth;
				cout<<"ENTER THE DATE OF JOURNEY [dd-mm-yy] DO NOT USING ANY SPACE OR ANY SYMBOL:>>"<<endl;
				cin>>resdate;
				cout<<"ENTER TRAIN NUMBER:>>"<<endl;
				cin>>restno;
				cout<<"ENTER TRAIN NAME:>>"<<endl;
				cin>>restname;
				cout<<"DESTINATION FROM:>>"<<endl;
				cin>>resfrom; 
				cout<<"DESTINATION TO:>>"<<endl;
				cin>>resto;
				cout<<"PASSENGER MOBILE NUMBER:>>"<<endl;
				cin>>mblno;
				cout<<"PRESS 0 FOR PAYMENT OPTION:>>"<<endl;
				cin>>press;
				system("cls");
				cout<<"\n====HERE WE CAN COLLECT MONEY===="<<endl<<endl;
				cout<<"**********YOU CAN SELECT MULTIPLE OPTION TO PAY :>>\n"<<endl;
				cout<<"PRESS 1 FOR UPI ID:>>\n"<<endl;
				cout<<"PRESS 2 FOR CREDIT CARD / DEBIT CARD:>>\n"<<endl;
				cout<<"PRESS 3 FOR BANK ACCOUNT NUMBER:>>\n"<<endl;
				cout<<"PRESS 4 FOR EXIT PAYMENT OPTION:>>"<<endl;
				cin>>sel;
				if(sel==1)
				{
					system("cls");
					cout<<"YOUR ARE SELECTING THE PAYMENT METHOD IS UPI ID:>>\n"<<endl;
					cout<<"ENTER YOUR UPI ID:>>\n"<<endl;
					cin>>upid;
					cout<<"A 4 DIGIT OTP IS GONE INTO YOUR MOBILE NUMBER:>>"<<endl;
					cin>>otp;
					cout<<"YOUR PAYMENT IS SUCCESSFULLY DONE::::"<<endl;
					cout<<"YOU MAY COLLECT YOUR TICKET NOW:::"<<endl;
					cout<<"PRESS 5 FOR YOUR TICKET IS:>>"<<endl;
				}
				else if(sel==2)
				{
					system("cls");
					cout<<"YOUR ARE SELECTING THE PAYMENT METHOD IS CREDIT CARD / DEBIT CARD:>>\n"<<endl;
					cout<<"ENTER YOUR CREDIT / DEBIT NUMBER:>>\n"<<endl;
					cout<<"ENTER NUMBER:>>"<<endl;
					cin>>atmno;
					cout<<"ENTER CARD HOLDER NAME:>>"<<endl;
					cin>>accname;
					cout<<"ENTER MONTH:>>"<<endl;
					cin>>atmth;
					cout<<"ENTER CVV CODE:>>"<<endl;
					cin>>cvv;
					cout<<"A 4 DIGIT OTP IS GONE INTO YOUR MOBILE NUMBER:>>"<<endl;
					cin>>otp;
					cout<<"YOUR PAYMENT IS SUCCESSFULLY DONE::::"<<endl;
					cout<<"YOU MAY COLLECT YOUR TICKET NOW:::"<<endl;
					cout<<"PRESS 5 FOR YOUR RESERVED TICKET IS:>>"<<endl;
				}
				else if(sel==3)
				{
					system("cls");
					cout<<"YOUR ARE SELECTING THE PAYMENT METHOD IS BANK ACCOUNT:>>\n"<<endl;
					cout<<"ENTER YOUR BANK ACCOUNT DETAILS:>>\n"<<endl;
					cout<<"ENTER YOUR BANK:>>>"<<"(Example are >> SBI,PNB,HDFC,WB,BOB)\n"<<endl;
					cin>>bank;
					cout<<"ENTER ACCOUNT HOLDER NAME:>>"<<endl;
					cin>>accname;
					cout<<"ENTER BANK ACCOUNT NUMBER:>>"<<endl;
					cin>>bnkno;
					cout<<"ENTER IFSC CODE:>>"<<endl;
					cin>>ifsc;
					cout<<"A 4 DIGIT OTP IS GONE INTO YOUR MOBILE NUMBER:>>"<<endl;
					cin>>otp;
					cout<<"YOUR PAYMENT IS SUCCESSFULLY DONE::::"<<endl;
					cout<<"YOU MAY COLLECT YOUR TICKET NOW:::"<<endl;
					cout<<"PRESS 5 FOR YOUR RESERVED TICKET IS:>>"<<endl;
				}
				else
				{
					cout<<"YOU ENTERED WRONG NUMBER::/ INVALID NUMBER:>>"<<endl;
				}
			}
	
			void showres()
			{
				system("color 3e");
				system("cls");
				long pnrno=248001;
				long double tdid=100123635;
				int seatno=45;
				char status[10]="CNF";
				int amt=10000;
				cout<<"\n\t*****************************************************\n"<<endl;
				cout<<"\t===============  YOUR   TICKET   IS  ====================\n"<<endl;
				cout<<"\t*******************************************************\n"<<endl;
				cout<<"YOUR P N R NUMBER IS:>>"<<pnrno<<endl<<endl;
				cout<<"NAME :>>"<<resname<<endl<<endl;
				cout<<"AGE :>>"<<resage<<endl<<endl;
				cout<<"GENDER:>>"<<resgnd<<endl<<endl;
				cout<<"QUOTA :>>"<<quota<<endl<<endl;
				cout<<"CLASS :>>"<<cls<<endl<<endl;
				cout<<"BERTH :>>"<<resbth<<endl<<endl;
				cout<<"BOARDING DATE :>>"<<resdate<<endl<<endl;
				cout<<"TRAIN NUMBER :>>"<<restno<<endl<<endl;
				cout<<"TRAIN NAME :>>"<<restname<<endl<<endl;
				cout<<" DESTINATION FROM :>>"<<resfrom<<endl<<endl;
				cout<<" DESTINATION TO :>>"<<resto<<endl<<endl;
				cout<<" MOBILE NUMBER :>>"<<mblno<<endl<<endl;
				cout<<" SEAT IS :>>"<<seatno<<endl<<endl;
				cout<<" STATUS IS :>>"<<status<<endl<<endl;
				cout<<" TRANSACTION ID IS:>>"<<tdid<<endl<<endl;
				cout<<" TOTAL AMOUNT :>>"<<amt<<endl<<endl;
				cout<<"\t===  THANKYOU   AND   HAVE   A   NICE   DAY  ==="<<endl<<endl;
				cout<<"\t*****ENJOY   YOUR   SAFE   JOURNEY******"<<endl<<endl;
			}
			
			void canceltkt()
			{
				system("cls");
				long double pnrno=248001;
				int seatno=45;
				char status[10]="CNF";
				cout<<"=====  ***WELCOME  TO  THE  CANCELATION  DEPARTMENT***  =====:>>"<<endl<<endl;
				cout<<"YOUR P N R NUMBER IS>>>"<<"  "<<pnrno<<endl<<endl;
				cout<<"***** THE CANCELATION PROCESS IS NOW BEGIN!!! PLEASE WAIT *****:>>>>"<<endl<<endl;
				cout<<"NAME :>>"<<resname<<endl<<endl;
				cout<<"AGE :>>"<<resage<<endl<<endl;
				cout<<"GENDER:>>"<<resgnd<<endl<<endl;
				cout<<"QUOTA :>>"<<quota<<endl<<endl;
				cout<<"CLASS :>>"<<cls<<endl<<endl;
				cout<<"BERTH :>>"<<resbth<<endl<<endl;
				cout<<"BOARDING DATE :>>"<<resdate<<endl<<endl;
				cout<<"TRAIN NUMBER :>>"<<restno<<endl<<endl;
				cout<<"TRAIN NAME :>>"<<restname<<endl<<endl;
				cout<<" DESTINATION FROM :>>"<<resfrom<<endl<<endl;
				cout<<" DESTINATION TO :>>"<<resto<<endl<<endl;
				cout<<" MOBILE NUMBER :>>"<<mblno<<endl<<endl;
				cout<<" SEAT IS :>>"<<seatno<<endl<<endl;
				cout<<" STATUS IS :>>"<<status<<endl<<endl;
			}
			
			void histry()
			{
				system("color 3e");
				system("cls");
				cout<<"=========================  HISTORY  OF  RAILWAYS  ============================"<<endl<<endl;
				cout<<"Its Native Name is BHARTIYA REL::"<<endl;
				cout<<"It is founded in 8 MAY 1845 (177 YEARS AGO)"<<endl;
				cout<<"The Railway Headquartes are located in India is--  NEW DELHI, INDIA"<<endl;
				cout<<"The Owner of Railway is -- MINISTRY OF RAILWAYS GOVT. OF INDIA::"<<endl;
				cout<<"The Services Of Railways Are::"<<endl;
				cout<<"1:> PASSENGER RAILWAYS:"<<endl;
				cout<<"2:> FREIGHT SERVICES:"<<endl;
				cout<<"3:> PARCEL CARRIER:"<<endl;
				cout<<"4:> CATERING AND TOURISM SERVICES:"<<endl;
				cout<<"5:> PARKING LOT OPERATIONS:"<<endl;
				cout<<"6:> OTHER RELATED SERVICES:"<<endl;  
				cout<<"The first railway proposals for India were made in Madras in 1832.[10] The country's first transport train, Red Hill Railway (built by Arthur Cotton to transport granite for road-building), ran from Red Hills to the Chintadripet bridge in Madras in 1836-1837.[10] In 1845, the Godavari Dam Construction Railway was built by Cotton at Dowleswaram in Rajahmundry, to supply stone for the construction of a dam over the Godavari River. In 1851, the Solani Aqueduct Railway was built by Proby Cautley in Roorkee to transport construction materials for an aqueduct over the Solani River.[10] These railway tracks were dismantled after these projects were completed and no longer exist.";
			}
			
			void running()
			{
				system("color 3e");
				system("cls");
				cout<<"====================  TRAIN  RUNNING  IN  INDIA  ============================"<<endl<<endl;
				cout<<"THERE ARE MANY TRAINS RUNNING IN INDIA WE HAVE SOME SELECTED NAMES GIVEN BELOW::"<<endl;
				cout<<"1:> VANDE  BHARAT"<<endl;
				cout<<"2:> SHATABDI EXPRESS"<<endl;
				cout<<"3:> RAJDHANI EXPRESS"<<endl;
				cout<<"4:> GATIMAAN EXPRESS"<<endl;
				cout<<"5:> TEJAS EXPRESS"<<endl;
				cout<<"6:> DURUNTO EXPRESS"<<endl;
				cout<<"7:> HUMSAFAR EXPRESS"<<endl;
				cout<<"8:> JAN SHATABDI EXPRESS"<<endl;
				cout<<"9:> JANATA EXPRESS"<<endl;
				cout<<"10:> YUVA EXPRESS"<<endl;
				cout<<"11:> UDAY EXPRESS"<<endl;
				cout<<"12:> INTERCITY EXPRESS"<<endl;
				cout<<"13:> GARIB RATH EXPRESS"<<endl;
				cout<<"14:> DOON EXPRESS"<<endl;
				cout<<"15:> KAVI GURU EXPRESS"<<endl;
				cout<<"16:> VIVEK EXPRESS"<<endl;
				cout<<"17:> MAHAMANA EXPRESS"<<endl;
				cout<<"18:> SUVIDHA EXPRESS"<<endl;
				cout<<"19:> MOUNTAIN RAILWAYS"<<endl;
				cout<<"20:> RAJYA RANI EXPRESS"<<endl<<endl;
				cout<<"============================"<<endl;
			}
			
			void list()
			{
				system("color 3e");
				system("cls");
				cout<<"====================  LIST  OF  STATIONS  IN  INDIA  ============================"<<endl<<endl;
				cout<<"THERE ARE MANY STATIONS IN INDIA WE HAVE SOME SELECTED NAMES GIVEN BELOW::"<<endl;
				cout<<"1:> DEHRADUN TERMINAL"<<endl;
				cout<<"2:> HARIDWAR JUNCTION"<<endl;
				cout<<"3:> LAKSAR JUNCTION"<<endl;
				cout<<"4:> ALLAHABAD JUNCTION"<<endl;
				cout<<"5:> VARANASI JUNCTION"<<endl;
				cout<<"6:> BHADOHI STATION"<<endl;
				cout<<"7:> LUCKNOW JUNCTION"<<endl;
				cout<<"8:> SUBEDARGANJ STATION"<<endl;
				cout<<"9:> MORADABAD JUNCTION"<<endl;
				cout<<"10:> OLD DELHI STATION"<<endl;
				cout<<"11:> RAIBAREILY JUNCTION"<<endl;
				cout<<"12:> BARIELY JUNCTION"<<endl;
				cout<<"13:> SAHARANPUR STATION"<<endl;
				cout<<"14:> INDORE JUNCTION"<<endl;
				cout<<"15:> HARRAWALA STATION"<<endl;
				cout<<"16:> HOWRAH JUNCTION"<<endl;
				cout<<"17:> PT.DEEN DAYAL UPADHYAY JUNCTION"<<endl;
				cout<<"18:> MUMBAI CENTRAL"<<endl;
				cout<<"19:> GYANPUR ROAD"<<endl;
				cout<<"20:> KALYAN JUNCTION"<<endl<<endl;
				cout<<"============================"<<endl;
			}
};

int main()
{
	system("color 0f");
	Train train;
	int select,select2,select3,slt; //THIS IS FOR TRAIN SELECTION INTEGER DATA TYPES;;;
	cout<<"\n=============================================================================="<<endl;
	cout<<"==================:):) WELCOME TO RAILWAY DEPARTMENT (:(:==================="<<endl;
	cout<<"==============================================================================\n"<<endl;
	cout<<"============:):) HERE YOU CAN KNOW MORE ABOUT RAILWAY (:(:============"<<endl;
	cout<<"==============================================================================\n"<<endl;
	cout<<"============:):) HERE YOU CAN RESERVED YOUR TRAIN SEATS (:(:============"<<endl;
	cout<<"==============================================================================\n"<<endl;
	cout<<"\t PRESS 1 KEY FOR ENTERING RAILWAY WORLD:):)\n"<<endl;
	cout<<"\t PRESS 0 FOR EXIT FROM THE RAILWAY DEPARTMENT:):)\n"<<endl;
	cout<<"PLEASE SELECT HERE YOUR OPTION:):)"<<"  ";
	cin>>select;
	switch(select)
		{
		case 1:
			system("cls");
			while(1)
			{
			cout<<"\n\n================Welcome To The RAILWAY Department===========\n"<<endl;
			cout<<"=================================================================\n"<<endl;
				cout<<"\t0:) KNOW MORE ABOUT RAILWAY IN OUR COUNTRY:):)"<<endl;
				cout<<"\t ************************************************"<<endl;
				cout<<"\t YOU HAVE TO CREATE AN ACCOUNT FOR FURTHER PROCESSING :::"<<endl;
				cout<<"\t1:) CREATE AN ACCOUNT:):)"<<endl;
				cout<<"\t2:) PASSENGER DETAILS:):)"<<endl;
				cout<<"\t3:) SHOW PASSENGER DETAILS:):)"<<endl;
				cout<<"\t4:) TRAIN RESERVATION :):)"<<endl;
				cout<<"\t5:) SHOW TICKET OF RESERVATION:):)"<<endl;
				cout<<"\t6:) CANCEL RESERVATION :):)"<<endl;
				cout<<"\t7:) EXIT FROM TRAIN RESERVATION DEPARTMENT SOFTWARE:):)\n"<<endl;
				cout<<"PLEASE CHOOSE:):)"<<"  ";
				cin>>select2;
				if(select2==0)
				{
					system("cls");
					cout<<"PRESS 1 FOR HISTORY OF RAILWAYS:>>"<<endl<<endl;
					cout<<"PRESS 2 FOR TRAINS RUNNING IN INDIA:>>"<<endl<<endl;
					cout<<"PRESS 3 FOR LIST OF RAILWAY STATION IN INDIA:>>"<<endl<<endl;
					cout<<"PRESS ANY KEY TO EXIT....::"<<endl<<endl;
					cin>>select3;
					if(select3==1)
					{
						train.histry();
					}
					else if(select3==2)
					{
						train.running();
					}
					else if(select3==3)
					{
						train.list();
					}
					else
					{
						cout<<"WRONG ENTERED NUMBER:>\n SORRY!!!"<<endl<<endl;
					}
				}
				else if(select2==1)
				{
					train.cna();
				}
				else if(select2==2)
				{
					train.passdtl();
				}
				else if(select2==3)
				{
					train.showpassdtl();
				}
				else if(select2==4)
				{
					system("color f0");
					train.trainres();
				}
				else if(select2==5)
				{
					train.showres();
				}
				else if(select2==6)
				{
					long double pnrno;
					cout<<"**********************************"<<endl<<endl;
					cout<<"=========CANCELING TICKET========="<<endl<<endl;
					cout<<"**********************************"<<endl<<endl;
					cout<<" YOUR P N R NUMBER IS :>>>"<<endl;
					cin>>pnrno;
					if(pnrno==248001)
					{
						train.canceltkt();	
					}
					else
					{
						cout<<" PLEASE ENTER VALID P N R NUMBER :::"<<endl;
					}
					cout<<" ARE YOU SURE YOU WANT TO CANCEL YOUR CONFIRM TICKET:>>>>"<<endl<<endl;
					cout<<"PRESS 1 FOR CONFIRM TO CANCEL TICKET:>>>"<<endl<<endl;
					cout<<"PRESS 2 FOR RETURN BACK TO THE RESERVATION DEPARTMENT :>>>"<<endl<<endl;
					cout<<"PRESS ANY KEY FOR EXIT FROM THE FULL RESERVATION DEPARTMENT:>>>"<<endl;
					cin>>slt;
					if(slt==1)
					{
						cout<<"\t================ YOUR  TICKET  IS  CANCELLED ================="<<endl<<endl;
						cout<<"\t*** A  VERY  GRATEFUL  TIME  SPENT  WITH  YOU  THANKYOU  HAVE  A  NICE  DAY  ***"<<endl;
					}
					else if(slt==2)
					{
						cout<<"====== YOU CHOOSE RIGHT DECISION  NOT TO CANCEL YOUR TICKET ======="<<endl<<endl;
						
					}
					else
					{
						cout<<"THANKYOU FOR NOT CANCELING YOUR TICKET::::"<<endl<<endl;
					}
				}
				else
				{
					cout<<"NOW YOU ARE LEAVING FROM TRAIN DEPARTMENT SOFTWARE:::"<<endl;
					cout<<"=================THANKYOU==========="<<endl;
					return 1;
				}
			}
			break;
			default:
				cout<<"=====You Are Out From The Reservation Software=====\n\t========Thankyou====="<<endl;
				return 1;
				break;
	}
	return 0;
}
