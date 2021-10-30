#include<stdio.h>
void main()
{
    // construcion of structure starts from here :-
    printf("\n\n");

    int i=0,j=0;

    printf("  \t\t\tTic Tac Toe Board\n");
    
    int k, l;
    
    char board[3][3] = {
    	 {'-', '-', '-'},
     	 {'-', '-', '-'},
    	 {'-', '-', '-'}
	 };

	for(k=0; k<3; k++)
	{
		printf("\t\t\t");
	
			for(l=0;l<3;l++) 
			{
				printf("   %c ", board[k][l]);
				if(l==2)
				{
					printf("\n");
				}
			}
	}
    
    printf("\n\n");
    printf("\n\n");     
   
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n\n");
			printf("\n\n");
			
			printf("\t\t\t");

			printf("  player 1 = x\n");
			
			printf("\t\t\t");

			printf("  player 2 = o\n"); 

			printf("\n\n");
			printf("\n\n");
			
			printf("  \t\t\tIndex's of Board\n");
			printf("\t\t\t[ 0.0, 0.1, 0.2 ]\n");
			printf("\t\t\t[ 1.0, 1.1, 1.2 ]\n");
			printf("\t\t\t[ 2.0, 2.1, 2.2 ]\n");
			
			printf("\n\n");
			printf("\n\n");

            int n,o;
            printf("Enter the index value where u want to insert your value: \n");
			scanf(" %d %d",&n,&o);

			printf("Enter the value of board[%d][%d]: ",n,o);
			scanf(" %c", &board[n][o]);
            
            printf("\n\n\n");
			
			printf("  \t\t\tTic Tac Toe Board\n");
		
			for(k=0; k<3; k++) 
			{
				printf("\t\t\t");
			
				for(l=0;l<3;l++) 
				{
					printf("   %c ", board[k][l]);
				
					if(l==2)
					{
						printf("\n");
					}
				}
			}

            // construction of structure ends here.

		}


            //ist if-else conditions starts from here for Player_1;


            if(board[0][0]=='x' && board[0][1]=='x' && board[0][2]=='x')
            {
                printf("Player_1 Won\n");
                break;
            }

            else if(board[1][0]=='x' && board[1][1]=='x' && board[1][2] == 'x')
            {
                printf("Player_1 won\n");
                break;
            }

            else if(board[2][0]=='x' && board[2][1]=='x' && board[2][2] == 'x')
            {
                printf("Player_1 won\n");
                break;
            }

            else if(board[0][0]=='x' && board[1][0]=='x' && board[2][0] == 'x')
            {
                printf("Player_1 won");
                break;
            }

            else if(board[0][1]=='x' && board[1][1]=='x' && board[2][1] == 'x')
            {
                printf("Player_1 won\n");
                break;
            }

            else if(board[0][2]=='x' && board[1][2]=='x' && board[2][2] == 'x')
            {
                printf("Player_1 won\n");
                break;
            }

            else if(board[0][0]=='x' && board[1][1]=='x' && board[2][2] == 'x')
            {
                printf("Player_1 won\n");
                break;
            } 

            else if(board[2][0]=='x' && board[1][1]=='x' && board[0][2] == 'x')
            {
                printf("Player_1 won\n");
                break;
            }
            
            //2nd if-else conditons starts from here for Player_2;
            
            else if(board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o')
            {
                printf("Player_2 Won\n");
                break;
                
            }

            else if(board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o')
            {
                printf("Player_2 Won\n");
                break;
            }

            else if(board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o')
            {
                printf("Player_2 won\n");
                break;
            }

            else if(board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o')
            {
                printf("Player_2 Won");
                break;
            }

            else if(board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o')
            {
                printf("Player_2 won\n");
                break;
            }

            else if(board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o')
            {
                printf("Player_2 Won\n");
                break;
            }

            else if(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o')
            {
                printf("Player_2 won\n");
                break;
            }

            else if(board[2][0]  == 'o'&& board[1][1] == 'o' && board[0][2] == 'o' )
            {
            
                printf("Player_2 Won\n");
                
            }

            else {
                printf("match draw\n");
            }         
	} 
}