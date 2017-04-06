# Structures in Memary

### Alignment Requirements

Depending on what OS there are different ways the data is stored at the memory level

Some notes on

**Basic Take Away**: Use sizeof() because there is like padding

# Cache Unit

### Memory

Modeled as:
* Linear array of bytes

Reality:
* Many different types of Memory
* Different speeds and different sizes

**Memory = RAM**

Static RAM:
* Pure transistor circuit(6 transistor circuit)
* Faster than DRAM
* higher cost

Dynamic RAM:
* Capacitor and transistor
* Need to be refreshed every 10-100ms
* Slower than SRAM


Memory has Primary Bus
I/O has Secondary Bus

Memory Hierarchy:
* L0: Registers
* L1: Cache(SRAM)
* L2: Cache(SRAM)
* L3: Main Memory (DRAM)
* L4: Local secondary storage (local disks)
* L5: Remote secondary storage (Web servers, distributed file systems)

Caches work because caches have **Locality**:
* Temporal - Access something over and over again
* Spacial - Access something close to the last thing accessed 

L1: 8MB
L2: 64MB

CPU ->(10 Times slower) L1 ->(25??) L2 -> (500 Times Slower)Main memory

The procedure:
1. Check cache
2. If hit good
3. If miss go to next cache or main memory
4. Repeat till address is found
5. Take address you accessed and put it in cache

To avoid misses:
* Use spacial locality - accessing addresses that are near each other (contiguous)
* Add the address you accessed **plus bytes around it** (Address to Address + 2^n)

### Vocab

Block Size - the number of bytes of memory you transfer at a time

Cache = Best Effort Hash Table (means we need **Hash Function**)
