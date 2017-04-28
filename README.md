# libft
<hr>
my first own library in C

### Part 1 - Libc functions

  - `memset`
  - `bzero`
  - `memcpy`
  - `memccpy`
  - `memmove`
  - `memchr`
  - `memcmp`
  - `strlen`
  - `strdup`
  - `strcpy`
  - `strncpy`
  - `strcat`
  - `strncat`
  - `strlcat`
  - `strchr`
  - `strrchr`
  - `strstr`
  - `strnstr`
  - `strcmp`
  - `strncmp`
  - `atoi`
  - `isalpha`
  - `isdigit`
  - `isalnum`
  - `isascii`
  - `isprint`
  - `toupper`
  - `tolower`

### Part 2 - Additional functions

  - `ft_memalloc`
    
    **Prototype**
    ```c
        void * ft_memalloc(size_t size);
    ```
    **Description** *Allocates (with malloc(3)) and returns a “fresh” memory area.
    The memory allocated is initialized to 0. If the allocation  fails, the function returns NULL.*
    **Param. 1*** *The size of the memory that needs to be allocated.*
    **Return value** *The allocated memory area.*
    ***Allowed libc functions*** *malloc(3)*
  - `ft_memdel`
  
    *** Prototype ***
    ```c
    void * ft_memalloc(size_t size)
    ```;
    *** Description *** * Allocates (with malloc(3)) and returns a “fresh” memory area.
    The memory allocated is initialized to 0. If the allocation  fails, the function returns NULL. *
    *** Param. 1  *** * The size of the memory that needs to be allocated. *
    *** Return value *** * The allocated memory area. *
    *** Allowed libc functions *** * malloc(3) *
    
  
  
