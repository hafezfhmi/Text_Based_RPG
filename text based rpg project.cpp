#include <iostream>			//route choice line 213
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
using namespace std;

void clearscreen();
void attackscreen(int& playerXP2,int& Gold2,int PlayerHP2,int& PlayerHPMax2,int& PlayerATK2,int enemy,int& playerXPCap2,int& playerLevel2,int& heal);
void enemy_type(int enemy,string& enemyName1,int& enemyHP1,int& enemyDamage1,int& xpGain2,int& goldGain2);

int main()
{
	int choice,choice2,playerXP=0,Gold=0,playerHP=18,playerATK=7,playerHPMax=18,enemy1,chance,count,count2,count3,route,playerXPCap=40,playerLevel=1,heal2=6,expgain;
	cout<<"\n\n";
	cout<<"      |||||| |||||| ||  || ||||||    |||||  |||||| |||||| |||||| |||||    "<<endl;
	cout<<"        ||   ||     ||  ||   ||      ||  || ||  || ||     ||     ||  ||   "<<endl;
	cout<<"        ||   |||||    ||     ||      |||||  |||||| |||||| |||||  ||  ||   "<<endl;
	cout<<"        ||   ||     ||  ||   ||      ||  || ||  ||     || ||     ||  ||   "<<endl;
	cout<<"        ||   |||||| ||  ||   ||      |||||  ||  || |||||| |||||| |||||    "<<endl;
	cout<<"                                                                           "<<endl;
	cout<<"                              |||||  |||||   |||||                         "<<endl;
	cout<<"                              ||  || ||  || ||                             "<<endl;
	cout<<"                              |||||  |||||  || |||                         "<<endl;
	cout<<"                              ||  || ||     ||  ||                         "<<endl;
	cout<<"                              ||  || ||     |||||                          "<<endl;
	cout<<"\n\n1-start\n\n";
	cout<<"2-EXIT\n\n";
	cout<<"Choice: ";
	cin>>choice;
	if(choice==2)
	{
		exit(0);				//terminate the program
	}
	clearscreen();				//call function clearscreen
	cout<<"\nHello there!"<<endl;
	clearscreen();
	cout<<"\nYou! Yes you! "<<endl;
	clearscreen();
	cout<<"\nStop it with the dumb face, I'm looking at you there! "<<endl;
	clearscreen();
	cout<<"\nYou look lost as all Styx, good, you're supposed to. Now I'll dump all this "<<endl;
	cout<<"exposition on you, you are a Soul Steer,you're controlling this poor vessel "<<endl;
	cout<<"by yanking its soul out and taking the body for yourself, you evil bastard. "<<endl;
	clearscreen();
	cout<<"\nWhy have we made you do this? "<<endl;
	cout<<"Simple!\n"<<endl;
	cout<<"We need you to remove this bugger from this one place because he's a massive "<<endl;
	cout<<"nuisance to our political aims. "<<endl;
	cout<<"Now, you choose to accept or refuse to do this, not us, do you agree?"<<endl;
	cout<<" "<<endl;
	cout<<"1-yes"<<endl;
	cout<<"2-no"<<endl<<endl;
	cout<<"choice: ";
	cin>>choice;		//selection control structure
	system("CLS");
	if (choice!=1)		//selection control structure
	{
		cout<<"\nToo bad! Lets go! "<<endl;
		clearscreen();
	}
	else
	{
		cout<<"\nGreat, you're our medium(pawn) of greatness then! Lets begin with a simple "<<endl;
		cout<<"battle, to see if you can actually do anything of use."<<endl;
		clearscreen();
	}
	enemy1=1;
	attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);		//call function attackscreen
	cout<<"\nGreat! You don't suck. Notice how you got experience points and some gold. Exp  gives you more power after you reach certain milestones, like after 100 exp.    Gold? Gold is just to keep score, it's totally not so we can pilfer all the     gold you get after you die or something! Not at all!";
    clearscreen();
    cout<<"\nWelp, we're going to leave you to your own devices, do what you want to git gud and stop potatoing, see ya' in like... 5 levels or something, bye.";
    clearscreen();
    choice=0;
    while(choice!=2)
    {
    	cout<<"\nWhat are you going to do now?\n\n";
    	cout<<"1-wander\n";
    	cout<<"2-explore odd temple cum cavern\n";
    	cout<<"3-start a peaceful protest, Gandhi style\n\n";
    	cout<<"Choice: ";
    	cin>>choice;			//selection control structure
    	clearscreen();
    	if (choice==1)			//selection
    	{
    		cout<<"\nYou went wandering around to places and encounter an enemy!";
    		clearscreen();
			srand(time(0));			//random number with every set of time
    		enemy1 = (rand()%2)+1;		//random number generator...max number is 2
    		attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);			//call function attackscreen
    	}
    	if (choice==2)
    	{
    		while (count!=1)
    		{
    			srand(time(0));
    			chance = (rand()%95)+1;
    			if (chance>=0 && chance<=20)
    			{
    				cout<<"\nYou meet a dead end.";
    				clearscreen();
    				cout<<"\nYou continue searching for a way out";
					clearscreen();
				}
				if (chance>=21 && chance<=60)
				{
					cout<<"\nAn enemy attacks you!";
					clearscreen();
					srand(time(0));
    				chance = (rand()%2)+1;
    				if (chance==1)
    				{
    					enemy1=1;
					}
					else
					{
						enemy1=2;
					}
					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					cout<<"\nYou continue searching for a way out";
					clearscreen();
				}
				if (chance>=61 && chance<=90)
				{
					cout<<"\nYou found a way out!";
					clearscreen();
					count=1;
				}
				if (chance>=91 && chance<=95)
				{
					cout<<"\nA rare enemy attacks you!";
					clearscreen();
					srand(time(0));
    				chance = (rand()%2)+1;
    				if (chance==1)
    				{
    					enemy1=3;
					}
					if (chance==2)
					{
						enemy1=4;
					}
					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					cout<<"\nYou continue searching for a way out";
					clearscreen();
				}
			}
		}
		if (choice==3)
		{
			cout<<"\nYou starve to death cause you were on strike.\n\n";
			cout<<"Well you suck. MARTY, GO FIND ANOTHER SUCKER!\n\n\n";
			exit(0);
		}
	}
	cout<<"\nYou see a wide-open expanse of green grass and snowcapped peaks, \nexotic creatures grazing on the fields and a tribe of scots in kilts raiding theexotic creatures";
    clearscreen();
    cout<<"\nWhat do you do?\n\n1-ignore and proceed\n2-fight the scots\n3-wait and watch\n\n";
    cout<<"Choice: ";
    cin>>choice;
    clearscreen();
    if (choice==2)
    {
    	cout<<"\nYou decided attacks the scots!";
    	clearscreen();
    	count=0;
    	do{					//repetition control strucutre
    		enemy1=5;
    		attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
    		count++;
    		cout<<"\nYou glimpse around for another scots.";
    		clearscreen();
		}
    	while (count<3);
		cout<<"\nAll the scots are dead";
		clearscreen();
	}
	if (choice==3)
	{
		cout<<"\nYou watch as the scots kill and consume the exotic creatures whole, not leaving as much as a speck left\n";
		clearscreen();
	}
	cout<<"\nYou see a village with an abnormally large tower in the center\n\nWhat to do?\n\n1-go to it\n2-avoid it\n3-wait\n\n";
	cout<<"Choice: ";
    cin>>choice;
    clearscreen();
    if (choice==1)
    {
    	route=1;
    	goto RouteChoice;        //line 213
	}
	if (choice==3)
	{
		cout<<"\nThe rain and wind eventually bring you to the town\n";
		clearscreen();
		route=1;
		goto RouteChoice;
	}
	if (choice==2)
	{
		cout<<"\nYou wander into the woods and meet a band of bandits, they offer to let you     join because your funny face amuses them\n\nWhat did ya say?\n\n1-yes\n2-no\n\n";
		cout<<"Choice: ";
    	cin>>choice;
    	clearscreen();
    	if (choice==1)
    	{
    		route=2;
    		goto RouteChoice;
		}
		if (choice==2)
		{
			cout<<"\nOho......What a big mistake you had made.\n*An infinite number of bandits attack you\nYou are never going out of this!";
			clearscreen();
			count=1;
			while (count=1)
			{
				enemy1=6;
				attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
			}
		}
	}
	RouteChoice:
		if (route==1)   //townroute
		{
			cout<<"\nYou walk into the town, you smell spiced meat being roasted somewhere,\nthe atmosphere is energetic with traders and merchants everywhere selling their wares.";
   			getch();
   			cout<<"\n\nThere is a blacksmith in the far corner of your eye, streamers are everywhere, and music fills the air, courtesy of the bard, but that is nearly drowned out dueto the hum drum of the town and its many inhabitants.";
   			getch();
  			cout<<"\n\nYou are lost however, with no idea what to do\n";
   			getch();
   			count=0;
   			while(count!=1)			//sentinel control strucutre....technically my version of sentinel control structure.
   			{
  				cout<<"\nSo, what do you do?\n\n1-wander\n2-head to the massive tower in the center\n3-wait and stare like an idiotic oaf\n\n";
  				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				count=0;
  				if (choice==3)
  				{
  					cout<<"\nYou get the occasional stare, but otherwise, nothing happens";
  					clearscreen();
				}
				if (choice==1)
				{
					cout<<"\nWhere are you going to?\n\n1-north = market square\n2-east = library\n3-west = blacksmith\n4-south = back to the gate you weirdo\n\n";
					cout<<"Choice: ";
   					cin>>choice2;
   					clearscreen();
   					if (choice2==1 || choice2==2 || choice2==3)
   					{
   						cout<<"\nYou realize you don't know how to speak the local language";
   						clearscreen();
					}
					if (choice2==4)
					{
						cout<<"\nYou walk facefirst into the gate you came in from, you weirdo";
						clearscreen();
					}
				}
				if (choice==2)
				{
					cout<<"\nYou go to the massive two-pronged tower in the center and knock on the massive  jade doors while people look on curiously.";
					count=1;
					clearscreen();
				}
			}
			cout<<"\nThe doors open soundlessly, and the turbulence sucks you into the greeting area where it is empty. \nThe doors behind you quickly close without as much as a whisper.";
   			getch();
   			cout<<"\n\nYou survey your surroundings and see bookshelves, colourful crystals, potions ofmany kinds and light up highlights embedded into the walls surrounding the      fireplace.";
   			getch();
   			cout<<"\n\nAs you stare at the noodle like fish in the giant floating sphere of water in   the center of the room, you hear a soothing and clear voice from the staircase.   It's an elderly lady\n";
   			count=0;
   			while (count!=1)
   			{
			    cout<<"\nWhat to do now?\n\n1-stare\n2-greet\n3-attack\n\n";
   				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				if (choice==1)
   				{
   					cout<<"\nThe two of you stare at eachother for a solid amount of time";
   					clearscreen();
				}
				if (choice==3)
				{
					cout<<"\nYou decided to attack Grand wizard of Satella";
					cout<<"She killed you instantly without a fight\n\nYOU ARE NOW DEAD!";
					exit(0);
				}
				if (choice==2)
				{
					cout<<"\nBefore you manage to mutter even a hello, she says";
   					getch();
   					cout<<"\n\nI get that you've got a mountain of questions, but before that ill give you     another exposition dump, now, you may say this is a little bit fast, but we     don't really have time, and the devs don't want to do too much work.";
   					getch();
   					cout<<"\n\nNow you have to kill the noble named Marquis Puas,\nhe is a pedophile and a sexual degenerate, he has publicly admitted  to wanting to have sexual relations with his little sisters. ";
   					getch();
   					cout<<"\n\nWhat?";
   					getch();
   					cout<<" Yes it's true.";
   					getch();
   					cout<<" Yes cretin,";
   					getch();
   					cout<<" he is like this."                                     ;
   					getch();
   					cout<<" \n\nWhat? You share his views?";
  					getch();
   					cout<<"\n\nNo you don't. We'll kill you if you do, so don't worry about that.";
   					getch();
   					cout<<"\n\nNow here is a lump of experience to boost your sad rump a little bit. Now, OUT!";
   					count=1;
   					clearscreen();
   				}
			}
			cout<<"\nYou were unceremoniously ejected from the tower and hit a cart of cabbages, as  you tried to ignore the humor in that, you realize you only have two options    right now\n";
   			getch();
   			count=0;
   			while (count!=1)
   			{
				cout<<"\nWhat to do now?\n\n1-immediately bumrush the Marquis\n2-go outside and hunt for exp\n3-get an existential crisis\n\n";
				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				if (choice==3)
   				{
   					cout<<"\nYou have a mental breakdown and collapse into tears while onlookers stare.      After a while, you stop crying. Nothing changes";
   					clearscreen();
				}
				if (choice==2)
				{
					srand(time(0));
    				chance = (rand()%80)+1;
    				if (chance>=0 && chance<=20)
    				{
    					enemy1=8;
					}
					if (chance>=21 && chance<=40)
					{
						enemy1=1;
					}
					if (chance>=41 && chance<=60)
					{
						enemy1=9;
					}
					if (chance>=61 && chance<=70)
					{
						enemy1=10;
					}
					if (chance>=71 && chance<=80)
					{
						enemy1=11;
					}
					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
				}
				if (choice==1)
				{
					cout<<"\nYou rush towards the nearest castle looking structure. You kick down the doors  and see a bunch of people in white pointy robes, they stare at you and begin to scream in a language you don't understand, all the while brandishing really     large steak knives. ";
					clearscreen();
					count=1;
				}	
			}
			count=0;
    		do{
    			enemy1=12;
    			attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
    			count++;
    			cout<<"\nYou glimpse around for another Kultsman.";
    			clearscreen();
			}
    		while (count<3);
			cout<<"\nAll the Kultsman are dead";
			clearscreen();
			cout<<"\nAs you slowly remove your boot from the rear of the last kultsman, Marquis Puas steps out from his room, and surveys the carnage, amazed, he then says, -Join   my cult mysterious stranger, I will grant you your wishes, Ronald McDonald be   willing\n\n";
			cout<<"What are you going to say?\n\n1- yeah, sure\n2- no u\n3- call him fat then shank him\n\n";
			cout<<"Choice: ";
   			cin>>choice;
   			clearscreen();
   			if (choice==1)
   			{
   				cout<<"\n-Yeah, sure-, you say, as you approach him, he then stabs you in the knee with  an arrow.As you bleed out slowly from your knee he says,-You re no longer an    adventurer boy- you die soon after, loser, get a real job.";
				clearscreen();
				cout<<"\nWell you suck. MARTY, GO FIND ANOTHER SUCKER!";
				exit(0);
			}
			if (choice==2)
			{
				cout<<"\n-No-, you say sternly, he then shrugs and says, -Let's get this bread-";
				clearscreen();
				enemy1=13;
				attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
			}
			if (choice==3)
			{
				cout<<"\n-Heck no, you fat as hell-, you utter, as you stab him in the gut. He bellows, -It's just baby fat!-";
				clearscreen();
				enemy1=13;
				attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
			}
			cout<<"\nYou stand over the corpse of the Marquis (former), noting that it looks more    akin to a beached whale than anything else. you unlock the doors to his loli    dungeon before leaving to report to the hag wizard";
			clearscreen();
			route=3;
			goto RouteChoice;
		}   //townroute end
		
		if (route==2)   //banditroute
		{
			cout<<"\nThe bandit hideout is a swarm of activity. You see a group of bandits testing   their archery, another wrestling, people holding tankards full of ale and the   odd naked bandit, it's almost as if it's a party all the time.";
   			getch();
   			cout<<"\n\nHaiqkhal: It's a party all the time here \n\nmentions the bandit who recruited you, Haikqhal's his name, as you can clearly  see";
   			getch();
   			cout<<"\n\nHaiqkhal: Welp, anyways, you've got archery there, wrasslin' bout there, drinks on an open tap, and I saw you deal with them scots, it ain't easy to do that, bythe way";
   			getch();
   			cout<<"\n\nYou: But I didn-";
   			Sleep(500);
   			cout<<"\n\nHaiqkhal: Get settled in woman, you'll be fine";
   			clearscreen();
   			cout<<"\nAnd so, he unceremoniously left you, a stranger on all accounts, in the middle  of a group of dangerous ruffians and misfits, \n";
   			count=0;
   			while (count!=1)
   			{
				cout<<"\nWhat do you do?\n\n1- go on a murderous rampage\n2- drink\n3- practice archery\n4- hunt\n5- wrestle with a bunch of goons\n6- Ask about future plans\n\n";
				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				if (choice==1)
				{
					cout<<"\nOho......What a big mistake you had made.\n*An infinite number of bandits attack you\nYou are never going out of this!";
					clearscreen();
					count2=1;
					while (count2=1)
					{
						enemy1=6;
						attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					}
				}
				if (choice==2)
				{
					cout<<"\nYou drank the night away, unsure of what you did the night before, so           effectively you achieved nothing";
					clearscreen();
				}
				if (choice==3)
				{
					cout<<"\nYou shoot a bow and arrow several times, doing horribly, you gain some          experience points somehow";
					expgain=8;
					playerXP+=expgain;
					clearscreen();
					cout<<"\nYou gained "<<expgain<<" exp\n";
					cout<<"LVL: "<<playerLevel<<"	||	EXP: "<<playerXP<<" < "<<playerXPCap<<"	||	Gold= "<<Gold<<"\n\n\n\n\n";
					clearscreen();
					if(playerXP>playerXPCap)
					{	
						while(playerXP>playerXPCap)
						{
						 	playerXP-=playerXPCap;
							playerXPCap+=playerXPCap*0.3;
							playerLevel++;
							playerHPMax+=playerHPMax*0.2;
							playerATK+=sqrt(playerATK);	
							heal2+=2;
							cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel<<"\nHP increased to: "<<playerHPMax<<"		|	 ATK increased to: "<<playerATK;
							clearscreen();
						}
					}
				}
				if (choice==4)
				{
					srand(time(0));
    				chance = (rand()%100)+1;
    				if (chance>=0 && chance<=40)
    				{
    					enemy1=1;
					}
					if (chance>=41 && chance<=70)
					{
						enemy1=14;
					}
				if (chance>=71 && chance<=80)
				{
					enemy1=15;
				}
				if (chance>=81 && chance<=90)
				{
					enemy1=16;
				}
				if (chance>=91 && chance<=95)
				{
					enemy1=17;
				}
				if (chance>=96 && chance<=99)
				{
					enemy1=18;
				}
				if (chance==100)
				{
					enemy1=19;
				}
				attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
				}
				if (choice==5)
				{
					cout<<"\nYou get into a pit with a bunch of ruffians, you toss some of them, some of     them toss you, you gain some exp.";
					clearscreen();
					expgain=8;
					playerXP+=expgain;
					cout<<"\nYou gained "<<expgain<<" exp\n";
					cout<<"LVL: "<<playerLevel<<"	||	EXP: "<<playerXP<<" < "<<playerXPCap<<"	||	Gold= "<<Gold<<"\n\n\n\n\n";
					clearscreen();
					if(playerXP>playerXPCap)
					{	
						while(playerXP>playerXPCap)
						{
						 	playerXP-=playerXPCap;
							playerXPCap+=playerXPCap*0.3;
							playerLevel++;
							playerHPMax+=playerHPMax*0.2;
							playerATK+=sqrt(playerATK);	
							heal2+=2;
							cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel<<"\nHP increased to: "<<playerHPMax<<"		|	 ATK increased to: "<<playerATK;
							clearscreen();
						}
					}
				}
				if (choice==6)
				{
					count=1;
				}
			}
			cout<<"\nHairless Bear: You just got here, you sure you wanna get raidin' already?";
   			getch();
   			cout<<"\n\nThe bears name is Ted, or so you've heard.";
   			getch();
   			cout<<"\n\nTed: Ya bearly got any meat on yer bones lad";
   			getch();
   			cout<<"\n\nHaiqkhal: I saw him handle a situation with a bunch of raiding scots, that's gotto be worth something, right? I mean, they're feckkin' scots" ;
   			getch();
   			cout<<"\n\nTed: Whatever boy, I know I can't out-argue your rump.\nIf he dies, he dies though, this bastard still green enough for photosynthesis  after all";
   			getch();
   			cout<<"\n\nHaiqkhal: Fair enough";
   			clearscreen();
   			cout<<"\nSo the plans where explained to you and a dozen more goons.\nIt goes something along the lines of Ambush this, plunder that, take this one asa hostage, kill these tin canned variety of goon, et cetera";
			getch();
   			cout<<"\n\nThey give you time to prep and stuff before the raid.\n";
   			count=0;
   			while (count!=1)
   			{
				cout<<"\nWhat do you do?\n\n1- into the campgrounds\n2- raid nearby village\n3- lets go bois\n\n";
   				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				if (choice==1)
   				{
   					cout<<"\nWhat do you do?\n1- go on a murderous rampage\n2- drink\n3- practice archery\n4- hunt\n5- wrestle with a bunch of goons\n\n";
   					cout<<"Choice: ";
   					cin>>choice2;
   					clearscreen();
   					if (choice2==1)
					{
						cout<<"\nOho......What a big mistake you had made.\n*An infinite number of bandits attack you\nYou are never going out of this!";
						clearscreen();
						count2=3;
						while (count3=1)
						{
							enemy1=6;
							attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
						}
					}
					if (choice2==2)
					{
						cout<<"\nYou drank the night away, unsure of what you did the night before, so           effectively you achieved nothing";
						clearscreen();
					}
					if (choice2==3)
					{
						cout<<"\nYou shoot a bow and arrow several times, doing horribly, you gain some          experience points somehow";
						expgain=8;
						playerXP+=expgain;
						cout<<"\nYou gained "<<expgain<<" exp\n";
						cout<<"LVL: "<<playerLevel<<"	||	EXP: "<<playerXP<<" < "<<playerXPCap<<"	||	Gold= "<<Gold<<"\n\n\n\n\n";
						clearscreen();
						if(playerXP>playerXPCap)
						{	
							while(playerXP>playerXPCap)
						{
						 	playerXP-=playerXPCap;
							playerXPCap+=playerXPCap*0.3;
							playerLevel++;
							playerHPMax+=playerHPMax*0.2;
							playerATK+=sqrt(playerATK);	
							heal2+=2;
							cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel<<"\nHP increased to: "<<playerHPMax<<"		|	 ATK increased to: "<<playerATK;
							clearscreen();
						}
					}
					}
					if (choice2==4)
					{
						srand(time(0));
    					chance = (rand()%100)+1;
    					if (chance>=0 && chance<=40)
    					{
    						enemy1=1;
						}
						if (chance>=41 && chance<=70)
						{
							enemy1=14;
						}
						if (chance>=71 && chance<=80)
						{
							enemy1=15;
						}
						if (chance>=81 && chance<=90)
						{
							enemy1=16;
						}
						if (chance>=91 && chance<=95)
						{
							enemy1=17;
						}
						if (chance>=96 && chance<=99)
						{
							enemy1=18;
						}
						if (chance==100)
						{
							enemy1=19;
						}
						attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					}
					if (choice2==5)
					{
						cout<<"\nYou get into a pit with a bunch of ruffians, you toss some of them, some of     them toss you, you gain some exp.";
						clearscreen();
						expgain=8;
						playerXP+=expgain;
						cout<<"\nYou gained "<<expgain<<" exp\n";
						cout<<"LVL: "<<playerLevel<<"	||	EXP: "<<playerXP<<" < "<<playerXPCap<<"	||	Gold= "<<Gold<<"\n\n\n\n\n";
						clearscreen();
						if(playerXP>playerXPCap)
						{	
							while(playerXP>playerXPCap)
							{
							 	playerXP-=playerXPCap;
								playerXPCap+=playerXPCap*0.3;
								playerLevel++;
								playerHPMax+=playerHPMax*0.2;
								playerATK+=sqrt(playerATK);	
								heal2+=2;
								cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel<<"\nHP increased to: "<<playerHPMax<<"		|	 ATK increased to: "<<playerATK;
								clearscreen();
							}
						}
					}
				}
				if (choice==2)
				{
					cout<<"\nYou go for a raid on a nearby village";
					clearscreen();
					{
						srand(time(0));
    					chance = (rand()%100)+1;
    					if (chance>=0 && chance<=55)
    					{
    						enemy1=20;
						}
						if (chance>=56 && chance<=60)
						{
							enemy1=21;
						}
						if (chance>=61 && chance<=70)
						{
							enemy1=22;
						}
						if (chance>=71 && chance<=80)
						{
							enemy1=29;
						}
						if (chance>=81 && chance<=85)
						{
							enemy1=23;
						}
						if (chance>=86 && chance<=90)
						{
							enemy1=24;
						}
						if (chance>=91 && chance<=95)
						{
							enemy1=25;
						}
						if (chance>=96 && chance<=99)
						{
							enemy1=26;
						}
						if (chance==100)
						{
							enemy1=19;
						}
						attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					}
				}
				if (choice==3)
				{
					count=1;
				}
			}
			cout<<"\nThe day after you're ready you finally move out. All the bandits move into theirpositions and wait for the noblemans carriage.";
  			getch();
   			cout<<"\nYou see someone accidentally pull out a banana instead of a sword from the      corner of your eye.";
   			getch();
   			cout<<"\n\nYou stay there and wait for not a second more than 15 minutes and up comes a    blindingly tacky carriage, you hear whispers down the grapevine.";
   			getch();
   			cout<<"\nWhen it finally reaches you it the message is \n\nGet beady you gump clout";
			clearscreen();
			cout<<"\nYou see Ted Bautista Bomb a knight a moment after the message gets to you, and  you take it as a sign to attack.\n";
   			getch();
   			count=0;
   			while (count!=1)
   			{
   				cout<<"\nYou've many ways to attack, what do you do?\n\n1- Fools, I've set up traps beforehand, I'll meet them in combat with me holding   the initiative!\n2- Dunno man, maybe just stay in this brush and use my bow?\n3- I've accidentally brought things from modern earth, THESE GUNS! *Flexes thine   Biceps and Triceps*\n4- Unsheathe your blade, facing the horde, John Snow style\n5- I actually got a gun, and IMMA USE IT TO BUST SOME CAPS OFFA THESE TIN CANS\n6- Dab on the haters. Furiously.\n\n";
   				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				if (choice==1)
   				{
   					cout<<"\nYou enter the trapped area, you see knights preoccupied with many varieties of  extremely feminine boys and take their lives post-haste, as you repeat this     process multiple times, you see an armored knight shrugging off the advances of the soyboys. The knight loudly proclaims in a charming voice you didn't expect,";
					getch();
					cout<<"\n\n*I am a loyal married woman, you bastard! And I will kill you!*";
					clearscreen();
					cout<<"\nFemale Knight Captain is coming at you (she's really strong)";
					clearscreen();
					enemy1=28;
					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					cout<<"\nCaptain Liliane: You've bested me, but just know that I sprinkle my blood on    your family grave on time every month.";
					clearscreen();
   					count=1;
				}
				if (choice==2)
				{
					cout<<"\nYou sit in a tree, loosing arrow after arrow, shame you don't hit anything but  knees.";
					clearscreen();
				}
				if (choice==3)
				{
					cout<<"\nYou jump in, following Teds example, and try to RKO a fully armored knight,     but you forget that metal helmets are hard";
					clearscreen();
					enemy1=27;
					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
					count=1;
				}
				if (choice==4)
				{
					cout<<"\nYou stand in front of a division of knight, some are preoccupied, but three     stare you down, an unspoken gentlemen's agreement is made, and they engage you  one on one.";
					clearscreen();
					count2=0;
					do{
    				enemy1=27;
    				attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
    				count2++;
    				cout<<"\nYou glimpse around for another knight.";
    				clearscreen();
					}
    				while (count2<3);
					cout<<"\nAll the knight are dead";
					count=1;
					clearscreen();
				}
				if (choice==5)
				{
					cout<<"\nYou unload your entire magazine into the mass, killing friend and foe, but they don't know that";
					clearscreen();
					count=1;
				}
				if (choice==6)
				{
					cout<<"\nYou dab on the haters, but they still hit you with their sharpened metal sticks,you get damaged";	
					clearscreen();
				}
   			}
   			cout<<"\nAs all the murdering and killing came to an end, a stick of a nobleman appeared from the carriage with as much grandeur as anyone could muster in the situation,which is none, and with stained pantaloons.";
   			getch();
   			cout<<"\n\nHe pulled out a bejeweled dagger and proclaimed,";
   			Sleep(300);
   			cout<<"\n\nMarquis Puas: My name is Marquis Puas, and I'll take you Bastards on one by one";
   			getch();
   			cout<<"\n\nNeedless to say, the mans got mobbed by a bunch of bandits, no honour among     thieves it is said, looked very much like those smoke clouds you see in cartoonsbut with more gore. Nothing was left of the man. ";
   			getch();
   			cout<<"\n\nAmongst the revelries, it was found out that Haikqhal had been violently killed,he had enough swords and daggers in his back to resemble a porcupine, but his   face was untouched bar from the lone bruise on his left temple and his mouth    leaking blood.";
   			clearscreen();
			cout<<"\nBack at the camp, you see a bear pacing inside a tent, grunting ever so often...wait, that's just Ted.";
   			getch();
   			cout<<"\n\nHe seems distraught at the death of poor ol' H, too bad you didn't know him     enough to mourn him, or is it a good thing?";
   			Sleep(700);
   			count=0;
   			while (count!=1)
   			{
  				cout<<"\n\nYou've inadvertently been given free time, what do?\n\n1- shoot some bows\n2- wrasslin'\n3- Kill some forest-goers\n4- drink\n5- dab at literally everyone, even sadboi Ted and Haikqhal's corpse\n6- ask what to do next.\n\n";
  				cout<<"Choice: ";
   				cin>>choice;
   				clearscreen();
   				if (choice==1)
   				{
   					cout<<"\nYou play around with some bows, you notice you can only hit the midpoint of the pegs holding up the targets no matter how you aim, gain exp";	
   					expgain=10;
   					playerXP+=expgain;
					cout<<"\nYou gained "<<expgain<<" exp\n";
					cout<<"LVL: "<<playerLevel<<"	||	EXP: "<<playerXP<<" < "<<playerXPCap<<"	||	Gold= "<<Gold<<"\n\n\n\n\n";
					clearscreen();
					if(playerXP>playerXPCap)
					{	
						while(playerXP>playerXPCap)
						{
						 	playerXP-=playerXPCap;
							playerXPCap+=playerXPCap*0.3;
							playerLevel++;
							playerHPMax+=playerHPMax*0.2;
							playerATK+=sqrt(playerATK);	
							heal2+=2;
							cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel<<"\nHP increased to: "<<playerHPMax<<"		|	 ATK increased to: "<<playerATK;
							clearscreen();
						}
					}
				}
				if (choice==2)
				{
					cout<<"\nYou get better at tossing people your size, so they let the fat Asian men throw you around, you gain exp, and lose some pride.";	
					expgain=10;
					playerXP+=expgain;
					cout<<"\nYou gained "<<expgain<<" exp\n";
					cout<<"LVL: "<<playerLevel<<"	||	EXP: "<<playerXP<<" < "<<playerXPCap<<"	||	Gold= "<<Gold<<"\n\n\n\n\n";
					clearscreen();
					if(playerXP>playerXPCap)
					{	
						while(playerXP>playerXPCap)
						{
						 	playerXP-=playerXPCap;
							playerXPCap+=playerXPCap*0.3;
							playerLevel++;
							playerHPMax+=playerHPMax*0.2;
							playerATK+=sqrt(playerATK);	
							heal2+=2;
							cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel<<"\nHP increased to: "<<playerHPMax<<"		|	 ATK increased to: "<<playerATK;
							clearscreen();
						}
					}
				}
				if (choice==3)
				{
					srand(time(0));
    				chance = (rand()%100)+1;
    				if (chance>=0 && chance<=55)
    				{
    					enemy1=20;
					}
					if (chance>=56 && chance<=60)
					{
						enemy1=21;
					}
					if (chance>=61 && chance<=70)
					{
						enemy1=22;
					}
					if (chance>=71 && chance<80)
					{
						enemy1=29;
					}
					if (chance>=81 && chance<=85)
					{
						enemy1=23;
					}
					if (chance>=86 && chance<=90)
					{
						enemy1=24;
					}
					if (chance>=91 && chance<=95)
					{
						enemy1=25;
					}
					if (chance>=96 && chance<=99)
					{
						enemy1=26;
					}
					if (chance==100)
					{
						enemy1=19;
					}
					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);
				}
				if (choice==4)
				{
					cout<<"\nYou drink and notice yourself holding your liquor more, but you still piss      yourself drunk.";	
					clearscreen();
				}
				if (choice==5)
				{
					cout<<"\nEverybody just stares at you, Ted, the goons, and you swear Haikqhal stared at  you to death while you were dabbing on him";	
					clearscreen();
				}
				if (choice==6)
				{
					cout<<"\nTed, now looking better than before, calls all the goons together, that means   you too.";
   					getch();
   					cout<<"\n\nTed: Lads, after consultin' my spies, I've come to a conclusion. That dastardly witch to the tower orchestrated this bongfest, an' we're gonna rope her innards round her neck";
   					getch();
   					cout<<"\n\nThe goons seem disinterested";
  					getch();
  					cout<<"\n\n.";
   					Sleep(700);
   					cout<<".";
   					Sleep(700);
   					cout<<".";
   					Sleep(1000);
   					cout<<"\n\nTed:...the magic stuff in the tower is worth a pretty penny too I guess";
   					getch();
   					cout<<"\n\nThe goons erupted into manic celebration";
   					getch() ;
   					cout<<"\n\nOh well, what can I do? This band of maniac men are my home now I guess";
   					clearscreen();
   					count=1;
				}
   			}
   			route=3;
   			goto RouteChoice;
   		}//banditroute end
		
		if (route==3)   //final arc
		{
			int counter=0;
  			cout<<"\nYou approach the mage tower alone in the middle in the night. You open those    unearthly doors again and get sucked in.";
  			getch();
  			cout<<"\nYou try to spot he hag witch, but the damn granny is nowhere to be seen. That isuntil an icicle lands a centimeter from your left foot";
  			Sleep(699);
  			cout<<"\n\nLEAVE!";
  			clearscreen();
  			do{
  			cout<<"\n LEAVE! GO AWAY! DIE!";
  			counter++;
  			}while(counter<1001);
  			clearscreen();
  			cout<<"\nHag Witch: I've no need for such USELESS PAWNS anymore!";
  			getch();
  			cout<<"\n\nBeing attacked out of nowhere isn't pleasant, but why she wants you dead        specifically you don't know, so all you can do is attack, or give up.\n\n";
  			cout<<"What now?\n\n1- Fight\n2- resign yourself to fate\n3- have an aneurysm\n\n";
  			cout<<"Choice: ";
   			cin>>choice;
   			clearscreen();
   			count=0;
   			while (count!=1)
   			{
   				if (choice==1)
   				{
   					cout<<"\nYou bolden yourself, and charge her headlong disregarding her spellcasts";
   					enemy1=7;
   					attackscreen(playerXP,Gold,playerHP,playerHPMax,playerATK,enemy1,playerXPCap,playerLevel,heal2);	
   					count=1;
				}
				if (choice==2)
				{
    				count2=0;
    				while (count2!=1)
    				{
    					srand(time(0));
    					chance = (rand()%100)+1;
    					
    					if (chance>=0 && chance<=70)
    					{
    						cout<<"\nA fireball misses you, and you still stand solid at the same spot";
    						clearscreen();
    						count2=1;
						}
						if (chance>=71 && chance<=100)
						{
							cout<<"\nYou get sprayed with acid, you die slowly melting, not a good way to die at all.";
							exit(0);
						}
					}
				}
				if (choice==3)
				{
					cout<<"\nYou die.";
					exit(0);
				}
			}
			cout<<"\nMeanie Hag: You were always" ;
  			Sleep(700);
  			cout<<".";
  			Sleep(700);
  			cout<<".";
  			Sleep(700);
  			cout<<".";
  			getch();
  			cout<<"\n\nYou you stab her before she says anything else. She's dead. You killed your onlyway out of this world, good job being stuck.";
  			exit(0);
		}//final arc closing
}
	
