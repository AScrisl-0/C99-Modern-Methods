//
// Created by s0_0s on 2023/3/10.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_crads,rank,suit;
    const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};
    const char suit_code[] = {'c','d','h','s'};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d",&num_crads);

    printf("Your hand: ");
    while (num_crads > 0){
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_crads--;
            printf(" %c%c",rank_code[rank],suit_code[suit]);
        }
    }

    printf("\n");

    return 0;
}