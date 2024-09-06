#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class bank
{
    float balance;
    string id,pass,name,fname,address,phone,pin;

    public:
    void menu();
    void bank_man();
    void atm_man();
    void Exit();
    void new_user();
    void alr_user();
    void deposite();
    void withdraw();
    void transfer();
    void payment();
    void search();
    void edit();
    void del();
    void show_rec();
    void show_pay();
    void user_balance();
    void with_atm();
    void details();
};

void introduction()
{
    system("cls");
    cout<<"\n\n\n\n\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    cout<<"\n\t ";
    for(int i=1;i<=58;i++)
        cout<<"*";
    cout<<"\n\t  ";
    for(int i=1;i<=56;i++)
        cout<<"*";
    cout<<"\n\n\t\t\tBank & ATM Management System\n\n\t\t\t\tProject in C++\n\n\t  ";
    for(int i=1;i<=56;i++)
        cout<<"*";
    cout<<"\n\t ";
    for(int i=1;i<=58;i++)
        cout<<"*";
    cout<<"\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    getch();
    system("cls");
    cout<<"\n\n\n\n\n\t";
    for(int i=1;i<=70;i++)
        cout<<"*";
    cout<<"\n\t";
    for(int i=1;i<=70;i++)
        cout<<"*";
    cout<<"\n\n\t\t\tSoftware Developer Introdunction";
    cout<<"\n\n\n\tName: \t\t\t\t\t Divyansh Deshmukh";
    cout<<"\n\n\tDegree: \t\t\t\t B.Tech(C.S.)";
    cout<<"\n\n\tInstagram: \t\t\t\t divyansh_5500";
    cout<<"\n\n\tLinkdin: \t\t\t\t www.linkedin.com/in/divyansh-deshmukh";
    cout<<"\n\n\tContact: \t\t\t\t 7489894892";
    cout<<"\n\n\tInstitute: \t\t\t\t Acropolis Institute of Technology";
    cout<<"\n\n\t";
    for(int i=1;i<=70;i++)
        cout<<"*";
    cout<<"\n\t";
    for(int i=1;i<=70;i++)
        cout<<"*";
    getch();
}

void bank::menu()
{
    p:
    system("cls");
    int choice;
    char ch;
    string pin,pass,email;
    cout<<"\n\n\t\t\tControl Panel";
    cout<<"\n\n 1. Bank Management";
    cout<<"\n\n 2. ATM Management";
    cout<<"\n\n 3. Exit";
    cout<<"\n\n Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            system("cls");
            cout<<"\n\n\t\t\tLogin Account";
            cout<<"\n\n E-mail : ";
            cin>>email;
            cout<<"\n\n Pin Code : ";
            for(int i=1;i<=5;i++)
            {
                ch=getch();
                pin+=ch;
                cout<<"*";
            }
            cout<<"\n\n Password : ";
            for(int i=1;i<=5;i++)
            {
                ch=getch();
                pass+=ch;
                cout<<"*";
            }
            if(email == "divyansh@gmail.com" && pin == "12345" && pass == "54321")
            {
                bank_man();
            }
            else
            {
                cout<<"\n\n Your E-mail/Pin/Password is wrong...";
            }
            break;
        case 2: 
            atm_man();
            break;
        case 3:
            system("cls");
            cout<<"\t\tThank You... for using our services\n"; 
            cout<<"\t\t\t\t:-)\n\n"; 
            exit(0);
        default: cout<<"invalid value...Please Try Again";
    }
    getch();
    goto p;
}
void bank::bank_man()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t Bank Management System";
    cout<<"\n\n 1. New User";
    cout<<"\n\n 2. Already User";
    cout<<"\n\n 3. Deposit";
    cout<<"\n\n 4. Withdraw";
    cout<<"\n\n 5. Transfer";
    cout<<"\n\n 6. Payment";
    cout<<"\n\n 7. Search user record";
    cout<<"\n\n 8. Edit user record";
    cout<<"\n\n 9. Delete user record";
    cout<<"\n\n 10. Show all records";
    cout<<"\n\n 11. Payment history";
    cout<<"\n\n 12. Go back";

    cout<<"\n\n Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            new_user();
            break;
        case 2:
            alr_user();
            break;
        case 3:
            deposite();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            transfer();
            break;
        case 6:
            payment();
            break;
        case 7:
            search();
            break;
        case 8:
            edit();
            break;
        case 9:
            del();
            break;
        case 10:
            show_rec();
            break;
        case 11:
            show_pay();
            break;
        case 12:
            menu();
        deafult: 
            cout<<"invalid value...Please Try Again";
    }
    getch();
    goto p;

}

