# MOV Source Dest

You can:
* Move register to register ( mov %eax % eax)
* Move constant to register (Movl $24 register)
* Move absolute address (movl 27 register)
* Use pointer (%eax) - %eax has the address **Indirect Addressing**
  * YOU can **not** deference on both operands - mov (eax) (ecx)
  * Cannot access memory in both Operands
  *


## Arrays

int arr[10]

To access arr[2] **move two integer locations down**


Accomplished by:
* Adding 2 ints (8 bytes)
* Then accesses
  * Addl $8 eax
  * Mov eax
* Or in one line using ** indirect addressing with offset**
  * movl 8(%ebp)

Last one:
* **Index addressing mode**
* When arr[i]
  * ebx = i*4
  * movl (%ecx, %ebx), %eax
* BUT ALSO **scaled indexing mode**
  * ebx = i;
  * movl (%ecx, %ebx, 4), %eax
  * Equates to = eax = *(ecx +ebx*4)
