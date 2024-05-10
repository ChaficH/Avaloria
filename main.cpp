#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
void inventory ();
bool riddles();
void shop (int & );
void minions(int & , int & , int & , int &);
void rpc();
int healingPotionCount=2;
int bombCount=1;
int megaBombCount=0;
int coins=100;
int player_hp = 100;
int player_damage = 15;

int main() 
{
    cout<<"\n"<<endl;
    cout<<"   ▄████████   ▄█    █▄     ▄████████  ▄█        ▄██████▄     ▄████████  ▄█     ▄████████  "<<endl;
    cout<<"   ███    ███ ███    ███   ███    ███ ███       ███    ███   ███    ███ ███    ███    ███ "<<endl;
    cout<<"   ███    ███ ███    ███   ███    ███ ███       ███    ███   ███    ███ ███▌   ███    ███ "<<endl;
    cout<<"   ███    ███ ███    ███   ███    ███ ███       ███    ███  ▄███▄▄▄▄██▀ ███▌   ███    ███ "<<endl;
    cout<<" ▀███████████ ███    ███ ▀███████████ ███       ███    ███ ▀▀███▀▀▀▀▀   ███▌ ▀███████████ "<<endl;
    cout<<"   ███    ███ ███    ███   ███    ███ ███       ███    ███ ▀███████████ ███    ███    ███ "<<endl;
    cout<<"   ███    ███ ███    ███   ███    ███ ███▌    ▄ ███    ███   ███    ███ ███    ███    ███ "<<endl;
    cout<<"   ███    █▀   ▀██████▀    ███    █▀  █████▄▄██  ▀██████▀    ███    ███ █▀     ███    █▀  "<<endl;
    cout<<"                                      ▀                      ███    ███                   "<<endl;
    srand (time(0));
    int en_ex;
    while (true)
    {
        cout<<"\n\n"<<endl;
        cout<<" \t\t        1. ┌─┐┬  ┌─┐┬ ┬            2. ╔═╗ ─┐ ┬ ┬┌┬┐"<<endl;
        cout<<" \t\t           ├─┘│  ├─┤└┬┘               ║╣  ┌┴┬┘ │ │ "<<endl;
        cout<<" \t\t           ┴  ┴─┘┴ ┴ ┴                ╚═╝ ┴ └─ ┴ ┴ "<<endl;
        cin>>en_ex;
        if (en_ex == 1)
            {
                break;
            }
        else
            {
                continue;
            }
    }
    int choice_1;
    cout<<"In the mystical realm of Avaloria, lived a young witch named Elara,\n\nher family of witches set a curse on the land. As she flees her ancestral home trying to break the curse,\n\nas she was wandering in the forest elara encounters a strange light in the forest."<<endl;
    char shop_yn;
    char inv;
        cout<<"\n\nElara stumbles upon ruins hidden within the forest.";
        cout <<"\n\nWhile exploring the ruins, Elara found a magical door that is secured by a riddle";
        cout<<"\n\nThe riddle says : ";
        while(riddles()==false)
        {
        cout<<"\n\nYou answed the door riddle wrong, Try again.\n\n";
        }
                cout<<"\n\nThe door opened, and there Elara found The Duke he is a merchant";
            do
            {
                cout<<"\n\nDo you want to see what The Duke has to offer Y/N ";
                cin>>shop_yn;
                shop_yn=toupper(shop_yn);
                if (shop_yn != 'Y' && shop_yn != 'N')
                {
                    cout<<"\n\nInvalid choice";
                }
            } while (shop_yn!='Y'&&shop_yn!='N');

            if (shop_yn == 'Y')
            {
                shop(coins);
                cout<<"\n\nYou have "<<coins<<" coins left";
                cout<<"\n\nPress E to enter inventory or any other button to continue ";
                cin>>inv;
                inv=toupper(inv);
                if (inv == 'E')
                {
                    inventory();
                }
            }
        
            cout<<"\n\n\t\t****CHAPTER 1 : The Fight Begins*****";
            cout<<"\n\nWhile walking through the ruins Elara stumbles upon a group of wizards.\n\nTrying to negotiate with them to join her \n\nwith the fight for the lifting the curse upon avaloria";
            cout<<"\n\nWizards : The only way to join you in the fight is to prove your power against our minions .\n\n";
            cout<<"\n\nThree minions appeared, Elara braces herself for battle.\n\n";
            minions(healingPotionCount , player_hp , bombCount , megaBombCount);
            cout<<"\n\nYou Killed the 1st minion\n\n";
            minions(healingPotionCount , player_hp , bombCount , megaBombCount);
            cout<<"\n\nYou Killed the 2nd minion\n\n";
            minions(healingPotionCount , player_hp , bombCount , megaBombCount);
            cout<<"\n\nYou Killed the 3rd minion\n\n";


return 0;
}

