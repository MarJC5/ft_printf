<h1 align="center">
    <img alt="42Lausanne" title="42Lausanne" src="https://github.com/MarJC5/42/blob/main/42_logo.svg" width="140"> </br>
    Project n°3 - ft_printf
    <h4 align="center" style="width: 50%; margin: 2rem auto; font-weight: normal;"> 
    Recode printf to learn mainly how to use the variadic arguments.
    </h4>
</h1>

## Description

Recreate a basic version of the function ``printf()``. The following conversion must be recognized ``cspdiuxX%``.

PS: As ``printf()`` is an int function, we have to return the count of each characters that we write.

## Functions needed

- [malloc()](https://man7.org/linux/man-pages/man3/malloc.3.html), [free()](https://man7.org/linux/man-pages/man1/free.1.html)
- [write()](https://man7.org/linux/man-pages/man2/write.2.html)
- [va_start()](https://man7.org/linux/man-pages/man3/va_arg.3p.html), [va_arg()](https://man7.org/linux/man-pages/man3/va_arg.3p.html), [va_end()](https://linux.die.net/man/3/va_end)

## Step-by-step

### 1. Use variadic arguments

A function may be called with a varying number of arguments of varying types. The called function must declare an object of type ``va_list`` which is used by the macros ``va_start()``, ``va_arg()``, and ``va_end()``.

``va_list`` will store all the argument passed to the function ``int ft_printf(const char *input, ...)``. As we can see, the ``...`` is telling the function that it will receive variadic arguments.

Now we have setup this, we need to call the arguments, to do so ``va_start(args, input)``is here for us.

### 2. Loop the input and check every characters format

As ``ft_printf()`` writes a string after converting all the arguments passed to it, we have to simplie check if the current character is a ``%``.

- ``Case 1``: If the character is not a ``%`` we simply do a write of the character
- ``Case 2``: We found a ``%``, then we check what current char +1 to have the variadic argument and pass it to the function ``void ft_printf_args(char convert, va_list args, int *rcount)``.

### 3. Proceed to the viriadic conversion

#### ``%c``

This argument will simply write a character. We call the function ``ft_putchar_fd()``and add +1 to the return ``*rcount``.

Prototype: [``int ft_printf_char(int c, int *rcount)``](https://github.com/MarJC5/ft_printf/blob/main/ft_printf/ft_printf_char.c)

#### ``%s``

This arguments will write a string of characters. We check if the string passed to it isn't empty.

- ``NULL``: call ``ft_pustr_fd()`` and pass (null) to write that the current string is equal to nothing
- ``Valid string``: call ``ft_pustr_fd()`` to write the string

Both of the condition will count the number of characters returned with ``ft_strlen()`` and save the result to the ``*rcount``.

#### ``%p``

This argument will print the address of a variable in hexadecimal format. To do so we convert a ``void *ptr`` to an ``unsigned long`` and convert it in hexadecimal format with the function ``ft_printf_hex()``.

Prototype: [``int ft_printf_ptr(void *ptr, int *rcount)``](https://github.com/MarJC5/ft_printf/blob/main/ft_printf/ft_printf_ptr.c)

#### ``%d`` & ``%i``

Both of this arguments are returning a decimal numbers in ``base 10``. We simply use an ``ft_putnbr()``and then print the value.

Prototype: [``int ft_printf_int(int nbr, int *rcount)``](https://github.com/MarJC5/ft_printf/blob/main/ft_printf/ft_printf_int.c)

#### ``%u``

This arguments will return a data values from zero to positive numbers. An ``ft_putnbr()`` modified with ``unsigned int nbr`` is requested as argument.

Prototype: [``int ft_printf_dun(unsigned int nbr, int *rcount)``](https://github.com/MarJC5/ft_printf/blob/main/ft_printf/ft_printf_dun.c)

#### ``%x et %X``

This argument will convert any number to his hexadecimal value.

Hexadecimal numbers uses 16 values to represent a number.
Numbers from 0-9 are expressed by digits ``0-9`` and ``10-15`` are represented by characters from ``A – F``.

To do so we use the same concept as ``ft_putnbr()``:

- Devid the number by 16
- Check if the rest is less than 10.
- If it is, then add 48 to the rest and store the result in the array hex.
- Otherwise, add 87 to the rest and store the result in the array hex.

The difference between ``%x`` and ``%X`` is only represended by ``a - f`` and ``A - F``.

Prototype: [``int ft_printf_hex(unsigned long nbr, int *rcount, int format)``](https://github.com/MarJC5/ft_printf/blob/main/ft_printf/ft_printf_hex.c)

#### ``%%``

This argument will write a ``%``.
