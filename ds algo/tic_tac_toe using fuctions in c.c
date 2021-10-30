#include<stdio.h>

char player_1 = 'x';
char player_2 = 'o';

int n, o, k, l;
char player;

char conditions(char player);
char display_board(char player);
char player_inputs(char player);

char board[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
char players_turn(char player){
    switch (player){
        case 'x':
            printf("\n\n\t\t\t Player_1 trun \n\n\n");
            player_inputs(player);
            break;
        case 'o':
            printf("\n\n\t\t\t Player_2 trun  \n\n\n");
            player_inputs(player);
            break;
        default:
            break;
    }
    return player;
}
char conditions(char player){

    switch (player){
        case 'x':
            //ist if-else conditions starts from here for Player_1;
            if(board[0][0]=='x' && board[0][1]=='x' && board[0][2]=='x'){
                printf("Player_1 Won\n");
                break;
            }else if(board[1][0]=='x' && board[1][1]=='x' && board[1][2] == 'x'){
                printf("Player_1 won\n");
                break;
            }else if(board[2][0]=='x' && board[2][1]=='x' && board[2][2] == 'x'){
                printf("Player_1 won\n");
                break;
            }else if(board[0][0]=='x' && board[1][0]=='x' && board[2][0] == 'x'){
                printf("Player_1 won");
                break;
            }else if(board[0][1]=='x' && board[1][1]=='x' && board[2][1] == 'x'){
                printf("Player_1 won\n");
                break;
            }else if(board[0][2]=='x' && board[1][2]=='x' && board[2][2] == 'x'){
                printf("Player_1 won\n");
                break;
            }else if(board[0][0]=='x' && board[1][1]=='x' && board[2][2] == 'x'){
                printf("Player_1 won\n");
                break;
            }else if(board[2][0]=='x' && board[1][1]=='x' && board[0][2] == 'x'){
                printf("Player_1 won\n");
                break;
            }else{
                printf("");
            }
            
        case 'o':
            //2nd if-else conditons starts from here for Player_2;
            if(board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o'){
                printf("Player_2 Won\n");
                break;
            }else if(board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o'){
                printf("Player_2 Won\n");
                break;
            }else if(board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o'){
                printf("Player_2 won\n");
                break;
            }else if(board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o'){
                printf("Player_2 Won");
                break;
            }else if(board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o'){
                printf("Player_2 won\n");
                break;
            }else if(board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o'){
                printf("Player_2 Won\n");
                break;
            }else if(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o'){
                printf("Player_2 won\n");
                break;
            }else if(board[2][0]  == 'o'&& board[1][1] == 'o' && board[0][2] == 'o' ){
                printf("Player_2 Won\n");  
                break;
            }else{
                printf("");
            }
        default:
            //printf("\n\t\t\t Match Draw \n");
            break;
    }
}
char display_board(char player){
			
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
    conditions(player);
}
char player_inputs(char player){
    int i=0,j=0;
    for(i=0; i<3; i++){
		for(j=0; j<3; j++){
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

            printf("Enter the index value where u want to insert your value: \n");
            scanf(" %d %d",&n,&o);

            printf("Enter the value of board[%d][%d]: ",n,o);
            scanf(" %c", &board[n][o]);
    
            printf("\n\n\n");
            display_board(player);
            if (player == player_1){
                player = player_2;
                players_turn(player);
            }else if (player == player_2){
                player = player_1;
                players_turn(player);
            }else{
                printf("");
            }
        }
    }    
}
void main(){
   players_turn(player_1);
}