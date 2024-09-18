#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
//checking something for my profile -kev
struct question
{
	char q[100]; //stores question
	bool status; //determines whether or not player has seen question before
};

struct Player
{
  char Name[20]; //stores name of player
  int Points; //stores points earned by player
};

//History(), Geography(), Entertainment(), Food() functions ask player questions about category
//passes player array, corresponding questions array, difficulty selection, player number
void History(struct Player p[], struct question q[], int d, int i) 
{
    char answer;
    switch(d) //selects question based on the difficulty passed in the function
		{
			case 100:
				printf("%s", q[0].q);
				printf("[A] King George III\n[B] Napoleon Bonaparte\n[C] King Ferdinand\n[D] Alexander the Great\n");
				answer = fgetc(stdin);
				//checks to see if correct answer
				if(answer == 'C')
				{
					printf("Great job! +100 points\n");
					p[i].Points += 100;
					q[0].status = true; //indicates that player has already seen this question
				}
				else if(answer == 'c')
				{
					printf("Great job! +100 points\n");
					p[i].Points += 100;
					q[0].status = true; //indicates that player has already seen this question
				}
				else
				{
					printf("Sorry, wrong answer :(\n");
				}
			  break;
	    case 200:
		    printf("%s", q[1].q);
		    printf("[A] July 4th, 1776\n[B] August 2nd, 1776\n[C] August 2nd, 1777\n[D] July 4th, 1775\n");
		    answer = fgetc(stdin);
		    
		    if(answer == 'B')
		    {
				printf("Great job! +200 points\n");
				p[i].Points += 200;
				q[1].status = true;		
		    }
				else if(answer == 'b')
				{
					printf("Great job! +200 points\n");
					p[i].Points += 200;
					q[1].status = true;
				}
				else
				{
					printf("Sorry, wrong answer :(\n");
				}
	    break;
		case 300:
	    	printf("%s", q[2].q);
		    printf("[A] Theodore Roosevelt\n[B] James Madison\n[C] George Washington\n[D] Thomas Jefferson\n");
		    answer = fgetc(stdin);
		    
		    if(answer == 'B')
		    {
					printf("Great job! +300 points\n");
					p[i].Points += 300;
					q[1].status = true;		
		    }
				else if(answer == 'b')
				{
					printf("Great job! +300 points\n");
					p[i].Points += 300;
					q[1].status = true;
				}
				else
				{
					printf("Sorry, wrong answer :(\n");
				}
	    break;
		case 400:
	    	printf("%s", q[3].q);
		    printf("[A] 2005\n[B] 2010\n[C] 2013\n[D] 2007\n");
		    answer = fgetc(stdin);
		    
		    if(answer == 'D')
		    {
					printf("Great job! +400 points\n");
					p[i].Points += 400;
					q[3].status = true;		
		    }
				else if(answer == 'd')
				{
					printf("Great job! +400 points\n");
					p[i].Points += 400;
					q[3].status = true;
				}
				else
				{
					printf("Sorry, wrong answer :(\n");
				}
	    break;
		case 500:
	    	printf("%s", q[4].q);
		    printf("[A] 2012\n[B] 2009\n[C] 2006\n[D] 2004\n");
		    answer = fgetc(stdin);
		    
		    if(answer == 'C')
				{
					printf("Great job! +500 points\n");
					p[i].Points += 500;
					q[0].status = true; //indicates that player has already seen this question
				}
				else if(answer == 'c')
				{
					printf("Great job! +500 points\n");
					p[i].Points += 500;
					q[0].status = true; //indicates that player has already seen this question
				}
				else
				{
					printf("Sorry, wrong answer :(\n");
				}
			  break;
		default:
	    break;
		}
}

