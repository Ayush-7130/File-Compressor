# File-Compressor

## Overview

This project implements file compression and decompression using the Huffman coding technique, a widely used algorithm for lossless data compression. Huffman coding assigns variable-length codes to input characters based on their frequencies, with shorter codes for more frequent characters, making it an efficient method for data compression.

## Features

- File compression using Huffman coding.
- File decompression to restore the original data.
- Command-line interface for easy interaction.
- Detailed documentation and comments for easy understanding and modification.

## How to Execute the Program

The steps to execute the program are as follows:
1.	Compile the C++ files “encode.cpp” and “decode.cpp” by using the following command on terminal(Ubuntu)/CMD(Windows), “g++ -o encode encode.cpp” for the encode file and “g++ -o decode decode.cpp” for the decode file.
2.	Then, open terminal/CMD on the working directory and we require a text file that is going to compress.
3.  Run “./encode” on terminal or "./encode.exe" on CMD. Then it ask for file. Enter the Filename (exclude Extension).
4.  It creates "Compress.txt" file that contains compressed binary representation of inputted file using **Huffman Coding** Algorithm.
5.  For decompressing, Run “./decode” on terminal or "./decode.exe" on CMD (Require the "Compress.txt" file be there on working directory).
6.  After execution of decoding process, it create "Decompress.txt" that stores the actual content of original file.