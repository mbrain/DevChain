#ifndef DEVCHAIN_BLOCKCHAIN_H
#define DEVCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "block.h"

using namespace std;

class Blockchain {

public:
    Blockchain();
    void AddBlock(Block newBlock);

private:
    uint32_t difficulty;
    vector<Block> chain;
    Block GetLastBlock() const;
    
};

#endif