void Geography(struct Player p[], struct question g[], int d, int i)
{
    char answer;
	switch(d)
	{
        case 100:
        {
            printf("\n\t\t%s\n", g[0].q);//where da pyramids at?
            printf("\n\t\tSelect an answer: \n");
            printf("\t\t[A] Lebanon\n\t\t[B] Saudi Arabia\n");
            printf("\t\t[C] Egypt\n\t\t[D] Iran\n\n");
            
            printf("\t\t");
            answer = fgetc(stdin);
            
            if(answer=='C')
            {
                p[i].Points+=100;
                printf("\n\t\tGreat Job! +100pts\n");
				g[0].status = true;
            }
			else if(answer == 'c')
			{
				p[i].Points+=100;
                printf("\n\t\tGreat Job! +100pts\n");
				g[0].status = true;
			}
            else
            {
                printf("\n\t\tSorry, wrong answer :(\n");   
            }
        }
        break;
        
        case 200:
        {
            printf("\n\t\t%s\n", g[1].q);//Biggest river
            printf("\n\t\tSelect an answer: \n");
            printf("\t\t[A] Ob River\n\t\t[B] Nile River\n");
            printf("\t\t[C] Amur River\n\t\t[D] Congo River\n\n");
            
            printf("\t\t");
            answer = fgetc(stdin);
            
            if(answer=='B')
            {
                p[i].Points+=200;
                printf("\n\t\tGreat Job! +200pts\n");
				g[1].status = true;
            }
			else if(answer == 'b')
			{
				p[i].Points+=200;
                printf("\n\t\tGreat Job! +200pts\n");
				g[1].status = true;
			}
            else
            {
                printf("\n\t\tSorry, wrong answer :(\n");
            }
        }
        break;
        
        case 300:
        {
            printf("\n\t\t%s\n", g[2].q);//highest poulation
            printf("\n\t\tSelect an answer: \n");
            printf("\t\t[A] Bangladesh\n\t\t[B] India\n");
            printf("\t\t[C] Brazil\n\t\t[D] China\n\n");
            
            printf("\t\t");
            answer = fgetc(stdin);
            
            if(answer=='D')
            {
                p[i].Points+=300;
                printf("\n\t\tGreat Job! +300pts\n");
				g[2].status = true;
            }
			else if(answer=='d')
			{
				p[i].Points+=300;
                printf("\n\t\tGreat Job! +300pts\n");
				g[2].status = true;
			}
            else
            {
                printf("\n\t\tSorry, wrong answer :(\n");
            }
        }
        break;
        
        case 400:
        {
            printf("\n\t\t%s\n", g[3].q);//capital of canada
            printf("\n\t\tSelect an answer: \n");
            printf("\t\t[A] Ottowa\n\t\t[B] Toronto\n");
            printf("\t\t[C] Vancouver\n\t\t[D] Montreal\n\n");
            
            printf("\t\t");
            answer = fgetc(stdin);
            
            if(answer=='A')
            {
                p[i].Points+=400;
                printf("\n\t\tGreat Job! +400pts\n");
				g[3].status = true;
            }
			else if(answer == 'a')
			{
				p[i].Points+=400;
                printf("\n\t\tGreat Job! +400pts\n");
				g[3].status = true;
			}
            else
            {
                printf("\n\t\tSorry, wrong answer :(\n");
            }
        }
        break;
        
        case 500:
        {
            printf("\n\t\t%s\n", g[4].q);//US state with no venomous snaeks
            printf("\n\t\tSelect an answer: \n");
            printf("\t\t[A] Hawaii\n\t\t[B] Alaska\n");
            printf("\t\t[C] Maine\n\t\t[D] Rhode Island\n\n");
            
            printf("\t\t");
            answer = fgetc(stdin);
            
            if(answer=='B')
            {
                p[i].Points+=500;
                printf("\n\t\tGreat Job! +500pts\n");
				g[4].status = true;
            }
			else if(answer == 'b')
			{
				p[i].Points+=500;
                printf("\n\t\tGreat Job! +500pts\n");
				g[4].status = true;
			}
            else
            {
                printf("\n\t\tSorry, wrong answer :(\n");
            }
        }
        break;
	}
}

