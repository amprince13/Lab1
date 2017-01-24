#pragma once
#pragma once

#ifndef LAB1
#define LAB1
#include <vector>
#include <iostream>
#include <string>


enum card_rank { TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, JACK = 11, QUEEN = 12, KING = 13, ACE = 14, INVALID = -1 };
enum suit { H = 1, C = 2, S = 3, D = 4, I = -1 };
enum file_success { SUCCESS = 0, FAIL = -1, ARGCERROR = 2, NODECK = 3, FNF = 4 };
enum hand_rank {SF = 8, FK = 7, FH = 6, F = 5, ST = 4, TK = 3, TP = 2, P = 1, N = 0};
struct Card {
	card_rank card_rank;
	suit card_suit;
	bool operator< (const Card &) const;
};
/*struct Hand {
	vector<Card> check_hand;
	hand_rank hand_value;
	bool operator< (const Hand &) const;

};*/
std::string hand_to_string(const std::vector<Card> &string_deck);
int determine_hand(const std::vector<Card> &check_deck);
int parseFile(std::vector<Card> &deck);
suit switch_to_suit(char c);
card_rank switch_to_enum(int i);
int print_card(Card c);
int usage(char * program_name, char * input_text);
int print_deck(const std::vector<Card> &deck);

#endif