#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
<<<<<<< HEAD
  assert((c.value>=2)&&(c.value<=VALUE_ACE));
  assert((c.suit>=SPADES)&&(c.suit<=CLUBS));
=======
assert((c.value>=2)&&(c.value<=VALUE_ACE));
assert((c.suit>=SPADES)&&(c.suit<=CLUBS));
>>>>>>> 272bc856da26f207ffcf9285f8522d4ccd00f8b7
}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r)
<<<<<<< HEAD
    {
=======
  { 
>>>>>>> 272bc856da26f207ffcf9285f8522d4ccd00f8b7
    case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH";break;
    case  FOUR_OF_A_KIND: return "FOUR_OF_A_KIND";break;
    case  FULL_HOUSE: return "FULL_HOUSE";break;
    case  FLUSH: return "FLUSH";break;
    case  STRAIGHT: return "STRAIGHT";break;
    case  THREE_OF_A_KIND: return "THREE_OF_A_KIND";break;
    case  TWO_PAIR: return "TWO_PAIR";break;
    case  PAIR: return "PAIR";break;
<<<<<<< HEAD
    case  NOTHING:return "NOTHING";break;
    }
  return "";
=======
    case  NOTHING: "NOTHING";break;

  }
>>>>>>> 272bc856da26f207ffcf9285f8522d4ccd00f8b7
}
char value_letter(card_t c) {
  switch(c.value)
    {                                                                                                                                       ------------------------------------------------------------
    case 2:
      return '2';
      break;
    case 3:
      return '3';
      break;
    case 4:
      return '4';
      break;
    case 5:
      return '5';
      break;
    case 6:
      return '6';
      break;
    case 7:
      return '7';
      break;
    case 8:
      return '8';
      break;
    case 9:
      return '9';
      break;
    case 10:
      return '0';
      break;
    case VALUE_ACE:
      return 'A';
      break;
    case VALUE_KING:
      return 'K';
    case VALUE_QUEEN:
      return 'Q';
	     break;
    case VALUE_JACK:
      return 'J';
      break;
    }
  return 'x';
}


char suit_letter(card_t c) {

   switch(c.suit)
    {
    case SPADES:
      return 's';
      break;
    case HEARTS:
      return 'h';
      break;
    case DIAMONDS:
      return 'd';
      break;
    case CLUBS:
      return 'c';
      break;
    case NUM_SUITS:
      return '4';break;
    }
  return 'x';

}
void print_card(card_t c) {

  printf("%c",value_letter(c));
  printf("%c",suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  temp.value=value_let;
  temp.suit=suit_let;
  assert(value_let=='1');
  assert((value_let>57)||(value_let<48));
  assert((suit_let!=115)||(suit_let!=94)||(suit_let!=104)||(suit_let!=100));
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  if(c%13==1)
    {
      temp.value=14;
      temp.suit = c / 13;
      return temp;
    }
  temp.value = c % 13 + 1;
  temp.suit = c / 13;
  return temp;
}