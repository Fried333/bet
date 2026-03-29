#ifndef POKER_H
#define POKER_H

#include <stdint.h>

unsigned long five_card_draw_score(const unsigned char *h);
unsigned long seven_card_draw_score(const unsigned char *h);
uint32_t set_handstr(char *handstr, uint8_t cards[7], int32_t verbose);

#endif /* POKER_H */
