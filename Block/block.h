#ifndef BLOCK_H 
#define BLOCK_H 

#include <string>
#include <vector>

class Block {
private:
    int index; // Block index
    std::string prev_hash; // Previous block hash
    int nonce; // Nonce for mining
    std::vector<std::string> transactions; // Transactions in the block

    std::string calculateHash(); // Calculate the hash of the block
    std::string mineBlock(int difficulty); // Mine the block with a given difficulty
    std::string getCurrentTime(); // Get the current timestamp

public:
    std::string time_stamp; // Timestamp of the block
    std::string curr_hash; // Current block hash

    Block(int index, std::vector<std::string> transactions, std::string prev_hash); // Constructor
    void getBlock() const; // Display block information
};

#endif // BLOCK_H