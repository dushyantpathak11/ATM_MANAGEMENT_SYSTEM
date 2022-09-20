#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class atm
{
private:
    long int ACCOUNT_NUMBER;
    string NAME;
    int PIN;
    double BALANCE;
    string MOBILE_NUMBER;

public:
    void setdata(long int ACCOUNT_NUMBER_A,string NAME_A,int PIN_A,double BALANCE_A,string MOBILE_NUMBER_A)
    {
        ACCOUNT_NUMBER = ACCOUNT_NUMBER_A;
        NAME=NAME_A;
        BALANCE=BALANCE_A;
        MOBILE_NUMBER=MOBILE_NUMBER_A;
        PIN_A=PIN;
    }
    long int getaccountno()
    {
        return ACCOUNT_NUMBER;
    }
    string getname()
    {
        return NAME;
    }
    int getpin()
    {
        return PIN;
    }
    double getbalance()
    {
        return BALANCE;
    }
    string getmobileno()
    {
        return MOBILE_NUMBER;
    }
    void setmobile(string mob_p,string mob_n)
    {
        if(mob_p == MOBILE_NUMBER)
        {
            MOBILE_NUMBER = mob_n;
            cout<<endl<<"HAAN BHAI HO GAYA UPDATE";
            getch();
        }
        else
           {
             cout<<endl<<"APNA HI NUMBER BHOOL GAYA?";
        getch();
           }
    }
    void cashwithdraw(int amount_a)
    {
        if(amount_a > 0 && amount_a < BALANCE)
        {
            BALANCE-= amount_a;
            cout<<endl<< "JA SIMRAN JA JEE LE APNI ZINDAGI";
            cout<<endl<< "ARE BHAI ABHI ITNA AUR BACHA HAI"<< BALANCE;
        }
        else
         {
             cout<<endl<<"TERA BAAP YAHAN CHHOD KE GAYA THA YA TERI MAA";
             getch();
         }
    }
};

//////////////////////////////////////////////////////

int main()
{
    int choice = 0 , enterPIN;
    long int enter_account_number;


    system("cls");

    atm user1;

    user1.setdata(11102000,"DP",1110,100000,"7983255241");



        system("cls");

        cout<<endl<< "SWAGAT HAI APKA"<<endl;
        cout<<endl<< "ACCOUNT NUMBER DAALIYE";
        cin>> enter_account_number;

        cout<< endl<<"ENTER PIN";
        cin>>enterPIN;


    if (enter_account_number==user1.getaccountno() && enterPIN == user1.getpin());
    
        do
            {
               int amount = 0;
            string oldmobile,newmobile;

            system("cls");

            cout<< endl<< "SAHI ACCOUNT NUMBER DALA HAI , GOOD"<<endl;
            cout<< endl<< " HAAN BHAIYA TO KYA KARNA CHAHENGE CHOOSE KIJIYE AUR BATAIYE";
            cout<< endl<< "1. BALANCE CHECK";
            cout<< endl<< "2. CASH NIKALNA HAI";
            cout<< endl<< "3. HAMARI INFORMATION DIKHAO";
            cout<< endl<< "4. MOBILE NUMBER UPDATE KARNA HAI";
            cout<< endl<< "5. KUCH NAHI BHAI CHALTA HOON";
            cin>> choice;

            switch (choice)
               {
                    case 1:
                        cout<< endl<< "APKE PAPA KI DI HUI DHANRAASHI HAI "<<user1.getbalance();
                         getch();
                          break;
                    case 2:
                        cout<< endl<< "BATAO BHAIYA KITNA ROKDA NIKALNE KA HAI";
                        cin>> amount;
                        user1.cashwithdraw(amount);
                        break;
                    case 3:
                        cout<<endl<< "LO BHAI APNI INFORMATION";
                        cout<<endl<< "ACCOUNT NUMBER -->>" << user1.getaccountno();
                        cout<<endl<< "NAME -->>" << user1.getname();
                        cout<<endl<< "BALANCE -->>"<<user1.getbalance();
                        cout<<endl<< "MOBILE NUMBER -->> "<<user1.getmobileno();
                        getch();
                        break;
                    case 4:
                        cout<< endl<< "PEHLE PURANA NUMBER DAALO FIR NAYA DAALNA";
                        cin>> oldmobile;
                        cin>> newmobile;
                        user1.setmobile(oldmobile,newmobile);
                        break;

                    case 5:
                      exit(0);

                    default:
                        cout<<endl<< "CHOICE TO SAHI DAALTA BHALE AADMI";

                }
            }
            
        while(1);
        

    
}
















