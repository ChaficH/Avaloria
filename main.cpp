#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
int healingPotionCount=0;
int bombCount=0;
int megaBombCount=0;
int coins=100;
int hp=100;
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
    cout<<"correct"<<endl;
    cout<<"you earned 100 coins"<<endl;
    coins=coins+100;
    }

    else
    {
    cout<<"wrong";
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

int item;
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
                    healingPotionCount++;
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
                    bombCount++;
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
                    megaBombCount++;
                }
            }
            else
            {
                continue;
            }
        }
    }
}




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
    cout<<"\n\n Avaloria, a mystical realm filled with magic and ancient curses, lived a young witch named Elara.\n\n She came from a lineage of powerful witches who had ruled over Avaloria for centuries, using their magic to control the land.\n\n However, their quest for power led them to place a curse on Avaloria, causing suffering to its people.\n\n Feeling torn between loyalty to her family and a desire to undo their wrongs, Elara embarked on a quest to break the curse.\n\n With courage and determination, she journeyed through Avaloria, encountering allies and adversaries, all while seeking redemption for her\n\n family's past actions.\n\n"<<endl;
    cout<<"Elara, tired of her family's curse on Avaloria, ran away from home to try and make things right.\n\nWhile wandering through a thick forest, she saw a strange light shining through the trees."<<endl;
    cout<<"\n\nChoose your own story. YOUR CHOICE MATTER \n\n1. Explore Forest (Elara ventures deeper into the woods.)\n\n2. Follow Light (Elara follows the mysterious light.)"<<endl;
    do
    {
        cin>>choice_1;
            switch (choice_1)
        {
        case 1:
            cout<<"\n\nElara ventures deeper into the woods, hoping to uncover hidden knowledge that may aid her quest for redemption.\n\nShe believes that the mysteries of the forest hold secrets that could help break Avaloria's curse."<<endl;
            break;
        case 2:
            cout<<"\n\nIntrigued by the magical aura of the light, Elara chooses to follow it,\n\nbelieving it may lead her to a source of wisdom or guidance that could help her understand\n\nhow to break Avaloria's curse."<<endl;
            break;
        default:
            cout<<"\nInvalid Choice Choose Another : ";
            break;
        }
    }while(choice_1 != 1 && choice_1 != 2);
    char shop_yn;
    char inv;
    if (choice_1 == 1)
    {
        cout<<"\n\nDriven by a desire for ancient wisdom, Elara stumbles upon ruins hidden within the forest.\n\nShe believes that exploring these ruins may lead her to forgotten spells or artifacts\n\ncapable of breaking Avaloria's curse.";
        cout <<"\n\nWhile exploring the ruins, Elara found a magical door that is secured by a riddle, beware the door only asks once\n\nif answered incorrectly you will not be able to continue this path.";
        cout<<"\n\nThe riddle says : ";
        if (riddles()==false)
        {
            cout<<"\n\nYou answed the door riddle wrong, Elara is forced to continue following the light\n\nit is her only option.";
            choice_1=2;
        }
        else{
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
            }

    }
    if (choice_1 == 2)
    {
        cout<<"\n\nCurious about the origin of the light, Elara chooses to solve the riddle it presents.\n\nShe believes that unraveling the mystery of the light may unveil hidden truths or lead\n\nher to a powerful artifact capable of breaking Avaloria's curse.";

    }
return 0;
}

           
            

       
