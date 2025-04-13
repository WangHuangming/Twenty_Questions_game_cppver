#ifndef TREENODE_H
#define TREENODE_H
#include <string>

struct TreeNode{
    std::string question;
    std::string guess;
    bool leaf;
    TreeNode* yes;
    TreeNode* no;
    TreeNode(std::string initGuess, bool initLeaf);
    TreeNode(std::string initQuestion, std::string initGuess, bool initLeaf, TreeNode* initYes, TreeNode* initNo);
};

#endif