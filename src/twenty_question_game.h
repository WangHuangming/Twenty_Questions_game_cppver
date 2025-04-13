#ifndef TWENTY_QUESTION_GAME_H
#define TWENTY_QUESTION_GAME_H
#include "tree_node.h"

void greeting();

void learn(TreeNode &curr);

std::string readUserInput();

void adjustTree(TreeNode &curr, std::string newGuess,std::string oldGuess,std::string question);

void play(TreeNode &root);

#endif // TWENTY_QUESTION_GAME_H