void minions(int & healingPotionCount , int & player_hp , int & bombCount , int & megaBombCount)
{
        
        int enemy_damage = 35;
        int enemy_hp = 30;
        int max_hp;
        cout<<"HP "<<player_hp<<"\n"<<endl;
        cout<<"Minon HP "<<enemy_hp<<"\n"<<endl;
        char heal_fight;
        while (true)
            {   
                if (enemy_hp <=0)
                {
                    break;
                }
                if (player_hp<=0)
                    {
                        cout<<"You Died Try Again !\n"<<endl;
                        player_hp=100;
                        enemy_hp=30;
                        if (healingPotionCount == 0)
                        {
                            healingPotionCount+=1;
                            cout<<"You got 1 Healing potion";
                        }
                        if (bombCount == 0)
                        {
                            bombCount+=1;
                            cout<<"You got 1 Bomb";
                        }

                        continue;
                    }
                cout<<"\n\nYou Have "<<healingPotionCount<<" Heal potions, "<<bombCount<<" Bombs, "<<megaBombCount<<" Mega Bombs" ;
                cout<<"\n\nPress H to Heal, F to Fight, B to throw a Bomb, and M to throw a Mega Bomb ";
                cin>>heal_fight;
                heal_fight=toupper(heal_fight);
                if (heal_fight == 'H')
                    {   
                        if (player_hp>0 & player_hp<100)
                            {
                                if (player_hp>80)
                                    {
                                        max_hp=100-player_hp;
                                        player_hp+=max_hp;
                                        cout<<"\nYour HP is now "<<player_hp<<endl;
                                        healingPotionCount -=1;
                                        cout<<"\nYou still have "<< healingPotionCount<<" heal potions"<<endl;
                                    }
                                else
                                    {   
                                        player_hp+=20;
                                        healingPotionCount -=1;
                                        cout<<"\nYour HP is now "<<player_hp<<endl;
                                        cout<<"\nYou still have "<< healingPotionCount<<" heal potions"<<endl;
                                    }
                            }
                        if (player_hp>=100)
                            {
                                cout<<"\nYour health is full "<<player_hp<<endl;
                            }
                    }
                if (heal_fight == 'F')
                    {
                        if (enemy_hp<=0 || player_hp<=0 )
                                continue;
                        else
                            {
                                enemy_hp=enemy_hp-player_damage;
                                if (enemy_hp<=0)
                                continue;
                                cout<<"\nMinoin HP is now "<<enemy_hp<<endl;
                                player_hp=player_hp-enemy_damage;
                                if (player_hp<=0 )
                                continue;
                                cout<<"\nYour HP is now "<<player_hp<<endl;
                                continue;
                            }
                    }
                if (heal_fight == 'B')
                {
                    if(bombCount == 0)
                    {
                        cout<<"\n\nYou dont have enough bombs\n\n ";
                        continue;
                    }
                    bombCount-=1;
                    if (enemy_hp<=0 || player_hp<=0 )
                        continue;
                    else
                        {
                            enemy_hp=enemy_hp-40;
                            if (enemy_hp<=0)
                            continue;
                            cout<<"\nMinoin HP is now "<<enemy_hp<<endl;
                            player_hp=player_hp-enemy_damage;
                            if (player_hp<=0 )
                            continue;
                            cout<<"\nYour HP is now "<<player_hp<<endl;
                            continue;
                        }
                }
                if (heal_fight == 'M')
                {
                    if(megaBombCount == 0)
                    {
                        cout<<"\n\nYou dont have enough Mega bombs\n\n ";
                        continue;
                    }
                    megaBombCount-=1;
                                if (enemy_hp<=0 || player_hp<=0 )
                                continue;
                        else
                            {
                                enemy_hp=enemy_hp-enemy_hp;
                                if (enemy_hp<=0)
                                continue;
                                cout<<"\nMinoin HP is now "<<enemy_hp<<endl;
                                player_hp=player_hp-enemy_damage;
                                if (player_hp<=0 )
                                continue;
                                cout<<"\nYour HP is now "<<player_hp<<endl;
                                continue;
                            }
                }
            }
}

