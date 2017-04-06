# Cache

## Finding data in Cache

Terminology:
* Hit tag matches -> use the data
* No tag match -> fetch from memory



| Tag | Index     | Block Offset|
| :------------- | :------------- | :--|
| Register Size - Index Size - Block Offset Size    | Represents block     | Represents byte in a block|

If a cache has:

* Size = 64B
* Block Size = 16B
* \# of Blocks = 4

Order of searching for an address:

1. Go to block of the index in memory address
2. Check if tag is the same
3. If it is the same then use Block Offset to find specific byte of data
4. If tag does not match then it is a different block and **replace** that block with the new block

We can use **sets** so that multiple blocks with the same index can exist in a set

Associativity:

* How many block will be in a sets
* \# of sets = size of cache /(Block size * Associativity)
