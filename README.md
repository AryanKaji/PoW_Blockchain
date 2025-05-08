# ⛓️ PoW-Blockchain

A simple Proof-of-Work (PoW) blockchain implementation in C++ demonstrating basic blockchain mechanics, including block mining, transactions, and SHA-256 hashing.

---

## 📁 Project Structure

```
PoW-Blockchain/
├── Block/
│   ├── Block.cpp            # Block implementation
│   └── Block.h              # Block class declaration
├── Blockchain/
│   ├── Blockchain.cpp       # Blockchain logic
│   └── Blockchain.h         # Blockchain class declaration
├── Utils/
│   ├── sha256.cpp           # SHA-256 hash function logic
│   └── sha256.h             # SHA-256 hash function (OpenSSL)
│   └── TransactionUtils.cpp # Implementation for Transaction
│   └── TransactionUtils.h   # Transaction declaration
├── CMakeLists.txt           # Build configuration
└── main.cpp                 # CLI entry point
```

---

## ⚙️ Features

- Custom block structure with:
  - Timestamp
  - Transaction list
  - Nonce (for PoW)
  - SHA-256 hash (OpenSSL)
- Proof-of-Work mining with configurable difficulty
- Genesis block creation
- Block addition and blockchain traversal via CLI
- Supports multiple transactions per block

---

## 🛠️ Requirements

- C++17
- CMake 3.10+
- OpenSSL library (for SHA-256)

### Install OpenSSL (Linux)

```bash
sudo apt-get update
sudo apt-get install libssl-dev
```

---

## 🚀 How to Build and Run

```bash
# Clone the repository
git clone https://github.com/yourusername/PoW-Blockchain.git
cd PoW-Blockchain

# Create build directory
mkdir build && cd build

# Generate and build
cmake ..
make

# Run
./main
```

---

## 💡 Sample Usage

- Enter up to 3 transactions per block.
- After reaching 3 or choosing not to add more, the block is mined.
- You can then choose to add another block.
- After exiting, the full blockchain is displayed.

---

## 📦 Sample Transaction Format

```
Sender: Alice
Receiver: Bob
Amount: 1.25
```

Resulting in:

```
Alice pays Bob 1.25 BTC
```

---

## 🧾 License

This project is licensed under the MIT License. See `LICENSE` for details.

---

## 🙌 Credits

- SHA-256 via OpenSSL
- Designed and coded as a basic educational blockchain demo in C++
