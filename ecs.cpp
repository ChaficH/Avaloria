#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
        int player_damage = 15;
        int enemy_damage = 20;
        int player_hp = 100;
        int enemy_hp = 120;
        int health_potions = 2;
        int max_hp;
        int heal_potion;
        heal_potion=3;
        cout<<"HP "<<player_hp<<endl;
        char heal_fight;
        cout<<"You encountered a wizard \n"<<endl;
        while (true)
            {   
                if (player_hp<=0)
                    {
                        cout<<"You Died Try Again !\n"<<endl;
                        player_hp=100;
                        enemy_hp=120;
                        continue;
                    }
                cout<<"press H to heal F to fight ";
                cin>>heal_fight;
                if (heal_fight == 'H' || heal_fight== 'h')
                    {   
                        if (heal_potion <=0)
                            {
                                cout<<"You have "<<heal_potion<<" potions"<<endl;
                                continue;
                            }
                        if (player_hp>0 & player_hp<100)
                            {
                                if (player_hp>80)
                                    {
                                        max_hp=100-player_hp;
                                        player_hp+=max_hp;
                                        cout<<player_hp<<endl;
                                        heal_potion -=1;
                                        cout<<"You still have "<< heal_potion<<" heal potions"<<endl;
                                    }
                                else
                                    {   
                                        player_hp+=20;
                                        heal_potion -=1;
                                        cout<<player_hp<<endl;
                                        cout<<"You still have "<< heal_potion<<" heal potions"<<endl;
                                    }
                            }
                        if (player_hp>=100)
                            {
                                cout<<"Your health is full "<<player_hp<<endl;
                            }
                    }
                if (heal_fight == 'F' || heal_fight== 'f')
                    {
                        if (enemy_hp<=0 || player_hp<=0 )
                                continue;
                        else
                            {
                                enemy_hp=enemy_hp-player_damage;
                                cout<<"The enemy hp is now "<<enemy_hp<<endl;
                                player_hp=player_hp-enemy_damage;
                                cout<<"Your hp is now "<<player_hp<<endl;
                                continue;
                            }
                    }
            }
return 0;
}