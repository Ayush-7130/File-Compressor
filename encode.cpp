#include <bits/stdc++.h>
#include "huffman.hpp"

using namespace std;

int main()
{
    string input;
    cout << "Input the filename to be compress (.txt): ";
    cin >> input;
    input += ".txt";

    huffman f(input, "Compress.txt");
    f.compress();
    cout << "Successfully compressed\n";

    return 0;
}