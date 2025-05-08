#include <iostream>
#include "TransactionUtils.h"

const int MAX_TRANSACTIONS = 3;

std::vector<std::string> getTransactions() {
    std::vector<std::string> transactions;
    char choice;

    while (transactions.size() < MAX_TRANSACTIONS) {
        std::string sender, receiver, amount;
        std::cout << "\nEnter Transaction Details:\nSender: ";
        std::cin >> sender;
        std::cout << "Receiver: ";
        std::cin >> receiver;
        std::cout << "Amount: ";
        std::cin >> amount;

        transactions.push_back(sender + " pays " + receiver + " " + amount + " BTC");

        if (transactions.size() == MAX_TRANSACTIONS) {
            std::cout << "\nTransaction limit reached. Block will be mined.\n";
            break;
        }

        std::cout << "Add another transaction? (y/n): ";
        std::cin >> choice;
        if (choice == 'n' || choice == 'N') break;
    }

    return transactions;
}
