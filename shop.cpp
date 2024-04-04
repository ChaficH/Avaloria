#include <iostream>

using namespace std;

int main() 
{
int item;
int coins;
char buy;
cout<<"Enter money amount";
cin>>coins;
while (true)
{
cout<<"\n"<<endl;
cout<<"   ▄████████    ▄█    █▄     ▄██████▄     ▄███████▄ "<<endl;
cout<<"  ███    ███   ███    ███   ███    ███   ███    ███ "<<endl;
cout<<"  ███    █▀    ███    ███   ███    ███   ███    ███ "<<endl;
cout<<"  ███         ▄███▄▄▄▄███▄▄ ███    ███   ███    ███ "<<endl;
cout<<"▀███████████ ▀▀███▀▀▀▀███▀  ███    ███ ▀█████████▀  "<<endl;
cout<<"   ▄█    ███   ███    ███   ███    ███   ███        "<<endl;
cout<<" ▄████████▀    ███    █▀     ▀██████▀   ▄████▀      "<<endl;
                                                    

    cout<<"\n\nItems in shop :  1- Healing potion , 2- Bomb , 3- MegaBomb \n\nChoose an item by number or -1 to exit shop ";
    cin>>item;
    if (item == -1)
    {
        break;
    }
    if (item != 1 && item != 2 && item!=3)
    {
        cout<<"\nYou have "<<coins<<" coins"<<endl;
        cout<<"\nChoose a valid item"<<endl;
        continue;
    }
    if (item == 1)
    {
        cout<<"\nYou have "<<coins<<" coins"<<endl;
        cout<<"\nHealing Potion : Heals 20 , PRICE 50\n\nAre you sure you want to spend 50 coins on a Healing Potion ? Y/N ";
        cin>>buy;
        if (buy=='Y' || buy =='y')
        {
            if (coins <50)
            {
                cout<<"\nYou have "<<coins<<" coins"<<endl;
                cout<<"\nYou dont Have enough coins to buy a Healing Potion.\n\n";
                continue;
            }
            else
            {
                coins=coins-50;
                cout<<"\nYou now have "<<coins<<" coins"<<endl;
            }
        }
        else
        {
            continue;
        }
    }
    if (item == 2)
    {
        cout<<"\nYou have "<<coins<<" coins"<<endl;
        cout<<"\nBomb : Damage: 80 , PRICE 80\n\nAre you sure you want to spend 80 coins on a Bomb ? Y/N ";
        cin>>buy;
        if (buy=='Y' || buy =='y')
        {
            if (coins <80)
            {
                cout<<"\nYou have "<<coins<<" coins"<<endl;
                cout<<"\nYou dont Have enough coins to buy a Bomb.\n\n";
                continue;
            }
            else
            {
                coins=coins-80;
                cout<<"\nYou now have "<<coins<<" coins"<<endl;
            }
        }
        else
        {
            continue;
        }
    }
    if (item == 3)
    {
        cout<<"\nYou have "<<coins<<" coins"<<endl;
        cout<<"\nMegaBomb : Kills enemies instantly , PRICE 500\n\nAre you sure you want to spend 500 coins on a MegaBomb ? Y/N ";
        cin>>buy;
        if (buy=='Y' || buy =='y')
        {
            if (coins <500)
            {
                cout<<"\nYou have "<<coins<<" coins"<<endl;
                cout<<"\nYou dont Have enough coins to buy a MegaBomb.\n\n";
                continue;
            }
            else
            {
                coins=coins-500;
                cout<<"\nYou now have "<<coins<<" coins"<<endl;
            }
        }
        else
        {
            continue;
        }
    }

}
return 0;
}

