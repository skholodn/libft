# libft
<hr>
my first own library in C

### Part 1 - Libc functions
<hr>
* `memset`<br />
* `bzero`<br />
  - `memcpy`<br />
  - `memccpy`<br />
  - `memmove`<br />
  - `memchr`<br />
  - `memcmp`<br />
  - `strlen`<br />
  - `strdup`<br />
  - `strcpy`<br />
  - `strncpy`<br />
  - `strcat`<br />
  - `strncat`<br />
  - `strlcat`<br />
  - `strchr`<br />
  - `strrchr`<br />
  - `strstr`<br />
  - `strnstr`<br />
  - `strcmp`<br />
  - `strncmp`<br />
  - `atoi`<br />
  - `isalpha`<br />
  - `isdigit`<br />
  - `isalnum`<br />
  - `isascii`<br />
  - `isprint`<br />
  - `toupper`<br />
  - `tolower`<br />

### Part 2 - Additional functions
<hr>
  - `ft_memalloc`
    *** Prototype ***
    ```python
        void * ft_memalloc(size_t size);
    ```(Tomorrow Night)
    *** Description *** * Allocates (with malloc(3)) and returns a “fresh” memory area.
    The memory allocated is initialized to 0. If the allocation  fails, the function returns NULL. *
    *** Param. 1  *** * The size of the memory that needs to be allocated. *
    *** Return value *** * The allocated memory area. *
    *** Allowed libc functions *** * malloc(3) *
  - `ft_memdel`
    *** Prototype *** * void * ft_memalloc(size_t size) *;
    *** Description *** * Allocates (with malloc(3)) and returns a “fresh” memory area.
    The memory allocated is initialized to 0. If the allocation  fails, the function returns NULL. *
    *** Param. 1  *** * The size of the memory that needs to be allocated. *
    *** Return value *** * The allocated memory area. *
    *** Allowed libc functions *** * malloc(3) *
    
  
  
