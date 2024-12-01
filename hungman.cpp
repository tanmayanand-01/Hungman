#include <bits/stdc++.h>
using namespace std;

void string_generator(int n);

int main()	{
	
	cout << "RULES OF THE GAME:" << "\n";
	cout << " # You have to guess the correct word or phrase with the help of given hints." << "\n";
	cout << " # Press ENTER after entering a character." << "\n";
	cout << " # Don't enter more than one character at a time." << "\n";
	cout << " # You can enter wrong alphabet only three times." << "\n";
	cout << " # You either win or you die" << "\n";
	cout << "\n";
	int i,flag=0,error=0,counter=0;
	char t;
	int n;
	char uds[101];
	char ans[101];
	int exit=1;
	while(exit != 0)	{
		srand(time(NULL));
		n = (rand() % 11 )+ 1;
		string_generator(n);
		switch(n)
		{
			case 1 : { 
						char const *str = "13 REASONS WHY";
						strcpy(ans,str);
				 		break; 
					 }
			case 2 : { 
						char const *str = "GAME OF THRONES";
						strcpy(ans,str);
					 	break; 
					 }
			case 3 : { 
						char const *str = "ARTHUR CONAN DOYLE";
						strcpy(ans,str);
				 		break; 
				 	}
			case 4 : { 
						char const *str = "TVF PITCHERS";
						strcpy(ans,str);
				 		break; 
				 	}
			case 5 : { 
						char const *str = "ELVIS PRESLEY";
						strcpy(ans,str);
					 	break; 
					 }
			case 6 : {
						char const *str = "JOHN LENNON";
						strcpy(ans,str);
					 	break;
					 }
			case 7 : {
						char const *str = "SOVIET UNION";	
						strcpy(ans,str);
					 	break;
					 }
			case 8 : {
						char const *str = "ARYABHATTA";
						strcpy(ans,str);
					 	break;
					 }
			case 9 : { 
						char const *str = "RETURN OF THE JEDI";
						strcpy(ans,str);
					 	break; 
					 }
			case 10 : { 
						char const *str = "GEORGE WASHINGTON";
						strcpy(ans,str);
					 	break;
					  }
			case 11 : { 
						char const *str = "THEODORE ROOSEVELT";
						strcpy(ans,str);
					 	break;
				  	}
		}
	
		for(i=0;i<101;i++)	{
			*(uds+i) = '_';
			if(*(uds+i) == '_')
				flag++;
		}
		for(i=0;*(ans+i)!='\0';i++)	{
			if(*(ans+i) == ' ')
				*(uds+i) = ' ';
			cout << *(uds+i) << " ";
		}
		cout << "\n";
		while(flag != 0)	{
			cin >> t;
			if(t>=97 && t<=122)
				t = t-('a'-'A');
			counter = 0;
			for(i=0;*(ans+i)!='\0';i++)	{
				if(*(ans+i) == t)	{
					*(uds+i) = t;
					counter++;
				}
			}
			if (counter == 0)	{
				error++;
				if(error==3)	{
					cout << "Phewh! you lost :-(" << "\n" ;
					for(i=0;*(ans+i)!='\0';i++)	
						cout << *(ans+i);
					cout << "\n";
					break;
				}
				else
					cout << "Sorry you enterd wrong alphbet." << "\n";
			}
			flag=0;
			for(i=0;*(ans+i)!='\0';i++)	{
				cout << *(uds+i) << " ";
				if(*(uds+i) == '_')
				flag++;
			}
			cout << "\n";
			if(flag==0)
				cout << "Bravo! you got it." << "\n";
		}
		cout << "Press 0 to exit ar any other number to play again" << "\n";
		cin >> exit;
	}	
}

void string_generator(int n)	{
	
	switch(n)		
	{
		case 1 : cout << "A TV show based on best selling books by J Asher";
				 break;
		case 2 : cout << "A TV show in which nine noble family fight for power, while a forgotten race returns after being dormant for thousand of years";
				 break;
	   	case 3 : cout << "A TV show based on a detective in early 21st century of London was based on the novels written by a British author whose name was";			
				 break;
		case 4 : cout << "A story of trials and tribulations of four young entrepreneurs who quit their day jobs in order to pursue their start up venture";
				 break;
		case 5 : cout << "An American singer aka KING OF ROCK & ROLL who has recorded most number of HOT 100 hits";		   	
		         break;
		case 6 : cout << "An English guitarist, singer, and songwriter who co-founded the Beatles who was murdered while returning to New York with his wife";
			     break;
		case 7 : cout << "With approximately 27 Million total fatalities (both military and civilian), this country lost most lives during World War 2";
				 break;
		case 8 : cout << "The value of zero was first used by this ancient Indian mathematician";
				 break;
		case 9 : cout << "Which Starwars Episode has the codename BLUE HARVEST during it's shooting";
				 break;
		case 10 : cout << "Which American president was an ultra-successful liquor distributor in the new country. He made rye whiskey, apple brandy and peach brandy in his Mount Vernon distillery";
				  break;
		case 11 : cout << "Which American president completed the 90-minute speech with the bullet still lodged in his chest, he told the audience in Milwaukee, I don’t know whether you fully understand that I have just been shot,I give you my word, I do not care a rap about being shot, not a rap.";
				  break;
	}
	cout << "\n";
}