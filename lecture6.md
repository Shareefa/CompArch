## Data Sizes
| c Declaration |     32-Bit Machine  | 64-Bit machine|
| :------------- | :------------- | :-|
| char     | 1       | 1|
|short int|2|2|
|int|4|4|
|pointer|**4**|**8**|
|float|4|4|
|double|8|8|

Basics:
* API: Contract between software and software
* ABI: Contract between OS and App
* ISA: Contract between Hardware and Application

32 & 64 Bit Means:
- the pointer size is either **4 bytes** or **8 bytes**


## Big Endian vs. Little Endian

Given a int: 0x4A 76 36 48

Where do you store it?

| Address | bytes |
| :------------- | :------------- |
| 0x40 | 48 |
|0x41| 36|
|0x42| 76|
|0x43| 4A|

This is an example of **Little Endian**
(*least* significant byte first)

### Otherwise
It is Big Endian:
Most significant byte first

## Shit to Know

* Sign Bit
* One's Complement
* Two's Complement
