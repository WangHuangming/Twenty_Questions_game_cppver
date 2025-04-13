#include "tree_node.h"

TreeNode::TreeNode(std::string initGuess, bool initLeaf){
    guess=initGuess;
    leaf=initLeaf;
}

TreeNode::TreeNode(std::string initQuestion, std::string initGuess, bool initLeaf, TreeNode* initYes, TreeNode* initNo){
    question=initQuestion;
    guess=initGuess;
    leaf=initLeaf;
    yes=initYes;
    no=initNo;
}