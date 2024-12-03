#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class bank {
    char name[100],add[100],y;
    int balnce;
public :
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank::open_account() {
    cout << "enter your full name ::\n";
    cin.ignore();
    cin.getline(name, 100);
    cout << "enter your addrass ::\n";
    cin.ignore();
    cin.getline(add, 100);
    cout << "what type of address you want saving (s) or current (c) ::\n";
    cin >> y;
    cout << "enter your deposite ::\n";
    cin >> balnce;
    cout << "Your account is created \n";
}
void bank::deposite_money()
{
    int a;
    cout << "enter how much deposite do you want \n";
    cin >> a;
    balnce += a;
    cout << "total balnce is :\t" << balnce << "\n";
}
void bank::display_account() {
    cout << "your full name is ::\t" <<name << "\n";
    cout << "your address is::\t" << add << "\n";
    cout << "type of your account is::\t" << y << "\n";
    cout << "your total amount is::\t" << balnce <<"\n";
}
void bank ::withdraw_money(){
    float amount;
    cout << "withdraw \n";
    cout << "Enter withdraw amount \n";
    cin >> amount;
    balnce -= amount;
    cout << "now total amount is : " << balnce;
}
int main()
{
    int ch, x;
    bank obj;
    do {
        cout << "1) open account \n";
        cout << "2) deposite money \n";
        cout << "3) withdraw money \n";
        cout << "4) display account \n";
        cout << "5) Exit ";
        cin >> ch;
        switch (ch)
        {
        case 1: 
            obj.open_account();
            break;
        case 2 :
            obj.deposite_money();
            break;
        case 3:
            obj.withdraw_money();
            break;
        case 4:
            obj.display_account();
        case 5:
            if(ch == 5)
            {
                exit(1);
            }
        default :
            cout << "sorry! this is not exisit";
        }
        cout << "\n do you want to select another option then press :: y / n )";
        cout << "if you wnat to exit press N";
        x = getch();
        if (x == 'n' || x == 'N')
            exit(0);
    } while (x == 'y' || x == 'Y');
    _getch();
    return 0;
}


