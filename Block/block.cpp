#include "Block.h"
#include "../Utils/sha256.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <ctime>

Block::Block(int idx, std::vector<std::string> txs, std::string prevHash)
    : index(idx), transactions(txs), prev_hash(prevHash), nonce(0) {
    time_stamp = getCurrentTime();
    curr_hash = mineBlock(4);
}

std::string Block::getCurrentTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_c), "%d/%m/%Y %H:%M:%S");
    return ss.str();
}

std::string Block::calculateHash() {
    std::string input = std::to_string(index) + prev_hash + time_stamp + std::to_string(nonce);
    for (const auto& tx : transactions) input += tx;
    return sha256(input);
}

std::string Block::mineBlock(int difficulty) {
    std::string target(difficulty, '0');
    do {
        nonce++;
        curr_hash = calculateHash();
    } while (curr_hash.substr(0, difficulty) != target);
    return curr_hash;
}

void Block::getBlock() const {
    std::cout << "\n==============================\nBlock Mined!";
    std::cout << "\nIndex: " << index;
    std::cout << "\nPrevious Hash: #" << prev_hash;
    std::cout << "\nTime Stamp: " << time_stamp;
    std::cout << "\nTransactions:";
    for (const auto& tx : transactions) std::cout << "\n  - " << tx;
    std::cout << "\nNonce: " << nonce;
    std::cout << "\nCurrent Hash: #" << curr_hash;
    std::cout << "\n==============================\n";
}
