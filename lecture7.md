# Sign/Unsigned in C

## Unsigned Values in C

### Declare a char

* By default it is an signed 8bit int
* [-128, 127]

### If Unsigned

* We don't consider the last bit a sign bit
* -1 => 0b11111111 but if Unsigned consider 2^n - 1

## Sign Extension

* So if you are increasing the size of a binary numeric
* Easy for positive
* For negative
  * Extend sign bit to new size

| decimal| 4bit | 8bit |
| :--| :------------- | :------------- |
| -6 | 0b1010 | 0b**1111**1010       |

# Floating point

* Fixed point representation is limiting to what values you can store depending on where

* Fixed point in more exact (Useful for finance)

* Floating point has larger range but it loses accuracy
* Floating point is an **approximation** of a real number

## Standard IEEE-754

* Single Precision (32 bits)
* Double Precision (64 bits)
* Extended Precision (80 bits)

### What does float (32bit) look like

| (S)ign bit | (E)xponent    | (M)antissa|
| :------------- | :------------- | :--|
| One Bit       | 8 bit       |  23 bits|

### (-1)<sup>s</sup> x 1.M * 2<sup>E - 127 </sup>
* Bias = 127
* Bias = **2<sup>expo size - 1</sup> -1**
* We have a
## Normalized Value
* Basically Expo is not all 0's and not all 1's

## Denormal values (Expo is all 0's)
* (when 0 or close to zero)
* exponent field = 0 and
* exponent = 1 - Bias **(Important)**



## special Values (Expo is all 1's)

* Infinity
   * Sign 0
   * Expnent all 1's
   * Mantissa All 0's
* Negative Infinity
   * Sign 1
   * Exponent all 1's
   * Mantissa All 0's
* Nan
   * Exponent all 1's
   * Mantissa has some nonzero values
