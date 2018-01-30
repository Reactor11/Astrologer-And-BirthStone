#include<stdio.h>
#include<conio.h>
//Function Declaration
int welcomescr();
int mainmenu();
int smainoptn();
int mmoption1();
int mmoption2();
int mmoption3();
int mmoption4();
//Main Function Starts Here
int choice;
int main()
{
	welcomescr();
	getch();
	system("cls");
	choice=mainmenu();
	system("cls");
	smainoptn(choice);
	return 0;
}
int welcomescr()
{
	system("cls");
	system("COLOR 1F");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	sleep(1);
	printf("\t\t\t\t\t   ::Source:Astrology.com                           Powered By-AAJTAK::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	sleep(1);
	printf("\t\t\t\t\t   ::****************************Welcome*****************************::\n");
	printf("\t\t\t\t\t   ::******************************To********************************::\n");
	printf("\t\t\t\t\t   ::************************Kismat Konnection***********************::\n");
	printf("\t\t\t\t\t   ::******(The Astrologer Who Knows About Everything About You)*****::\n");
	sleep(1);
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	sleep(1);
	printf("\t\t\t\t\t   ::NAME-MANAS BHARDWAJ                     Registration ID-11704118::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
}
int mainmenu()
{
	int choice;
	system("cls");
	system("COLOR 1F");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::                        Kismat Konnection                       ::\n");
	printf("\t\t\t\t\t   ::      (The Astrologer Who Knows About Everything About You)     ::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::                          |Main Menu|                           ::\n");
	printf("\t\t\t\t\t   ::                           ~~~~~~~~~                            ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                 1.To Know About Your BirthStone.               ::\n");
	printf("\t\t\t\t\t   ::                 2.To Know About Your Zodiac Sign.              ::\n");
	printf("\t\t\t\t\t   ::                 3.To Know Todays Astrology.                    ::\n");
	printf("\t\t\t\t\t   ::                 4.To Know About Your Characterstic.            ::\n");
	printf("\t\t\t\t\t   ::                 5.Exit                                         ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t                      Enter Your Choice:- ");
	scanf("%d",&choice);
	return choice;
	
}
int smainoptn(int c)
{
switch(c)
	{
		case 1:
			mmoption1();
			break;
		case 2:
			mmoption2();
			break;
		case 3:
			mmoption3();
			break;
		case 4:
			mmoption4();
			break;
		case 5:
			break;
		default:
			printf("Enter Correct Choice :- ");
			getch();
			system("cls");
			mainmenu();
	}
}
int mmoption1()
{
	int month,date;
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::                        Kismat Konnection                       ::\n");
	printf("\t\t\t\t\t   ::      (The Astrologer Who Knows About Everything About You)     ::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::                   |Know About Your BirthStone|                 ::\n");
	printf("\t\t\t\t\t   ::                    ~~~~~~~~~~~~~~~~~~~~~~~~~~                  ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t                         Enter Your Birthday Date :- ");
	scanf("%d",&date);
	printf("\t\t\t\t\t                         Enter Your Birthday Month :- ");
	scanf("%d",&month);
	if(month==1)
	{
	printf("\t\t\t\t\t        Your Birthstone is:- Garnet(Gem of Light And Guidance)\n");
	printf("\t\t\t\t\t     Garnet is one of the oldest gemstones in human history, dating back to the Bronze age.\n\t\t\t\t\t     Garnet is considered a gift of eternal love?");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==2)
	{
	printf("\t\t\t\t\t        Your Birthstone is:- Amethyst(Gem of peace and tranquility)\n");
	printf("\t\t\t\t\tAmethyst is used in religious ceremonies and has been a favorite of kings and queens throughout the ages.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==3)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Aquamarine(Gem of happiness and youth)\n");
	printf("\t\t\t\t\tAquamarine is considered the gem of the sea. Aquamarine is one of the favorite gems of jewelry designers and gemstone artists");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
    }
	else if(month==4)
	{
	printf("\t\t\t\t\tYour Birthstone is:- White Topaz(Gem of clarity and strength)\n");
	printf("\t\t\t\t\tAlthough Diamond is the official birthstone of April, many jewelers use white topaz as an affordable alternative.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==5)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Emerald(Gem of love and life)\n");
	printf("Legends say that the Holy Grail was made from solid emerald.An emerald can protect you from unfaithfulness.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==6)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Lab Alexandrite(Gem of luck and fortune)\n");
	printf("\t\t\t\t\tLab-created alexandrite is more popular than the genuine gemstone.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}	
	else if(month==7)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Ruby(Gem of passion and desire)\n");
	printf("\t\t\t\t\tA ruby is really a sapphire in disguise.Ruby is considered the king of the gemstones.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==8)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Peridot(Gem of spirit and expression)\n");
	printf("\t\t\t\t\tPeridot is the gem of spirit and expression.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}	
	else if(month==9)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Sapphire(Gem of sincerity and trust)\n");
	printf("\t\t\t\t\tSapphire is significant to many of the world's religions.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==10)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Opal(Gem of brilliance and mystery)\n");
	printf("\t\t\t\t\tOpals played a major role in the marriage of Napoleon and Josephine.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==11)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Citrine(Gem of optimism and renewal)\n");
	printf("\t\t\t\t\tCitrine is really an amethyst in disguise.citrine is called the merchant's stone." );
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else if(month==12)
	{
	printf("\t\t\t\t\tYour Birthstone is:- Blue Topaz(Gem of clarity and strength)\n");
	printf("\t\t\t\t\tBlue Topaz protected emperors and kings throughout history");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	else
	{
	printf("Entered Month Number Is Incorrect.");
	getch();
	system("cls");
	mmoption1();
	}
}
int mmoption2()
{
	int month,date,year;
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::                        Kismat Konnection                       ::\n");
	printf("\t\t\t\t\t   ::      (The Astrologer Who Knows About Everything About You)     ::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::                   |Know About Your Zodiac Sign|                ::\n");
	printf("\t\t\t\t\t   ::                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t                         Enter Your Birthday Date :- ");
	scanf("%d",&date);
	printf("\t\t\t\t\t                         Enter Your Birthday Month :- ");
	scanf("%d",&month);
	printf("\t\t\t\t\t                         Enter Your Birthday Year :- ");
	scanf("%d",&year);
	if (((date>=21)  && (month==3)) || ((date<=20 ) && (month==4 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- ARIES(The Ram) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=21)  && (month==4)) || ((date<=21 ) && (month==5 )))
	{
	printf("\t\t\t\t\t					 Your Zodiac Sign is:- TAURUS(The Bull) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==5)) || ((date<=21 ) && (month==6 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- GEMINI(The Twins) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==6)) || ((date<=22 ) && (month==7 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- CANCER(The Crab) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==7)) || ((date<=22 ) && (month==8 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- LEO(The Lion) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==8)) || ((date<=22 ) && (month==9 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- VIRGO(The Vigin) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==9)) || ((date<=23 ) && (month==10 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- LIBRA(The Scales) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=24)  && (month==10)) || ((date<=21 ) && (month==11 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- SCORPIO(The Scorpion) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==11)) || ((date<=21 ) && (month==12 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- SAGITTARIUS(The Archer) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==12)) || ((date<=21 ) && (month==1 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- CAPRICORN(The Goat) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==1)) || ((date<=18 ) && (month==2 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- AQUARIUS(The Water Bearer) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=19)  && (month==2)) || ((date<=20 ) && (month==3 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- PISCES(The Fish) \n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
}
int mmoption3()
{
    int date,month,year;
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::                        Kismat Konnection                       ::\n");
	printf("\t\t\t\t\t   ::      (The Astrologer Who Knows About Everything About You)     ::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::                       |Todays Astrology|                       ::\n");
	printf("\t\t\t\t\t   ::                        ~~~~~~~~~~~~~~~~                        ::\n");
    printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t   ::                    Enter Your Birthday Date :- ");
	scanf("%d",&date);
	printf("\t\t\t\t\t   ::                    Enter Your Birthday Month :- ");
	scanf("%d",&month);
	printf("\t\t\t\t\t   ::                    Enter Your Birthday Year :- ");
	scanf("%d",&year);
		if (((date>=21)  && (month==3)) || ((date<=20 ) && (month==4 )))
	{
	printf("\t\t\t\t\t   ::                Your Zodiac Sign is:- ARIES \n");
	printf("\t\t\t\t\t   ::                Todays Astrology is:-\n");
	printf("\t\t\t\t\t Every now and then, everything just falls into place with only the slimmest effort on your part.\n");
	printf("\t\t\t\t\t See what happens when you go with the flow today, rather than trying to force things to happen exactly \nthe way you want them to.\n"); 
	printf("\t\t\t\t\t If you go for it immediately, you bypass all the pleasurable anticipation.\n");
	printf("\t\t\t\t\t Since victory is already pretty much a foregone conclusion, you should let it linger.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=21)  && (month==4)) || ((date<=21 ) && (month==5 )))
	{
	printf("\t\t\t\t\t	::				 Your Zodiac Sign is:- TAURUS \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n");
	printf("\t\t\t\t\t You need to feel connected to something bigger than yourself in order to maintain your sense of\nperspective and peace when they're most needed.\n");
	printf("\t\t\t\t\t It might be through art, spirituality, community service, nature or some combination.\n");
	printf("\t\t\t\t\t Take some time to nourish your spirit and celebrate where you are. \n");
	printf("\t\t\t\t\t A lot of luck (and love) have gone into making you, so be sure to appreciate everything around you.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==5)) || ((date<=21 ) && (month==6 )))
	{
	printf("\t\t\t\t\t  ::                Your Zodiac Sign is:- GEMINI \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n");
	printf("\t\t\t\t\t Let everything within you rise -- your spirits, your secret desires, your kindness and your compassion.\n");
	printf("\t\t\t\t\t It's time for you to be the best possible human being that you can be!\n");
	printf("\t\t\t\t\t You need to explore what it is you really want to do -- just thinking about it all should help you explore.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==6)) || ((date<=22 ) && (month==7 )))
	{
	printf("\t\t\t\t\t  ::                Your Zodiac Sign is:- CANCER \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t\t\t Are you challenging authority again?\n");
	printf("\t\t\t\t\t You've almost certainly been tweaking the rules and playing devil's advocate at every opportunity, and why not?\n"); 
	printf("\t\t\t\t\t The good news is that you have an appreciative audience for all of your wacky hijinks.\n");
	printf("\t\t\t\t\t The somewhat less good news is that you may have also earned the ire of someone who thinks they're in charge.\n"); 
	printf("\t\t\t\t\t Tone it down, for the time being -- soon you can go back to your old, more rambunctious self.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==7)) || ((date<=22 ) && (month==8 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- LEO \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t\t\t Something (or someone) has lit a metaphorical fire under you, and you're back to feeling like your old self.\n"); 
	printf("\t\t\t\t\t Now that your energy is back where it should be, it's time to cross off a few of those lingering items from your to-do list.\n"); 
	printf("\t\t\t\t\t If the load seems like it might be too much, don't hesitate to call on trusted friends,\nallies and colleagues to help you take care of it all.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==8)) || ((date<=22 ) && (month==9 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- VIRGO \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t\t\t If you keep saying yes when you mean no, you might just end up driving yourself crazy -- not to mention the people you love!\n");
	printf("\t\t\t\t\t Don't try to just give people what they want all the time -- you need to think about what you want now. \n");
	printf("\t\t\t\t\t How about a little extra peace and quiet? Maybe you want to bow out of your cousin's wedding reception?\n");
	printf("\t\t\t\t\t Whatever it is, try to give yourself everything and pay attention to how it makes you feel.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==9)) || ((date<=23 ) && (month==10 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- LIBRA \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t\t\t Some say that insanity is simply repeating the same action and hoping for different results.\n");
	printf("\t\t\t\t\t Right now, there's a situation or relationship in your life feels like you're banging your\nhead against a wall and hurting yourself endlessly -- so what are you waiting for? \n");
	printf("\t\t\t\t\t You can figure it all out with a little soul-searching.\n"); 
	printf("\t\t\t\t\t Take some time for yourself and get to it!\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=24)  && (month==10)) || ((date<=21 ) && (month==11 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- SCORPIO\n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t\t\t The heart is a funny thing -- like all the other muscles in your body, it needs a regular workout,\nbut it needs constant spiritual aerobics as well.\n");
	printf("\t\t\t\t\t Get out there and share your heart's energy with all kinds of people: family, your mate, colleagues, friends, and complete strangers.\n");
	printf("\t\t\t\t\t Volunteer in the community or find meaning in politics.\n");
	printf("\t\t\t\t\t The other funny thing about the heart is that even the smallest bit of nurturing can make it grow.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==11)) || ((date<=21 ) && (month==12 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- SAGITTARIUS) \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t\t\t It's time for you to do some serious cleaning.\n"); 
	printf("\t\t\t\t\t After all, if you've got too much junk cluttering up your available space, you can't add anything new.\n");
	printf("\t\t\t\t\t Clean out your closet, desk, car and -- most importantly -- your brain.\n");
	printf("\t\t\t\t\t You need to be rid of any outdated, useless or just plain silly preconceptions or ideas you've been lugging around.\n");
	printf("\t\t\t\t\t It's even more vital to toss out any opinions that belong to other people -- they should be the first to go!\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==12)) || ((date<=21 ) && (month==1 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- CAPRICORN\n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n");
	printf("\t\t\t Gossip is like fast food: it seems delicious before and during, but later on you just end up feeling disgusted with yourself.\n"); 
	printf("\t\t\t If colleagues or friends insist on swapping other people's secrets and want you to join in, just find a way to discreetly move away.\n"); 
	printf("\t\t\t There's no need to pass judgment or call them out -- it's just not your way to indulge in pointless chit-chat.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==1)) || ((date<=18 ) && (month==2 )))
	{
	printf("\t\t\t\t\t  ::                Your Zodiac Sign is:- AQUARIUS \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:-\n ");
	printf("\t\t\t The universe works in mysterious ways, so don't dismiss something or someone that's come into your life for no apparent reason.\n"); 
	printf("\t\t\t They might bring an important lesson for you to learn.\n");
	printf("\t\t\t If you choose to avoid it now, it will almost certainly reappear in a much more abrupt and confrontational form!\n");
	printf("\t\t\t It's much easier to go along for the ride and get all you can out of these freaky circumstances.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=19)  && (month==2)) || ((date<=20 ) && (month==3 )))
	{
	printf("\t\t\t\t\t  ::                 Your Zodiac Sign is:- PISCES \n");
	printf("\t\t\t\t\t  ::                 Todays Astrology is:- \n");
	printf("\t\t\t Projecting certain traits onto others can be fun, but why not leave that to Hollywood for now?\n"); 
	printf("\t\t\t Let's face it -- assuming pretty much anything about anyone just leads to more hassle than anything else.\n"); 
	printf("\t\t\t Suddenly things should look a lot friendlier!\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
}
int mmoption4()
{
	int month,date,year;
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t\t   ::                        Kismat Konnection                       ::\n");
	printf("\t\t\t\t\t   ::      (The Astrologer Who Knows About Everything About You)     ::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::----------------------------------------------------------------::\n");
	printf("\t\t\t\t\t   ::                   |Know About Your Characterstic.|             ::\n");
	printf("\t\t\t\t\t   ::                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~              ::\n");
	printf("\t\t\t\t\t   ::                                                                ::\n");
	printf("\t\t\t\t\t                         Enter Your Birthday Date :- ");
	scanf("%d",&date);
	printf("\t\t\t\t\t                         Enter Your Birthday Month :- ");
	scanf("%d",&month);
	printf("\t\t\t\t\t                         Enter Your Birthday Year :- ");
	scanf("%d",&year);
	if (((date>=21)  && (month==3)) || ((date<=20 ) && (month==4 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- ARIES(The Ram) \n");
	printf("\t\tYou are brave, sincere, dynamic, freedom-lovin spontaneous, adventurous and able to take initiatives, inspires others, childlike enthusiasm.\n");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=21)  && (month==4)) || ((date<=21 ) && (month==5 )))
	{
	printf("\t\t\t				 Your Zodiac Sign is:- TAURUS(The Bull) \n");
	printf("\t\t\tYou are friendly, high bearing capacity, strong willpower, developed sense of aesthetics, strong instincts, patient.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==5)) || ((date<=21 ) && (month==6 )))
	{
	printf("\t\t\t\t\t             Your Zodiac Sign is:- GEMINI(The Twins) \n");
	printf("\t\t  You are intellectual, logical, quick grasping, talented in writing and communication, talkative, joyful, full of knowledge.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==6)) || ((date<=22 ) && (month==7 )))
	{
	printf("\t\t\t\t\t             Your Zodiac Sign is:- CANCER(The Crab) \n");
	printf("\t\t\t\t  You are empathy, motherhood, protective, sacrificing and receptive to other people’s needs, strong intuition.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==7)) || ((date<=22 ) && (month==8 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- LEO(The Lion) \n");
	printf("\t\t\t  You are noble, expanded thinking, generous, self confident, inspiring, artistic.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==8)) || ((date<=22 ) && (month==9 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- VIRGO(The Vigin) \n");
	printf("\t\t\t  You brave, sincere, dynamic, freedom loving, spontaneous, adventurous, takes initiatives, inspiring, childlike enthusiasm.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=23)  && (month==9)) || ((date<=23 ) && (month==10 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- LIBRA(The Scales) \n");
	printf("\t\t\t  You are brave, sincere, dynamic, freedom loving, spontaneous, adventurous, takes initiatives, inspiring, childlike enthusiasm.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=24)  && (month==10)) || ((date<=21 ) && (month==11 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- SCORPIO(The Scorpion) \n");
	printf("\t\t\t You are power to transform themselves, deep perception, intuition, bearing and determined, ability to influence others.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==11)) || ((date<=21 ) && (month==12 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- SAGITTARIUS(The Archer) \n");
	printf("\t\t  You are open to new things, understanding, generous, philosophical, optimistic, faithful in God, freedom loving and enthusiastic.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==12)) || ((date<=21 ) && (month==1 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- CAPRICORN(The Goat) \n");
	printf("\t\t\t\t\t  You withstands difficulties, trustworthy, patient, determined, organized."); 
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=22)  && (month==1)) || ((date<=18 ) && (month==2 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- AQUARIUS(The Water Bearer) \n");
	printf("\t\t\t\t\t  You are humane, visionary, progressive, objective, rational and scientific, good at socializing.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
	if (((date>=19)  && (month==2)) || ((date<=20 ) && (month==3 )))
	{
	printf("\t\t\t\t\t                   Your Zodiac Sign is:- PISCES(The Fish) \n");
	printf("\t\t\t\t  You sensitive, compassionate, strong imagination, artistic inspiration, creative, good at heart, faith in God.");
	getch();
	mainmenu();
	choice=mainmenu();
	smainoptn(choice);
	}
}