void Entertainment(struct Player p[],struct question g[], int d, int i)
{
	char answer;
    switch(d)
    {
        case 100:
        {
            printf("%s\n", g[0].q);
            printf("[a] Barbie and Oppenheimer\n");
            printf("[b] Barbarian and Oppenheimer\n");
            printf("[c] Barbie and Ocean's Eleven\n");
            printf("[d] Bay Watch and Oculus\n");

            answer = fgetc(stdin);
            
            if(answer == 'A')
            {
                p[i].Points += 100;
                printf("You Got It! +100pts \n");
                g[0].status = true;
            }
			else if(answer == 'a')
			{
				p[i].Points += 100;
                printf("You Got It! +100pts \n");
                g[0].status = true;
			}
            else
            {
                printf("Sorry, That was incorrect \n");
            }
            break;
        }
        
        case 200:
        {
            printf("%s\n", g[1].q);
            printf("[a] The Little Mermaid\n");
            printf("[b] Fast X\n");
            printf("[c] Barbie\n");
            printf("[d] Magic Mike's Last Dance\n");

            answer = fgetc(stdin);
            
            if(answer == 'C')
            {
                p[i].Points+= 200;
                printf("You Got It! +200pts \n");
                g[1].status = true;
            }
			else if(answer == 'c')
			{
				p[i].Points+= 200;
                printf("You Got It! +200pts \n");
                g[1].status = true;
			}
            else
            {
                printf("Sorry, That was incorrect \n");
            }
            break;
        
        }
        
        case 300:
        {
            printf("%s\n", g[2].q);
            printf("[a] Barbie World\n");
            printf("[b] I'm Just Ken\n");
            printf("[c] Dance the Night\n");
            printf("[d] What Was I Made For\n");

            answer = fgetc(stdin);
            
            if(answer == 'C')
            {
                p[i].Points+= 300;
                printf("You Got It! +300pts \n");
                g[2].status = true;
            }
			else if(answer == 'c')
			{
				p[i].Points+= 300;
                printf("You Got It! +300pts \n");
                g[2].status = true;
			}
            else
            {
                printf("Sorry, That was incorrect \n");
            }
            break;
        
        }
        
        case 400:
        {
            printf("%s\n", g[3].q);
            printf("[a] $346.2 Million\n");
            printf("[b] $246.2 Million\n");
            printf("[c] $207.8 Million\n");
            printf("[d] $198.7 Million\n");

            answer = fgetc(stdin);
            
            if(answer == 'B')
            {
                p[i].Points+= 400;
                printf("You Got It! +400pts \n");
                g[3].status = true;
            }
			else if(answer == 'b')
			{
				p[i].Points+= 400;
                printf("You Got It! +400pts \n");
                g[3].status = true;
			}
            else
            {
                printf("Sorry, That was incorrect \n");
            }
            break;
        
        }
    
        case 500:
        {
            printf("%s\n", g[4].q);
            printf("[a] $155 Million\n");
            printf("[b] $162 Million\n");
            printf("[c] $201 Million\n");
            printf("[d] $80.6 Million\n");

            answer = fgetc(stdin);
            
            if(answer == 'B')
            {
                p[i].Points+= 500;
                printf("You Got It! +500pts \n");
                g[4].status = true;
            }
			else if(answer == 'b')
			{
				p[i].Points+= 500;
                printf("You Got It! +500pts \n");
                g[4].status = true;
			}
            else
            {
                printf("Sorry, That was incorrect \n");
            }
            break;
        
        }
        break;
    }
}

void Food(struct Player p[], struct question q[], int d, int i)
{
  char answer;
	switch(d)
	{
		case 100:
			printf("%s\n", q[0].q);
			printf("[a] 12\n");
			printf("[b] 13\n");
			printf("[c] 77\n");
			printf("[d] 100\n");

			answer = fgetc(stdin);
			
			if(answer == 'B')
			{
				p[i].Points += 100;
				printf("Great Job! +100pts\n");
				q[0].status = true;
			}
			else if(answer == 'b')
			{
				p[i].Points += 100;
				printf("Great Job! +100pts\n");
				q[0].status = true;
			}
			else
			{
				printf("Sorry, wrong answer\n");    
			}
		break;
		case 200:
		{
			printf("%s\n", q[1].q);
			printf("[a] France\n");
			printf("[b] China\n");
			printf("[c] Italy\n");
			printf("[d] Iceland\n");

			answer = fgetc(stdin);

			if(answer == 'C')
			{
				p[i].Points += 200;
				printf("Great Job! +200pts\n");
				q[1].status = true;
			}
			else if(answer == 'c')
			{
				p[i].Points += 200;
				printf("Great Job! +200pts\n");
				q[1].status = true;
			}
			else
			{
				printf("Sorry, wrong answer\n");    
			}
		break;
		}
		case 300:
		{
			printf("%s\n", q[2].q);
			printf("[a] Polynesian sauce\n");
			printf("[b] Ranch\n");
			printf("[c] Barbeque sauce\n");
			printf("[d] Hot sauce\n");

			answer = fgetc(stdin);

			if(answer == 'D')
			{
				p[i].Points += 300;
				printf("Great Job! +300pts\n");
				q[2].status = true;
			}
			else if(answer == 'd')
			{
				p[i].Points += 300;
				printf("Great Job! +300pts\n");
				q[2].status = true;
			}
			else
			{
				printf("Sorry, wrong answer\n");    
			}
		break;
		}
		case 400:
		{
			printf("%s\n", q[3].q);
			printf("[a] Baking soda & water\n");
			printf("[b] Baking soda & oil\n");
			printf("[c] Baking powder & water\n");
			printf("[d] Baking powder & oil\n");

			answer = fgetc(stdin);

			if(answer == 'A')
			{
				p[i].Points += 400;
				printf("Great Job! +400pts\n");
				q[3].status = true;
			}
			else if(answer == 'a')
			{
				p[i].Points += 400;
				printf("Great Job! +400pts\n");
				q[3].status = true;
			}
			else
			{
				printf("Sorry, wrong answer\n");    
			}
			break;
		}
		case 500:
		{
			printf("%s\n", q[4].q);
			printf("[a] Chocolate Chip cookie\n");
			printf("[b] Cowboy cookie\n");
			printf("[c] Oatmeal raisin cookie\n");
			printf("[d] Snickerdoodle\n");

			answer = fgetc(stdin);
			
			if(answer == 'B')
			{
				p[i].Points += 500;
				printf("Great Job! +500pts\n");
				q[4].status = true;
			}
			else if(answer == 'b')
			{
				p[i].Points += 500;
				printf("Great Job! +500pts\n");
				q[4].status = true;
			}
			else
			{
				printf("Sorry, wrong answer\n");    
			}
			break;
		}
	}
}

