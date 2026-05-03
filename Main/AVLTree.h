#ifndef AVLTREE_H
#define AVLTREE_H

#include "AVLNode.h"


class AVLTree {
private:
    AVLNode* root;

    AVLNode* insert(AVLNode* node, const Player& player);
    AVLNode* remove(AVLNode* node, int id);
    Player* search(AVLNode* node, int id);
    void displayRankings(AVLNode* node, int& rank) const;

    int getHeight(AVLNode* node) const;
    int getBalance(AVLNode* node) const;
    AVLNode* rotateLeft(AVLNode* node);
    AVLNode* rotateRight(AVLNode* node);

public:
    AVLTree();

    void insert(const Player& player);
    void remove(int id);
    Player* search(int id);
    void displayRankings() const;
};

#endif