void bank::atm_man()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t ATM Management System";
    cout<<"\n\n 1. User Login & Check Balance";
    cout<<"\n\n 2. Withdraw Amount";
    cout<<"\n\n 3. Account Details";
    cout<<"\n\n 4. Go Back";
    cout<<"\n\n Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            user_balance();
            break;
        case 2:
            with_atm();
            break;
        case 3:
            details();
            break;
        case 4:
            menu();
        deafult: 
            cout<<"invalid value...Please Try Again";
    }
    getch();
    goto p;

}

void bank::new_user()
{
    p:
    system("cls");
    fstream file;
    int p;
    float b;
    string n,f,pa,a,ph,i;
    cout<<"\n\n\t\t\tAdd New User";
    cout<<"\n\n User Id : ";
    cin>>id;
    cout<<"\n\n\t\t Name : ";
    cin>>name;
    cout<<"\n\n Father Name : ";
    cin>>fname;
    cout<<"\n\n Address : ";
    cin>>address;
    cout<<"\n\n Pin Code(5 digit) : ";
    cin>>pin;
    cout<<"\n\n Password : ";
    cin>>pass;
    cout<<"\n\n Phone No. : ";
    cin>>phone;
    cout<<"\n\n Current Balance : ";
    cin>>balance;
    file.open("bank.txt",ios::in);
    if(!file)
    {
        file.open("bank.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
        file.close();
    }
    else{
        file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        
        while(!file.eof())
        {
            if(i == id)
            {
                cout<<"\n\n User id already exist...";
                getch();
                goto p;
            }
            file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        }
        file.close();
        file.open("bank.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
        file.close();
    }
    cout<<"\n\n New user added successfully";
}

void bank::alr_user()
{
    p:
    system("cls");
    fstream file;
    string t_id;
    int found=0;
    cout<<"\n\n\t\t\t Already user account";
    file.open("bank.txt",ios::in); //read mode
    if(!file)
    {
        cout<<"File opening error...";
    }
    else
    {
        cout<<"\n\n User Id : ";
        cin>>t_id;
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n\t\t\t Already user account";
                cout<<"\n\nUser Id : "<<id<<"\npin code : "<<pin<<"\npassword : "<<pass;
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        if(found==0)
        {
            cout<<"\n\n User Id can't be found...";
            getch();
            goto p;
        }
    }
}

void bank::deposite()
{
    fstream file,file1;
    int found=0;
    string t_id;
    float dep;
    system("cls");
    cout<<"\n\n\t\t\t Deposite option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File opening error...";
    }
    else
    {
        cout<<"\n\n User Id : ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                cout<<"\n\n Enter Amount for Deposite : ";
                cin>>dep;
                balance += dep;
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                found++;
                system("cls");
                cout<<"\n\n\t\tAmount "<<dep<<" Deposited successfully";
                cout<<"\n\n\t\tYour updated balance is "<<balance;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found==0)
        {
            cout<<"\n\n User Id can't be found...";
            getch();
        }
    }
}

void bank::withdraw()
{
    fstream file,file1;
    int found=0;
    string t_id;
    float with;
    system("cls");
    cout<<"\n\n\t\t\t Withdraw option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File opening error...";
    }
    else
    {
        cout<<"\n\n User Id : ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                cout<<"\n\n Enter Amount to withdraw : ";
                cin>>with;
                if(with<=balance)
                {
                    balance -= with;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                    system("cls");
                    cout<<"\n\n\t\t\tAmount "<<with<<"withdrawn successfully";
                    cout<<"\n\n\t\t\tYour updated balance is "<<balance;
                }
                else{
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                    cout<<"\n\n\t\tYour current balance "<<balance<<" is less...";
                }
                found++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found==0)
        {
            cout<<"\n\n User Id can't be found...";
            getch();
        }
    }
}

