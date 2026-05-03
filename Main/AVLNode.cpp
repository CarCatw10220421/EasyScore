#include "AVLNode.h"

AVLNode::AVLNode(const Player& playerData)
    : player(playerData), left(nullptr), right(nullptr), height(1) {
}