void inventory()
{
    char choice;
    while(true)
    {
    cout<<setw(7)<<"Heal Potions"<<setw(13)<<"Bombs"<<setw(20)<<"Mega Bombs\n\n";
    cout<<setw(6)<<healingPotionCount<<setw(17)<<bombCount<<setw(15)<<megaBombCount<<endl;
    cout<<setw(7)<<"____________"<<setw(13)<<"_____"<<setw(18)<<"__________"<<endl;
    cout<<"Press E to exit inverntory ";
    cin>>choice;
    choice=toupper(choice);
    if (choice=='E')
    {
        break;
    }
    }
}
bool riddles()
{
        int x;
        char c;
        c=true;
    srand (time(0));
    int dice= rand()%5;
    if (dice==0)
    {cout<<"I speak without a mouth and hear without ears. I have no body, but I come alive with the wind.\n"
    <<"1. echo"<<setw(12)<<"2. wind"<<setw(13)<<"3. sound"<<setw(14)<<"4. voice" "\n";
    cout<<"Enter choice ";
    cin>>x;
    while (x>4)
    {
        cout<<"invalid input\nreenter choice ";
        cin>>x;
    }
    if (x==1){
    cout<<"\nCorrect"<<endl;
    cout<<"you earned 100 coins"<<endl;
    coins=coins+100;
    }

    else
    {
    cout<<"\nWrong";
    c=false;
    }
    }
    else if (dice==1)
    {
        cout<<"What has keys but can't open locks?\n"<<
        "1. typewriter"<<setw(16)<<"2. keyboard"<<setw(13)<< "3. piano"<<setw(19)<<" 4. calculator\n";
        cout<<"\nEnter choice ";
        cin>>x;
        while (x>4)
    {
        cout<<"\n\nInvalid input\nReenter choice";
        cin>>x;
    }
        if (x==3){
        cout<<"\n\nCorrect\n\n";
        cout<<"You earned 100 coins\n\n";
        coins=coins+100;
        cout<<"You now have "<<coins<<" coins\n\n";}
        else
        {
        cout<<"\n\nWrong";
        c=false;
        }
    }
    else if (dice==2)
    {
        
        cout<<"The more you take, the more you leave behind. What am I?\n"
        <<"1. time"<<setw(17)<<"2. footsteps"<<setw(13)<<"3. aging"<<setw(16)<<"4. memories\n";
        cout<<"\nEnter choice ";
        cin>>x;
        while (x>4)
    {
        cout<<"invalid input\nReenter choice ";
        cin>>x;
    }
        if (x==2){
        cout<<"\n\nCorrect\n\n";
        cout<<"You earned 100 coins\n\n";
        coins=coins+100;
        cout<<"You now have "<<coins<<" coins\n\n";}
        else
        {
        cout<<"\n\nWrong";
        c=false;
        }
    }
    else if(dice==3)
    {
        cout<<"What can travel around the world while staying in a corner?\n"<<
    "1. stamp"<<setw(15)<<"2. a globe"<<setw(17)<<"3. a thought"<<setw(19)<<"4. information\n";
        cout<<"\n\nEnter choice";
        cin>>x;
        while (x>4)
    {
        cout<<"\n\nInvalid input\nReenter choice ";
        cin>>x;
    }
        if (x==1){
        cout<<"\nCorrect\n\n";
        cout<<"You earned 100 coins\n\n";
        coins=coins+100;
        cout<<"You now have "<<coins<<" coins\n\n";}
        else
        {
        cout<<"\nWrong";
        c=false;   
        }
        
    }
    else if (dice==4)
    {
        cout<<"The more you have of it, the less you see. What is it?\n"<<
        "1. blindness"<<setw(17)<<"2. ignorance"<<setw(16)<<"3. darkness"<<setw(16)<<"4. illusion\n";
        cout<<"\nEnter choice ";
        cin>>x;
        while (x>4)
    {
        cout<<"\nInvalid input\nreenter choice";
        cin>>x;
    }
        if (x==3){
        cout<<"\nCorrect\n\n";
        cout<<"You earned 100 coins\n\n";
        coins=coins+100;
        cout<<"You now have "<<coins<<" coins\n\n";}
        else
        {
        cout<<"\nWrong";
        c=false;
        }

    }
return c;
}

