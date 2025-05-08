#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "../Block/Block.h"
#include <vector>

class Blockchain {
private:
    std::vector<Block> chain; // Vector to store the chain of blocks
    Block createGenesisBlock(); // Create the genesis block

public:
    Blockchain(); // Constructor to initialize the blockchain
    void addBlock(std::vector<std::string> transactions); // Add a new block to the chain
    void displayChain(); // Display the entire blockchain
    Block getLatestBlock(); // Get the latest block in the chain
};

#endif