bool questionCheck(struct question q[], int d)
{
	switch(d)
	{
		case 100:
			return q[0].status;
			break;
		case 200:
			return q[1].status;
			break;
		case 300:
			return q[2].status;
			break;
		case 400:
			return q[3].status;
			break;
		case 500:
			return q[4].status;
			break;
		deafault:
			break;
	}
	return false;
}


int main()
{
	//struct question arrays store questions for each difficulty for each category
	struct question geography[5]; //in order from easiest to hardest

	strcpy(geography[0].q, "In what country are the Great Pyramyds of Giza located?");
	//strcpy(geography[0].a, "Egypt");

	strcpy(geography[1].q, "What is the name of the largest river in Africa?");
	//strcpy(geography[1].a, "Nile River");

	strcpy(geography[2].q, "What country has the largest population in the World?");
	//strcpy(geography[2].a, "China");

	strcpy(geography[3].q, "What is the capital of Canada?");
	//strcpy(geography[3].a, "Ottawa");

	strcpy(geography[4].q, "What US state is home to no documented venomous snakes?");
	//strcpy(geography[4].a, "Alaska");


	struct question history[5]; //in order from easiest to hardest
	
	strcpy(history[0].q,"Who sent Christopher Columbus to explore the New World?\n");
	//strcpy(history[0].a, "King Ferdinand");
	
	strcpy(history[1].q, "When was the Declaration of Independence signed?\n");
	//strcpy(history[1].a, "August 2, 1776");
	
	strcpy(history[2].q, "Which is NOT a US president on Mount Rushmore?\n");
	//strcpy(history[2].a, "James Madison");
	
	strcpy(history[3].q, "What year was the first iPhone released?\n");
	//strcpy(history[3].a, "2007");
	
	strcpy(history[4].q, "What year did Pluto become a dwarf planet?\n");
	//strcpy(history[4].a, "2006");

	struct question food[5]; //in order from easiest to hardest
	
	strcpy(food[0].q, "How much is a baker's dozen?");
	//strcpy(food[0].a, "13");
	
	strcpy(food[1].q, "Where is the origin of lasagna?");
	//strcpy(food[1].a, "Italy");
	
	strcpy(food[2].q, "Which one is not a Chick-fil-A sauce?");
	//strcpy(food[2].a, "Hot sauce");
	
	strcpy(food[3].q, "What do you boil/\"bathe\" pretzels in?");
	//strcpy(food[3].a, "Baking soda and water");
	
	strcpy(food[4].q, "What is the state cookie of Texas?");
	//strcpy(food[4].a, "Cowboy cookie");
	
	struct question entertainment[5]; //in order from easiest to hardest
	
	strcpy(entertainment[0].q, "What opening weekend was labeled as Barbienheimer?");
	//strcpy(entertainment[0].a, "Barbie and Oppenheimer");
	
	strcpy(entertainment[1].q, "What summer blockbuster was released in 2023?");
	//strcpy(entertainment[1].a, "Barbie");
	
	strcpy(entertainment[2].q, "Which song from Barbie is the most listened too?");
	//strcpy(entertainment[2].a, "Dance the Night");
	
	strcpy(entertainment[3].q, "How much did Barbenheimer make in the box office during its opening weekend?");
	//strcpy(entertainment[3].a, "$246.2 million");
	
	strcpy(entertainment[4].q, "How much did Barbie make in the box office during its opening weekend?");
	//strcpy(entertainment[4].a, "$162 million");


	int numOfPlayers = 0;
	struct Player players[2]; //this game only allows up to 2 players

	game:

	for(int i = 0; i<5; i++)
	{
		history[i].status = false;
		geography[i].status = false;
		entertainment[i].status = false;
		food[i].status = false;
	}

	//sets player points to 0 for the print statement at the end, in case value is still not equal to something
	players[0].Points = 0;
	players[1].Points = 0;

	//prompts user to enter the number of players	
  printf("WELCOME TO FACT FRENZY!\nPlease enter how many players there are: "); 
	scanf("%d", &numOfPlayers);
	getchar();

	//assigns names to each player based on user entry
	for(int i = 0; i < numOfPlayers; i++) 
	{
		printf("\nPlease enter a name for player %d: ", i + 1);
		scanf("%s", players[i].Name);
	}

	//outside for loop will iterate through 10 rounds = 1 game
	for(int i = 0; i < 10; i++) 
	{
		//inside for loop will iterate through the number of players = 1 round
		for(int j = 0; j < numOfPlayers; j++) 
		{
			again:
				//player selects category
				printf("%s, ", players[j].Name); 
        printf("select the category you would like to play by entering the corresponding number: \n");
		    printf("[1] History\n[2] Geography\n[3] Entertainment\n[4] Food\n");
		
        int selection;
		    scanf("%d", &selection);
		    getchar();
				//checks to see if player selected correctly
				if(selection == 1 || selection == 2 || selection == 3 || selection == 4) 
            {}
        else
        {
	        printf("Please select a correct category.\n");
          goto again;
        }

			restart:
			//player selects difficulty
			printf("Select a difficulty level: \n"); 
			printf("[100] Very Easy\n[200] Easy\n[300] Medium\n[400] Hard\n[500] Very Hard\n");
			int difficulty;
			scanf("%d", &difficulty);
			getchar();
			//uses selection and difficulty to call functions and corresponding question to player
			switch(selection) 
			{
				case 1:
					if(questionCheck(history, difficulty))
					{
						printf("\n\tThis question has already been picked.");
						goto again;
					}

					//checks if player selected difficulty correctly
					if(difficulty == 100 || difficulty == 200 || difficulty == 300 || difficulty == 400 || difficulty == 500) 
					{
						History(players, history, difficulty, j);
					}
					else
					{
						printf("Please choose a correct difficulty.\n");
						goto restart;
                    }
					break;
				case 2:
					if(difficulty == 100 || difficulty == 200 || difficulty == 300 || difficulty == 400 || difficulty == 500)
					{
						Geography(players, geography, difficulty, j);
					}
					else
					{
						printf("Please choose a correct difficulty.\n");
						goto restart;
                    }
					break;
				case 3:
					if(difficulty == 100 || difficulty == 200 || difficulty == 300 || difficulty == 400 || difficulty == 500)
					{
						Entertainment(players, entertainment, difficulty, j);
					}
					else
					{
						printf("Please choose a correct difficulty.\n");
						goto restart;
                    }
                    break;
				case 4:
					if(difficulty == 100 || difficulty == 200 || difficulty == 300 || difficulty == 400 || difficulty == 500)
					{
						Food(players, food, difficulty, j);
					}
					else
					{
						printf("Please choose a correct difficulty.\n");
						goto restart;
					}
					    break;
				default:
					//loops back to category selection if none of the cases are satisfied
					printf("Please choose a different category."); 
					goto again;
			}
		}
		//at the end of each round, players' points will be displayed
		if(numOfPlayers == 1)
		{
			printf("\n\t%s - %d", players[0].Name, players[0].Points);
		}
		else if(numOfPlayers == 2)
		{
			printf("\n\t%s - %d", players[0].Name, players[0].Points);
			printf("\n\t%s - %d\n\n", players[1].Name, players[1].Points);
		}

		//at the end of each round, allows player(s) to choose if they want to keep playing
		again2:
		printf("Would you like to continue playing?\n"); 
		printf("[1] Yes\n[2] No\n");
		int play;
		scanf("%d", &play);
		getchar();
		if(play == 1)
		{
			continue;
		}
		else if(play == 2)
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Please select again.\n");
			goto again2;
		}
	}

	printf("\n\tWould you like to play again? ");
	printf("[1]Yes [2]No");

	int newGame = 0;

	scanf("%d", &newGame);
	getchar();

	if(newGame==1)
	{
		goto game;
	}

	return 0;
}