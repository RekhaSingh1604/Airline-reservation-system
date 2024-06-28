#include <iostream>
#include<fstream>

using namespace std;

void mainMenu();

class Management
{
    public:
     Management()
         {
          mainMenu();
     }
     };
     class details
	 {

         public:
          static string name,gender;
         int phoneno;
         int age;
         string add;
          int cId;
         char arr[100];
         void information()
         {
             cout<<"\n Enter the customer ID:";
             cin>>cId;
cout<<"\n Enter the name:";
             cin>>name;
             cout<<"\n Enter the age:";
             cin>>age;
             cout<<"\n Enter the address:";
             cin>>add;
             cout<<"\n Enter the gender:";
             cin>>gender;
             cout<<"Your details are saved with us\n"<<endl;
         }
         };
          int cId;
         string details::name;
     string details::gender;

     class registration {
         public:
         static int choice;
         int choice1;
         int back;
         static float charges;

         void flights()
         {
             string flightsN[]={"Dubai","Canda","UK","USA","Australia","Europe"};

             for(int a=0; a<6; a++)
             {
                 cout<<(a+1)<<".flight to" <<flightsN[a]<<endl;
                        }
         cout<<"Welcome to the Airlines:"<<endl;
         cout<<"Press their number of the country of which you want to book the flight:";
         cin >> choice;
         switch(choice)
         {
case 1:
             {
                 cout<<"__Welcome to dubai Emirates_\n"<<endl;
cout<<"Your comfort is our priority.Enjoy the journey:"<<endl;
cout<<"following are the filghts\n"<<endl;
cout<<"1, DUB- 498" <<endl;
cout<<"\t 03.01.2023 8:00AM 10hrs Rs.14000"<<endl;
             cout<<"1, DUB- 658"<<endl;
cout<<"\t 03.01.2023 9:00AM 12hrs Rs.10000"<<endl;
                 cout<<"1, DUB- 588"<<endl;
cout<<"\t 01.2023 10:00AM 14hrs Rs.9000"<<endl;

cout<<"\nselecte the filght you want to back:";
cin>>choice1;
if(choice1==1)
{
    charges=14000;
    cout<<"\nyou have succesgully booked the filght DUB-498"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==2)
{
    charges=10000;
    cout<<"\nyou have succesgully booked the filght DUB-658"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==3)
{
    charges=90000;
    cout<<"\nyou have succesgully booked the filght DUB-588"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else{
    cout<<"invalid input,shifting to the pervious menu"<<endl;


}
cout<<"Press any key to go back to the main menu:"<<endl;
cin>>back;
if(back==1)
{
    mainMenu();
}
else
{
    mainMenu();
}

};
                            case 2:
{
     cout<<"__Welcome to canadian Airlines_\n"<<endl;
cout<<"Your comfort is our priority.Enjoy the journey:"<<endl;
cout<<"following are the filghts \n"<<endl;
            cout<<"1, CA- 198"<<endl;
cout<<"\t 02.01.2023 2:00PM 1hrs Rs.15000"<<endl;
             cout<<"2, CA- 858"<<endl;
cout<<"\t 05.01.2023 6:00AM 2hrs Rs.40000"<<endl;
                 cout<<"3, CA-234"<<endl;
cout<<"\till.06.2023 10:00PM 4hrs Rs.6700"<<endl;

cout<<"\nselecte the filght you want to back:";
cin>>choice1;
if(choice1==1)
{
    charges=15000;
    cout<<"\nyou have succesgully booked the filght CA-198"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==2)
{
    charges=40000;
    cout<<"\nyou have succesgully booked the filght CA-858"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==3)
{
    charges=6700;
    cout<<"\nyou have succesgully booked the filght CA-198"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else{
    cout<<"invalid input,shifting to the pervious menu"<<endl;
   flights();

}
cout<<"Press any key to go back to the main menu:"<<endl;
cin>>back;
if(back==1)
{
    mainMenu();
}
else
{
    mainMenu();
}

}
                    case 3:
{
cout<<"__Welcome to UK  Airways_\n"<<endl;
cout<<"Your comfort is our priority.Enjoy the journey:"<<endl;
cout<<"following are the filghts\n"<<endl;

                 cout<<"1, UK- 798"<<endl;
cout<<"\t12.01.2023 11:00AM 5hrs Rs.90000"<<endl;

cout<<"\nselecte the filght you want to back:";
cin>>choice1;
if(choice1==1)
{
    charges=90000;
    cout<<"\n you have succesfully booked the filght UK-798"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}

else{
    cout<<"invalid input,shifting to the pervious menu"<<endl;
    flights();

}
cout<<"Press any key to go back to the main menu:"<<endl;
cin>>back;
if(back==1)
{
    mainMenu();
}
else
{
    mainMenu();
}

}
                                case 4:{


 cout<<"__Welcome to US Airways_\n"<<endl;
cout<<"Your comfort is our priority.Enjoy the journey:"<<endl;
cout<<"following are the filghts\n"<<endl;
cout<<"1, US-789"<<endl;
cout<<"\t10.01.2023 300AM 10hrs Rs.19000"<<endl;
             cout<<"1, US-655"<<endl;
cout<<"\t23.01.2023 9:07PM 12hrs Rs.48000"<<endl;
                 cout<<"1, US-375"<<endl;
cout<<"\t05.01.2023 11:00AM 14hrs Rs.27000"<<endl;

cout<<"\nselecte the filght you want to back:";
cin>>choice1;
if(choice1==1)
{
    charges=19000;
    cout<<"\nyou have succesgully booked the filght US-789"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==2)
{
    charges=48000;
    cout<<"\nyou have succesgully booked the filght US-375"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==3)
{
    charges=27000;
    cout<<"\nyou have succesgully booked the filght US-375"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else{
    cout<<"invalid input,shifting to the pervious menu"<<endl;
flights();

}
cout<<"Press any key to go back to the main menu:"<<endl;
cin>>back;
if(back==1)
{
    mainMenu();
}
else
{
    mainMenu();
}

}
                              case 5:
{
     cout<<"__Welcome to Australia Airlines_\n"<<endl;
cout<<"Your comfort is our priority.Enjoy the journey:"<<endl;
cout<<"following are the filghts\n"<<endl;
cout<<"1, AS- 721"<<endl;
cout<<"\t 13.11.2023 8:00AM 10hrs Rs.25000"<<endl;
             cout<<"1, AS-722"<<endl;
cout<<"\t 13.11.2023 9:03AM 14hrs Rs.290000"<<endl;
                 cout<<"1, US- 723"<<endl;
cout<<"\t15.01.2023 10:00AM 14hrs Rs.69000"<<endl;

cout<<"\nselecte the filght you want to back:";
cin>>choice1;
if(choice1==1)
{
    charges=25000;
    cout<<"\nyou have succesgully booked the filght DUB-498"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==2)
{
    charges=290000;
    cout<<"\nyou have succesgully booked the flight DUB-658"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==3)
{
    charges=69000;
    cout<<"\nyou have succesgully booked the flight DUB-588"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else{
    cout<<"invalid input,shifting to the pervious menu"<<endl;
   flights();

}
cout<<"Press any key to go back to the main menu:"<<endl;
cin>>back;
if(back==1)
{
    mainMenu();
}
else
{
    mainMenu();
}

}
                             case 6:
{
    cout<<"__Welcome to European Airline_\n"<<endl;
cout<<"Your comfort is our priority.Enjoy the journey:"<<endl;
cout<<"following are the flights \n"<<endl;
cout<<"1, EU-678"<<endl;
cout<<"\t13.01.2023 8:00AM 10hrs Rs.15000"<<endl;
             cout<<"1, EU- 679"<<endl;
cout<<"\t 06.01.2023 08:00AM 12hrs Rs.17000"<<endl;
                 cout<<"1, EU- 670"<<endl;
cout<<"\t05.01.2023 10:00PM 14hrs Rs.90000"<<endl;

cout<<"\nselecte the filght you want to back:";
cin>>choice1;
if(choice1==1)
{
    charges=15000;
    cout<<"\nyou have succesgully booked the filght EU-678"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==2)
{
    charges=17000;
    cout<<"\nyou have succesgully booked the flight EU-679"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else if(choice1==3)
{
    charges=90000;
    cout<<"\nyou have succesgully booked the filght EU-670"<<endl;
    cout<<"you can go back to menu and take the ticket"<<endl;
}
else{
    cout<<"invalid input,shifting to the pervious menu"<<endl;
    flights();

}
cout<<"Press any key to go back to the main menu:"<<endl;
cin>>back;
if(back==1)
{
    mainMenu();
}
else
{
    mainMenu();
}

}
default:
{
    cout<<"Invalid input, shifting you to the main menu:"<<endl;
    mainMenu();
    break;
    }
         }
         }
     };
     float registration::charges;
     int registration::choice;
     
  class ticket : public registration, details {
				  public:
          void Bill()
          {
              string destination="" ;
              fstream outf
              ("record.txt");
              {
                  outf<<"______________XYZ Airlines_________________"<<endl;
                
				outf<<"________________Ticket_________________"<<endl;
                outf<<"____________________________"<<endl;
           outf<<"Customer ID:"<<details::cId<<endl;
		        outf<<"Customer Name:" <<details::name<<endl;
                outf<<"Customer Gender:" <<details::gender<<endl;
                outf<<"\t  Descreption" <<endl;
				if(registration::choice==1)
                  {
                      destination="Dubai";
                     }
                  else if(registration::choice==2)
                  {
                      destination = "Canada";
                      }
                 else if(registration::choice==3)
                  {
                      destination="UK";
                  }
                  else if(registration::choice==4)
                  {
                      destination="UK";
                  }
                 else if(registration::choice==5)
                  {
                      destination="Australia";
                      }
                  else if(registration::choice==6)
                  {
                      destination="Europe";
                      }
outf<<"Destination \t\t"<<destination<<endl;
    outf<<"flight cost :\t\t"<<registration::charges<<endl;
              }
         

		  }
          void display()
          {
		  		   fstream ifs ("records.txt");
		   {


              if(!ifs)
              {
                  cout<<"file error!"<<endl;
                  }
                   while(!ifs.eof())
          {
              ifs.getline(arr,100);
              cout<<arr<<endl;
          }
          }
          
     }
     };
         void mainMenu()
     {
         int lchoice;
         int schoice;
         int back;
         cout<<"\t     INDIGO Airline /n"<< endl;
         cout<<"\t________Main Menu______"<< endl;
 cout<<"\t_________________________________"<<endl;
  cout<<"\t\t\t\t\t\t\t"<<endl;
cout<<"\t|\t Press 1  add the customer details /t"<<endl;
cout<<"\t|\t Press 2 for flight Registration      /t"<<endl;
cout<<"\t|\t Press 3 for Ticket and charges     /t"<<endl;
cout<<"\t|\t Press 4 to Exit      /t|"<<endl;
 cout<<"\t\t\t\t\t\t\t"<<endl;
  cout<<"\t_________________________________"<<endl;
  cout<<"Enter the choice:";
  cin>> lchoice;

	details d;
  registration r;
  ticket t;
  switch(lchoice)
  {
      case 1:
      {
          cout<<"_____________Customers________/n"<<endl;
          d.information();

          cout<<"Press 1 to go back to Main menu";
          cin>>back;

          if(back==1)
          {
              mainMenu();
          }
          else
      {
          mainMenu();
      }
      break;
      }
      case 2:
      {
        cout<<"________ book a flight using this system _/n"<<endl;
        r.flights();
        break;
      }
      case 3:
      {
      cout<<"___GET YOUR TICKET_____/n"<<endl;
      t.Bill();

      cout<<"Your ticket is priented, you can collect it /n"<<endl;
      cout<<"Press 1 to display your ticket";
      cin>>back;
      if(back==1)
      {
          t.display();
          cout<<"Press any key to back to main menu";
          cin>>back;
    if(back==1)
    {
        mainMenu();
    }
    else
    {
        mainMenu();
    }
      }
      else{
          mainMenu();
      }
      break;
    }
    case 4:
    {
        cout<<"/n/n/t_______Thank you ____"<<endl;
        break;
    }
    default:
    {
        cout<<"Invalid input, Please try again\n"<<endl;
    mainMenu();
    break;
            }
          }
      }
int main()
{

        Management Mobj;
return 0;
}