void shop(int & coins)
{

char item;
char buy;
    cout<<"\n"<<endl;
    cout<<"   ▄████████    ▄█    █▄     ▄██████▄     ▄███████▄ "<<endl;
    cout<<"  ███    ███   ███    ███   ███    ███   ███    ███ "<<endl;
    cout<<"  ███    █▀    ███    ███   ███    ███   ███    ███ "<<endl;
    cout<<"  ███         ▄███▄▄▄▄███▄▄ ███    ███   ███    ███ "<<endl;
    cout<<"▀███████████ ▀▀███▀▀▀▀███▀  ███    ███ ▀█████████▀  "<<endl;
    cout<<"   ▄█    ███   ███    ███   ███    ███   ███        "<<endl;
    cout<<" ▄████████▀    ███    █▀     ▀██████▀   ▄████▀      "<<endl;
    while (true)
    {
        cout<<"\n\nItems in shop :  'h' for Healing potion , 'b' for Bomb , 'm' for MegaBomb \n\nChoose an item by letter or 'e' to exit shop ";
        cin>>item;
        if (item == 'e'|| item=='E')
        {
            break;
        }
        
        if (item == 'h'|| item=='H')
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
                    healingPotionCount++;
                }
            }
            else
            {
                continue;
            }
        }
        if (item == 'b'|| item=='B')
        {
            cout<<"\nYou have "<<coins<<" coins"<<endl;
            cout<<"\nBomb : Damage: 40 , PRICE 80\n\nAre you sure you want to spend 80 coins on a Bomb ? Y/N ";
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
                    bombCount++;
                }
            }
            else
            {
                continue;
            }
        }
        if (item == 'm'|| item=='M')
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
                    megaBombCount++;
                }
            }
            else
            {
                continue;
            }
        if (item!='h' || item!='H' || item!='b' || item!='B' || item!='m' || item!='M' || item!='e' || item!='E')
        {
            cout<<"\nYou have "<<coins<<" coins"<<endl;
            cout<<"\nChoose a valid item"<<endl;
            continue;
        }
        }
    }
}

void rpc(){
    char Player_Choice;
    char Comp_Choice;
    int Comp_num;
    int i=1;
    int points_1=0,points_2=0;

    while (i<=3){
        cout<<"Enter your choice (R for rock, P for paper, S for scissors, E to exit)";
        cin>>Player_Choice;
        Player_Choice=toupper(Player_Choice);
        if (Player_Choice == 'E'||Player_Choice == 'e'){
            break;
        }
        Comp_num = rand() % 3;
        if (Comp_num == 0)
            Comp_Choice = 'R';
        else if (Comp_num == 1)
            Comp_Choice = 'P';
        else
            Comp_Choice = 'S';
        cout<<"Computer chooses:"<<Comp_Choice<<endl;
        if (Player_Choice == Comp_Choice){
            cout<<"It's a tie"<<endl;
            cout<<"Point for each"<<endl;
        }
        else if((Player_Choice == 'R' && Comp_Choice == 'S') || (Player_Choice == 'P' && Comp_Choice == 'R')||(Player_Choice == 'S' && Comp_Choice == 'P')){
            points_1=points_1+1;
            cout<<"You won a point"<<endl;
        }
            
        else{
            points_2=points_2+1;
            cout<<"Computer wins a point"<<endl;
        }
        i=i+1;
     }
     if (points_1>points_2)
        cout<<"You win the game!"<<endl;
     else
      cout<<"You lost the game!"<<endl;
}
