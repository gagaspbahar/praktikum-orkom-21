#include <stdio.h>
#include <stdlib.h>
#include "support.h"
#include "phases.h"

FILE *infile;

int main(int argc, char *argv[])
{

    char *input;

    if (argc == 1)
    {
        infile = stdin;
    }

    /* Saat dijalankan dengan argumen berupa file, program akan membaca file sampai
    	EOF, kemudian akan membaca dari standar input. Jadi, setiap sudah berhasil menyelesaikan
    	satu level, password untuk memecahkan level tersebut dapat ditaruh ke dalam suatu file
    	dan dapat menghindari untuk mengetik ulang */
    else if (argc == 2)
    {
        if (!(infile = fopen(argv[1], "r")))
        {
            printf("%s: Error: Couldn't open %s\n", argv[0], argv[1]);
            exit(8);
        }
    }

    else
    {
        printf("Usage: %s [<input_file>]\n", argv[0]);
        exit(8);
    }

    start_game();

    printf("Welcome Player, there are 6 games that need to be completed to win prize. We wish you best of luck.\n");

    input = read_line();
    Light(input);
    stage_completed();
    printf("You have finished the first game, do you want to continue or have you given up, Player?\n");

    input = read_line();
    Sugar_Honeycombs(input);
    stage_completed();
    printf("Second game, Sugar Honeycombs already finish, Good Job! You should go, the next game is waiting for you.\n");

    input = read_line();
    Tug_of_War(input);
    stage_completed();
    printf("Third game, Tug of War, looks more difficult than the previous game. Are you ready for the next game?\n");

    input = read_line();
    Marbles(input);
    stage_completed();
    printf("Fourth game, you have succeed in obtaining the marbles. Start working on the next one, Player.\n");

    input = read_line();
    Glass(input);
    stage_completed();
    printf("Fifth game is completed, your eyes are clearer than the glass. Prepare yourself for the final game!\n");

    input = read_line();
    Squid(input);
    stage_completed();
    printf("Squid game is done. You are the sole survivor of Squid game, 45.6 billion won is on your hand now\n");
    printf("What now? All your partner is gone forever. What you gonna do with 45.6 billion won?\n");
    printf("Someone left very peculiar invitation card at your desk, would you accept the invitation?\n");

    return 0;
}
