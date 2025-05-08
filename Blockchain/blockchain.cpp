#include "Blockchain.h"
#include <iostream>

Blockchain::Blockchain() {
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock() {
    return Block(0, {
        "Genesis Block",
        "A C++ implementation of a basic blockchain with transaction handling, mining, and proof-of-work for adding blocks to the chain."
    }, "None");
}

Block Blockchain::getLatestBlock() {
    return chain.back();
}

void Blockchain::addBlock(std::vector<std::string> transactions) {
    Block newBlock(chain.size(), transactions, getLatestBlock().curr_hash);
    chain.push_back(newBlock);
}

void Blockchain::displayChain() {
    for (const auto& block : chain) {
        block.getBlock();
    }
}
