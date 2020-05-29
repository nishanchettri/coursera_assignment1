#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
assert((c.value>=2)&&(c.value<=VALUE_ACE));
assert((c.suit>=SPADES)&&(c.suit<=CLUBS));
}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r)
  { 
    case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH";break;
    case  FOUR_OF_A_KIND: return "FOUR_OF_A_KIND";break;
    case  FULL_HOUSE: return "FULL_HOUSE";break;
    case  FLUSH: return "FLUSH";break;
    case  STRAIGHT: return "STRAIGHT";break;
    case  THREE_OF_A_KIND: return "THREE_OF_A_KIND";break;
    case  TWO_PAIR: return "TWO_PAIR";break;
    case  PAIR: return "PAIR";break;
    case  NOTHING: "NOTHING";break;

  }
}

char value_letter(card_t c) {
  return 'x';
}


char suit_letter(card_t c) {
  return 'x';
  
}

void print_card(card_t c) {

}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  return temp;
}