void bank::transfer()
{
    fstream file,file1,file2;
    string s_id,r_id;
    float amt;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\tMoney Transfer";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File opening error...";
    }
    else
    {
        cout<<"\n\nSender User Id : ";
        cin>>s_id;
        cout<<"\n\nReciever User Id : ";
        cin>>r_id;
        cout<<"\n\nEnter Transaction Amount : ";
        cin>>amt;
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(s_id == id && amt <= balance)
            {
                ++found;
            }
            else if(r_id == id)
            {
                ++found;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        } 
        file.close();
        
        if(found == 2)
        {
            file.open("bank.txt",ios::in);
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(s_id == id)
                {
                    balance -= amt;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                }
                else if(r_id == id)
                {
                    balance += amt;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            cout<<"\n\n\t\tTransaction Successfully...";
        }
        else{
            cout<<"\n\n\tTransaction user Id is invalid or balance is low";
        }
    }
}

void bank::payment()
{
    system("cls");
    fstream file,file1;
    int found=0;
    string t_id,b_name;
    float amount;
    SYSTEMTIME x;
    cout<<"\n\n\t\t Bills Payment Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error...";
    }
    else{
        cout<<"\n\n Enter User ID : ";
        cin>>t_id;
        cout<<"\n\n Bill Name : ";
        cin>>b_name;
        cout<<"\n\n Bill Amount : ";
        cin>>amount;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id && amount <= balance)
            {
                balance -= amount;
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                found++;
            }
            else{
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 1)
        {
            GetSystemTime(&x);
            file.open("bill.txt",ios::app|ios::out);
            file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<endl;
            file.close();
            cout<<"\n\n\t\t "<<b_name<<" Bill Paid Successfully...";
        }
        else{
            cout<<"\n\n\t\t User ID or Amount is invalid...";
        }
    }
}

void bank::search()
{
    system("cls");
    string t_id;
    int found=0;
    fstream file;
    cout<<"\n\n\t\t\t Search User Record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File opening error...";
    }
    else{
        cout<<"\n\n User Id : ";
        cin>>t_id;
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n\t\tUser Record";
                cout<<"\n\n\n User Id : "<<id<<"\n\n Name : "<<name<<"\n\n Father Name : "<<fname;
                cout<<"\n\n Address : "<<address<<"\n\n Pin : "<<pin<<"\n\n Password : "<<pass;
                cout<<"\n\n Phone No. : "<<phone<<"\n\n Current Balance : "<<balance;
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        if(found == 0)
        {
            cout<<"User Id not found...";
        }
    }
}

void bank::edit()
{
    system("cls");
    string t_id; 
    string n,f,p,a,ph,i;
    int found=0,pi;
    fstream file,file1;
    cout<<"\n\n\t\tEdit User record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File opening error";
    }
    else{
        cout<<"\n\n User Id : ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n Name : ";
                cin>>n;
                cout<<"\n\n Father Name : ";
                cin>>f;
                cout<<"\n\n Address : ";
                cin>>a;
                cout<<"\n\n Pin Code(5 digit) : ";
                cin>>pi;
                cout<<"\n\n Password : ";
                cin>>p;
                cout<<"\n\n Phone No. : ";
                cin>>ph;
                file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<"  "<<balance<<endl;
                cout<<"\n\n\t your record successfully edited...";
                found++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        {
            cout<<"User Id not found...";
        }
    }
}

void bank::del()
{
    system("cls");
    string t_id; 
    int found=0;
    fstream file,file1;
    cout<<"\n\n\t\tEdit User record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File opening error";
    }
    else{
        cout<<"\n\n User Id : ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                
                cout<<"\n\n\t Your Record deleted successfully...";
                ++found;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        {
            cout<<"User Id not found...";
        }
    }
}

