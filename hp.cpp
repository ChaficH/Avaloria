#include <iostream>

using namespace std;

int main() 
{
    int hp;
    int max_hp;
    cout<<"enter HP : ";
    cin>>hp;
    int heal_potion;
    heal_potion=3;
    cout<<hp<<endl;
    cout<<"you encountered a wizard press H to heal F to fight";
    char heal_fight;
    cin>>heal_fight;
    if (heal_fight == 'H' || heal_fight== 'h')
    {   
        if (hp>0 & hp<100)
        {
            if (hp>80)
            {
                max_hp=100-hp;
                hp+=max_hp;
                cout<<hp<<endl;
                heal_potion -=1;
                cout<<"You still have "<< heal_potion<<" heal potions"<<endl;
            }
            else
            {   
                hp+=20;
                heal_potion -=1;
                cout<<hp<<endl;
                cout<<"You still have "<< heal_potion<<" heal potions"<<endl;
            }
        }
        if (hp>=100)
        {
            cout<<"Your health is full "<<hp<<endl;
        }
    }
    return 0;
}