void clearscreen()	//function return value wo parameter
{
	cout<<"\n\n\nPress any key to continue...";
	getch();
	system("CLS");
}

void attackscreen(int& playerXP2,int& Gold2,int PlayerHP2,int& PlayerHPMax2,int& PlayerATK2,int enemy,int& playerXPCap2,int& playerLevel2,int&heal) //function return/no return value with multiple parameter
{
	int atkchoice,random_number,enemyDamage,enemyHP=1,enemyHPCur,x=1,xpGain,goldGain;
	string enemyName;
	
	PlayerHP2=PlayerHPMax2;
	
	enemy_type(enemy,enemyName,enemyHP,enemyDamage,xpGain,goldGain);
	
	while(PlayerHP2 > 0 and enemyHP > 0)
	{
	enemy_type(enemy,enemyName,enemyHP,enemyDamage,xpGain,goldGain);
	
	if(x!=1)
	{
		enemyHP=enemyHPCur;
	}
	
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"player hp: "<<PlayerHP2<<"		||		"<<enemyName<<" hp: "<<enemyHP<<endl<<endl;
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"What to do now? \n";
	cout<<"1-attack \n";
	cout<<"2-heal \n\n";
	cout<<"Your choice: ";
	cin>>atkchoice;
	cout<<" \n";

	if(atkchoice==1)
	{
		cout<<"You choose to attack \n"; 
		enemyHP-=PlayerATK2;
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<"\nEnemy "<<enemyName<<" take "<<PlayerATK2<<" damage!\n";
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
		Sleep(0200);
	}
	else if(atkchoice==2)
	{	
		cout<<"you choose to heal yourself \n";    
		PlayerHP2+=heal;
		if(PlayerHP2>PlayerHPMax2)
		{
			PlayerHP2=PlayerHPMax2;
		}
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<"\nYou healed yourself for "<<heal<<" hp!\n";
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
		Sleep(0200);
	}
	else
	{
		cout<<"What? \n";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<"\nYou just stand there and do nothing \n";
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; 
		Sleep(0200);
	}
	if (enemyHP>=0)
	{
		cout<<"\nEnemy "<<enemyName<<" attacks you."<<endl;
	
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<". ";
		Sleep(0200);
		cout<<"\nYou take "<<enemyDamage<<" damage!\n";
	
		PlayerHP2=PlayerHP2-enemyDamage;
	}
	
	cout<<"\n\n\nPress any key to continue...";
	getch();
	system("CLS");
	
	enemyHPCur=enemyHP;
	x--;	
	}
	
	if (PlayerHP2<=0)
	{
		cout<<"\n------------------------------------You lose------------------------------------\n\n";
		cout<<"Well you suck, we're gonna go look for another sucker to do the dirty work, see ya' never!\n\n\n\n\n";
		exit(0);
	}
	else if (enemyHP<=0)
	{
		playerXP2+=xpGain;
		Gold2+=goldGain;
		if(playerXP2>playerXPCap2)
		{	
			while(playerXP2>playerXPCap2)
				{
				 	playerXP2-=playerXPCap2;
					playerXPCap2+=playerXPCap2*0.3;
					playerLevel2++;
					PlayerHPMax2+=PlayerHPMax2*0.2;
					PlayerATK2+=sqrt(PlayerATK2);	
					heal+=2;
					cout<<"\nYou Leveled up!\nYou are now LEVEL "<<playerLevel2<<"\nHP increased to: "<<PlayerHPMax2<<"		|	 ATK increased to: "<<PlayerATK2;
					clearscreen();
				}
		}
			cout<<"\n++++++++++++++++++++++++++++++++++++You won+++++++++++++++++++++++++++++++++++++\n\n";
			cout<<"You gained "<<xpGain<<" exp\n";
			cout<<"LVL: "<<playerLevel2<<"	||	EXP: "<<playerXP2<<" < "<<playerXPCap2<<"	||	Gold= "<<Gold2<<"\n\n\n\n\n";
			clearscreen();
	}
}	
												
