cmake_minimum_required(VERSION 3.10)
project(PoW-Blockchain)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    Block
    Blockchain
    Utils
)

file(GLOB SOURCES
    main.cpp
    Block/Block.cpp
    Blockchain/Blockchain.cpp
    Utils/TransactionUtils.cpp
)

add_executable(PoW-Blockchain
    main.cpp
    Block/Block.cpp
    Blockchain/Blockchain.cpp
    Utils/sha256.cpp
    Utils/TransactionUtils.cpp
)

find_package(OpenSSL REQUIRED)
target_link_libraries(PoW-Blockchain OpenSSL::Crypto)
