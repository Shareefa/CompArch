# C Program to a Machine Execution

1. hello.c -> Preprocessor(cpp) ->
2. hello.i -> Compiler(cc1) ->
3. hello.s -> Assembler(as) ->
4. hello.o + printf.o -> Linker(ld) ->
5. Output: hello

### API: Application Program Interface
* Two apps interacting with each other

### ABI: Application Binary Interface
* Defined by OS and Hardware
* Communication between OS and Application

### ISA: Instruction Set Architecture
* Contract to OS and App for how to run on Hardware

## How Do Computers Hold Information
* Different numeric systems
* Octal - 042, 42<sub>(8)</sub>
NOTE: Leading 0
* Binary - 0b10101
* Hexadecimal - 0x13AB

## Decimal and Binary Fractions

* The number to the right of the decimal point are negative power of the base
* 1.101 = 1*2<sub>0</sub> +

```c
public void delete(T key) {
		// 1. find node x to delete
		BSTNode<T> x = root;
		BSTNode<T> p = null;
		int c = 0;
		while (x != null) {
			c = key.compareTo(x.key);
			if (c == 0) { // found it
				break;
			}
			p = x;
			x = (c < 0) ? x.left : x.right; // ternary statement
		}
		// 2. key is not found
		if (x == null) {
			throw new NoSuchElementException(key + " not found");
		}
		// 3. check if has two children
		BSTNode<T> y = null;
		if (x.left != null && x.right != null) {
			// find inorder predecessor 󰀀
			y = x.left;
			p = x;
			while (y.right != null) {
				p = y;
				y = y.right;
			}
			// copy y into x
			x.key = y.key;

			// prepare to delete y
			x = y;
		}
		// 4. p is null, x is the root and x does not have two children
		if (p == null) {
			root = x.left != null ? x.left : x.right;
			size--;
			return;
		}
		// 5. handle case 1 and 2 at the same code
		BSTNode<T> tmp = x.right != null ? x.right : x.left;
		if (x == p.left) {
			p.left = tmp;
		} else {
			p.right = tmp;
		}
		size--;
	}

```
