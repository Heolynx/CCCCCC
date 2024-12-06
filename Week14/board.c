//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
    for (i=0;i<N_BOARD;i++)
    {
    	 while (board_coin[i] == 0) {
            int random_coin = rand() % MAX_COIN; 
            if (board_coin[i] == 0) {           
                board_coin[i] = random_coin;
	}}}
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
   srand(time(NULL)); // 랜덤 시드 초기화

    for (i = 0; i < N_COINPOS; i++) {
        while (board_coin[i] == 0) {             
            int random_coin = rand() % MAX_COIN; 
            if (random_coin > 0) {               
                board_coin[i] = random_coin;
            }
        }
    }
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
    int steps = rand() % MAX_SHARKSTEP + 1; 
    int new_position = (shark_position + steps) % N_BOARD;

    board_status[shark_position] = BOARDSTATUS_OK; 
    shark_position = new_position;               
    board_status[shark_position] = BOARDSTATUS_NOK; 

    return shark_position; 
}

// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
