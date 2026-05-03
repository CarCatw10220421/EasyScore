#include "AVLTree.h"

#include <algorithm>
#include <iostream>

AVLTree::AVLTree() : root(nullptr) {
}

void AVLTree::insert(const Player& player) {
    // Insert the player, update heights, and rebalance the tree
    root = insert(root, player);
}

void AVLTree::remove(int id) {
    // Remove the player by ID, update heights, and rebalance the AVL tree.
    root = remove(root, id);
}

Player* AVLTree::search(int id) {
    // Search for player by ID.
    return search(root, id);
}

void AVLTree::displayRankings() const {
    // Print players from highest score to lowest score.
    int rank = 1;
    displayRankings(root, rank);
}

AVLNode* AVLTree::insert(AVLNode* node, const Player& player) {
    // Implement recursive AVL insertion.
    return node;
}

AVLNode* AVLTree::remove(AVLNode* node, int id) {
    // Implement recursive AVL deletion.
    return node;
}

Player* AVLTree::search(AVLNode* node, int id) {
    // If tree is sorted by score, ID search may need to check both branches.
    return nullptr;
}

void AVLTree::displayRankings(AVLNode* node, int& rank) const {
    // Reverse in-order traversal should show highest scores first
}

int AVLTree::getHeight(AVLNode* node) const {
    // Return 0 for nullptr, otherwise return node height
    return node == nullptr ? 0 : node->height;
}

int AVLTree::getBalance(AVLNode* node) const {
    // Balance factor is left height minus right height.
    return node == nullptr ? 0 : getHeight(node->left) - getHeight(node->right);
}

AVLNode* AVLTree::rotateLeft(AVLNode* node) {
    // Implement left rotation.
    AVLNode *newRoot nweRoot = node->left;
    AVLNode *newRoot movedSubtree = newRoot->left:

    newRoot->left= node;
    node->right = movedSubrees;

    node->height =1 + std::max(getHeight(node->left), getHeight(node->right));
    newRoot->height= 1+ std::max(getHeight(newRoot->left),getHeight(newRoot->right));
    
    return newRoot;
}

AVLNode* AVLTree::rotateRight(AVLNode* node) {
    // Implement right rotation.
    return newRoot;
}
