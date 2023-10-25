#include <bits/stdc++.h>
#include "huffman.hpp"

using namespace std;

int main()
{
    huffman f("Compress.txt", "Decompress.txt");
    f.decompress();
    cout << "Successfully decompressed\n";

    return 0;
}