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
