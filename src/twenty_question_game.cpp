#include <iostream>
#include "twenty_question_game.h"

void greeting(){
    std::cout<< "Welcome to the guessing game! Let's play!" << std::endl;
    std::cout<< "I am going to try to guess what animal you are thinking of." <<std::endl;
}

std::string readUserInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}

void adjustTree(TreeNode &curr, std::string yesGuess,std::string noGuess,std::string question){
    curr.question=question;
    curr.guess="";
    curr.leaf=false;
    TreeNode* yesNode=new TreeNode(yesGuess,true);
    TreeNode* noNode=new TreeNode(noGuess,true);
    curr.yes=yesNode;
    curr.no=noNode;
}

void learn(TreeNode &curr){
    std::cout<<"Bummer"<<std::endl;
    std::cout<<"What animal were you thinking of?"<<std::endl;
    std::string userGuess=readUserInput();
    std::cout<<"Please enter a question that differentiates a "+userGuess+" from a "+curr.guess+":"<<std::endl;
    std::string userQuestion=readUserInput();
    std::cout<<"Is the answer for "+userGuess+" yes or no:"<<std::endl;
    std::string userAnswer=readUserInput();
    if(userAnswer=="yes"){
        adjustTree(curr,userGuess,curr.guess,userQuestion);  
    }else if(userAnswer=="no"){
        adjustTree(curr,curr.guess,userGuess,userQuestion);  
    }else{
        std::cout << "Invalid input. Please respond with 'yes' or 'no'." << std::endl;
        return;
    } 
}

void play(TreeNode &root){
    TreeNode* curr=&root;
    // Check if the current node is a leaf node
    // If it is, check guess
    // If it is not, ask a question and dive de into the tree
    while(!curr->leaf){
        std::cout<<curr->question<<std::endl;
        std::string answerForQuestion=readUserInput();
        if(answerForQuestion=="yes"){
            curr=curr->yes;
        }else if(answerForQuestion=="no"){
            curr=curr->no;
        }else{
            std::cout << "Invalid input. Please respond with 'yes' or 'no'." << std::endl;
            return;
        }
    }
    
    std::cout<<"Are you thinking of a "+curr->guess+"?(yes/no)"<<std::endl;
    std::string checkResult=readUserInput();
    if(checkResult=="yes"){
        std::cout<<"I got it!!"<<std::endl;
    }else if(checkResult=="no"){
        learn(*curr);     
    }else{
        std::cout << "Invalid input. Please respond with 'yes' or 'no'." << std::endl;
        return;
    }

}