void enemy_type(int enemy,string& enemyName1,int& enemyHP1,int& enemyDamage1,int& xpGain2,int& goldGain2)		//function return/no return value with multiple parameter
{

if (enemy == 1)
{
	enemyName1 = "Goblin";
    enemyHP1 = 20;
    srand(time(0));
    enemyDamage1 = (rand()%5)+1;
    xpGain2=20;
    goldGain2=xpGain2;
}
else if (enemy == 2)
{
	enemyName1 = "Giant Rat";
    enemyHP1 = 20;
    srand(time(0));
    enemyDamage1 = (rand()%6)+1;
    xpGain2=22;
    goldGain2=xpGain2;
}
else if (enemy == 3)
{
	enemyName1 = "Skeleton Rat";
	enemyHP1 = 20;
    srand(time(0));
    enemyDamage1 = (rand()%9)+1;
    xpGain2=27;
    goldGain2=xpGain2;
}
else if (enemy == 4)
{
	enemyName1 = "Skeleton Goblin";
    enemyHP1 = 20;
    srand(time(0));
    enemyDamage1 = (rand()%8)+1;
    xpGain2=26;
    goldGain2=xpGain2;
}
else if (enemy == 5)
{
	enemyName1 = "Scot";
    enemyHP1 = 50;
    srand(time(0));
    enemyDamage1 = (rand()%12)+1;
    xpGain2=34;
    goldGain2=xpGain2;
}
else if (enemy == 6)
{
	enemyName1 = "Bandit";
    enemyHP1 = 35;
    srand(time(0));
    enemyDamage1 = (rand()%10)+1;
    xpGain2=0;
    goldGain2=xpGain2;
}
else if (enemy == 7)
{
	enemyName1 = "Grand Wizard of Satella";
    enemyHP1 = 177;
    srand(time(0));
    enemyDamage1 = (rand()%30)+1;
    xpGain2=999;
    goldGain2=xpGain2;
}
else if (enemy == 8)
{
	enemyName1 = "Large Danger Noodle";
    enemyHP1 = 34;
    srand(time(0));
    enemyDamage1 = (rand()%10)+1;
    xpGain2=30;
    goldGain2=xpGain2;
}
else if (enemy == 9)
{
	enemyName1 = "Large Beetle";
    enemyHP1 = 65;
    srand(time(0));
    enemyDamage1 = (rand()%8)+1;
    xpGain2=34;
    goldGain2=xpGain2;
}
else if (enemy == 10)
{
	enemyName1 = "Living Armor";
    enemyHP1 = 38;
    srand(time(0));
    enemyDamage1 = (rand()%12)+1;
    xpGain2=35;
    goldGain2=xpGain2;
}
else if (enemy == 11)
{
	enemyName1 = "Dragon-kin Tribesman";
    enemyHP1 = 40;
    srand(time(0));
    enemyDamage1 = (rand()%10)+1;
    xpGain2=36;
    goldGain2=xpGain2;
}
else if (enemy == 12)
{
	enemyName1 = "Kultsmen";
    enemyHP1   = 47;
    srand(time(0));
    enemyDamage1 = (rand()%13)+1;
    xpGain2=39;
    goldGain2=xpGain2;
}
else if (enemy == 13)
{
	enemyName1 = "Marquis Puas";
    enemyHP1   = 78;
    srand(time(0));
    enemyDamage1 = (rand()%14)+1;
    xpGain2=250;
    goldGain2=xpGain2;
}
else if (enemy == 14)
{
	enemyName1 = "Wolf";
    enemyHP1   = 30;
    srand(time(0));
    enemyDamage1 = (rand()%9)+1;
    xpGain2=31;
    goldGain2=xpGain2;
}
else if (enemy == 15)
{
	enemyName1 = "Novice Lich";
    enemyHP1   = 40;
    srand(time(0));
    enemyDamage1 = (rand()%6)+1;
    xpGain2=32;
    goldGain2=xpGain2;
}
else if (enemy == 16)
{
	enemyName1 = "Armorer";
    enemyHP1   = 30;
    srand(time(0));
    enemyDamage1 = (rand()%10)+1;
    xpGain2=33;
    goldGain2=xpGain2;
}
else if (enemy == 17)
{
	enemyName1 = "Wolfrider Goblin";
    enemyHP1   = 25;
    srand(time(0));
    enemyDamage1 = (rand()%15)+1;
    xpGain2=38;
    goldGain2=xpGain2;
}
else if (enemy == 18)
{
	enemyName1 = "Juvenile Wyrm";
    enemyHP1   = 55;
    srand(time(0));
    enemyDamage1 = (rand()%14)+1;
    xpGain2=45;
    goldGain2=xpGain2;
}
else if (enemy == 19)
{
	enemyName1 = "Thanos Car";
    enemyHP1   = 666;
    srand(time(0));
    enemyDamage1 = (rand()%50)+1;
    xpGain2=9999;
    goldGain2=xpGain2;
}
else if (enemy == 20)
{
	enemyName1 = "Knight in Shining Armor";
    enemyHP1   = 48;
    srand(time(0));
    enemyDamage1 = (rand()%5)+1;
    xpGain2=37;
    goldGain2=xpGain2;
}
else if (enemy == 21)
{
	enemyName1 = "Black Knight";
    enemyHP1   = 50;
    srand(time(0));
    enemyDamage1 = (rand()%15)+1;
    xpGain2=41;
    goldGain2=xpGain2;
}
else if (enemy == 22)
{
	enemyName1 = "Generic Villager";
    enemyHP1   = 10;
    srand(time(0));
    enemyDamage1 = (rand()%2)+1;
    xpGain2=10;
    goldGain2=xpGain2;
}
else if (enemy == 23)
{
	enemyName1 = "Helpless woman";
    enemyHP1   = 5;
    srand(time(0));
    enemyDamage1 = (rand()%7)+1;
    xpGain2=5;
    goldGain2=xpGain2;
}
else if (enemy == 24)
{
	enemyName1 = "Helpless Child";
    enemyHP1   = 2;
    srand(time(0));
    enemyDamage1 = (rand()%1)+1;
    xpGain2=0;
    goldGain2=xpGain2;
}
else if (enemy == 25)
{
	enemyName1 = "Sword Prodigy";
    enemyHP1   = 30;
    srand(time(0));
    enemyDamage1 = (rand()%20)+1;
    xpGain2=38;
    goldGain2=xpGain2;
}
else if (enemy == 26)
{
	enemyName1 = "Dragon Cavalry";
    enemyHP1   = 100;
    srand(time(0));
    enemyDamage1 = (rand()%25)+1;
    xpGain2=55;
    goldGain2=xpGain2;
}
else if (enemy == 27)
{
	enemyName1 = "Knight";
    enemyHP1   = 48;
    srand(time(0));
    enemyDamage1 = (rand()%10)+1;
    xpGain2=42;
    goldGain2=xpGain2;
}
else if (enemy == 28)
{
	enemyName1 = "Captain Liliane";
    enemyHP1   = 55;
    srand(time(0));
    enemyDamage1 = (rand()%20)+1;
    xpGain2=78;
    goldGain2=xpGain2;
}
else if (enemy == 29)
{
	enemyName1 = "Gerbil Murderer";
    enemyHP1   = 23;
    srand(time(0));
    enemyDamage1 = (rand()%7)+1;
    xpGain2=28;
    goldGain2=xpGain2;
}
}








