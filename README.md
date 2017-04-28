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
    
    **Prototype:**
    ```c
        void * ft_memalloc(size_t size);
    ```
    **Description:** *Allocates (with malloc(3)) and returns a “fresh” memory area.
    The memory allocated is initialized to 0. If the allocation  fails, the function returns NULL.*
    
    **Param. 1:** *The size of the memory that needs to be allocated.*
    
    **Return value:** *The allocated memory area.*
    
    **Allowed libc functions:** *malloc(3)*
  - `ft_memdel`
  
    **Prototype:**
    ```c
    void ft_memdel(void **ap)
    ```
    **Description:** *Takes as a parameter the address of a memory area that needs
    to be freed with free(3), then puts the pointer to NULL.*
    
    **Param. 1:** *A pointer’s address that needs its memory freed and set to NULL.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *free(3)*
  - `ft_strnew`
  
    ***Prototype:**
    ```c
    char * ft_strnew(size_t size)
    ```
    **Description:** *Allocates (with malloc(3)) and returns a “fresh” string ending
    with ’\0’. Each character of the string is initialized at
    ’\0’. If the allocation fails the function returns NULL.*
    
    **Param. 1:** *The size of the string to be allocated.*
    
    **Return value:** *The string allocated and initialized to 0.*
    
    **Allowed libc functions:** *malloc(3)*
  - `ft_strdel`
  
    **Prototype:**
    ```c
    void ft_strdel(char **as)
    ```
    **Description** *Takes as a parameter the address of a string that need to be
    freed with free(3), then sets its pointer to NULL.*
    
    **Param. 1:** *The string’s address that needs to be freed and its pointer set to NULL.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *free(3)*
    
