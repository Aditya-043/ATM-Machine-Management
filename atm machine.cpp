#include<bits/stdc++.h>
using namespace std;

void showMenu()
{
    cout<<"\n \t\t\t ATM MACHINE "<<endl;
    cout<<"**************MENU**************"<<endl;
    cout<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<endl;
    cout<<"********************************"<<endl;;
}
int main()
{
    //check balance, deposit,withdraw,show menu
    int option;
    double balance=500;
    double da;
    double wa;
    do{

        showMenu();
        cout<<"option : ";
        cin>>option;

        switch(option)
        {
            case 1:
                    cout<<"Balance is : "<<balance<<" $"<<endl;
                    break;
            case 2:
                    cout<<"Deposit Amount : ";
                    cin>>da;
                    balance += da;
                    cout<<"Deposit successfully."<<endl;
                    cout<<endl;
                    break;
            case 3:
                    cout<<"Withdraw amount : ";
                    cin>>wa;
                    if(wa <= balance){
                        balance -= wa;
                        cout<<"Withdraw Successfully"<<endl;
                        cout<<"You have only "<<balance<<" $ "<<"in your Account"<<endl;
                    }
                    else   
                        cout<<"Not Enough Money " <<endl;
                    break;

            case 4:
                    exit(0);
            default:
                    cout<<"Wrong Input.."<<endl;
                        
        }           

    }
    while(option != 4);
}