void bank::show_rec()
{
    system("cls");
    fstream file;
    int found=0;
    cout<<"\n\n\t\t Show All User's Records";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n file doesn't exist";
    }
    else{
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            cout<<"\n\n User ID : "<<id;
            cout<<"\n\n Name : "<<name;
            cout<<"\n\n Father Name : "<<fname;
            cout<<"\n\nAddress : "<<address;
            cout<<"\n\n Pin : "<<pin;
            cout<<"\n\n Password : "<<pass;
            cout<<"\n\n Phone No. : "<<phone;
            cout<<"\n\n Current Balance : "<<balance;
            cout<<"\n\n ==============================================";
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            found++;
        }
        file.close();
        if(found == 0)
        {
            cout<<"Database is empty...";
        }
    }
}

void bank:: show_pay()
{
    system("cls");
    fstream file;
    string t_id,b_name,c_date;
    float amount;
    int found=0; 
    cout<<"\n\n\t\t All Bill's Records";
    file.open("bill.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n file doesn't exist";
    }
    else{
        file>>id>>name>>amount>>c_date;
        while(!file.eof())
        {
            cout<<"\n\n User ID : "<<id;
            cout<<"\n\n Bill Name : "<<name;
            cout<<"\n\n Amount : "<<amount;
            cout<<"\n\n Date : "<<c_date;
            cout<<"\n\n ==============================================";
            file>>id>>name>>amount>>c_date;
            found++;
        }
        file.close();
        if(found == 0)
        {
            cout<<"\n\n\t\t Database is empty...";
        }
    }
}

void bank::user_balance()
{
    system("cls");
    fstream file;
    char ch;
    int found=0;
    string t_id,t_pin;
    cout<<"\n\n\t\t User Login & check balance";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File Opening Error...";
    }
    else{
        cout<<"\n\n User ID : ";
        cin>>t_id;
        cout<<"\n\n pin code : ";
        for(int i=1;i<=5;i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id && t_pin == pin)
            {
                cout<<"\n\n\t\t Your Current Balance is "<<balance;
                ++found;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        if(found == 0)
        {
            cout<<"\n\n\t\t User ID or Password is inavlid...";
        }
    }
}

void bank::with_atm()
{
    system("cls");
    cout<<"\n\n\t\t Withdraw";
    fstream file,file1;
    int found=0;
    char ch;
    string t_id,t_pin;
    float with;
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File opening error...";
    }
    else
    {
        cout<<"\n\n User Id : ";
        cin>>t_id;
        cout<<"\n\n Enter Pin : ";
        for(int i=1;i<=5;i++)
        {
            ch=getch();
            t_pin += ch;
            cout<<"*";
        }
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id && t_pin == pin)
            {
                cout<<"\n\n Enter Amount to withdraw : ";
                cin>>with;
                if(with <= balance)
                {
                    balance -= with;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                    system("cls");
                    cout<<"\n\n\t\t\tAmount "<<with<<" withdrawn successfully....";
                    cout<<"\n\n\t\t\t  Your current balance is "<<balance;
                }
                else{
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
                    cout<<"\n\n\t\tYour current balance "<<balance<<" is less...";
                }
                found++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<endl;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found==0)
        {
            cout<<"\n\n User Id can't be found...";
            getch();
        }
    }
}

void bank::details()
{
    system("cls");
    cout<<"\n\n\t\t Check Details";
    fstream file;
    int found=0;
    char ch;
    string t_id,t_pin;
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"File opening error...";
    }
    else
    {
        cout<<"\n\n User Id : ";
        cin>>t_id;
        cout<<"\n Enter Pin : ";
        for(int i=1;i<=5;i++)
        {
            ch=getch();
            t_pin += ch;
            cout<<"*";
        }
        
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id && t_pin == pin)
            {
                cout<<"\n\n ==============================================";
                cout<<"\n\n Name : "<<name;
                cout<<"\n\n Father Name : "<<fname;
                cout<<"\n\n Address : "<<address;
                cout<<"\n\n Pin : "<<pin;
                cout<<"\n\n Password : "<<pass;
                cout<<"\n\n Phone No. : "<<phone;
                cout<<"\n\n Current Balance : "<<balance;
                cout<<"\n\n ==============================================";
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        if(found==0)
        {
            cout<<"\n\n User Id can't be found...";
            getch();
        }
    }
}

int main()
{
    bank obj;
    introduction();
    obj.menu();
}
