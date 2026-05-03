#ifndef AVLNODE_H
#define AVLNODE_H

#include "Player.h"

// The is the Node used by the AVL tree. Each node should store one player.
class AVLNode {
public:
    Player player;
    AVLNode* left;
    AVLNode* right;
    int height;

    AVLNode(const Player& playerData);
};

#endif
