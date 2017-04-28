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
    void ft_memdel(void **ap);
    ```
    **Description:** *Takes as a parameter the address of a memory area that needs
    to be freed with free(3), then puts the pointer to NULL.*
    
    **Param. 1:** *A pointer’s address that needs its memory freed and set to NULL.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *free(3)*
  - `ft_strnew`
  
    ***Prototype:**
    ```c
    char * ft_strnew(size_t size);
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
    void ft_strdel(char **as);
    ```
    **Description** *Takes as a parameter the address of a string that need to be
    freed with free(3), then sets its pointer to NULL.*
    
    **Param. 1:** *The string’s address that needs to be freed and its pointer set to NULL.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *free(3)*
  - `ft_strclr`
  
    **Prototype:**
    ```c
    void ft_strclr(char *s);
    ```
    **Description** *Sets every character of the string to the value ’\0’.*
    
    **Param. 1:** *The string that needs to be cleared.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *None.*
  - `ft_striter`
  
    **Prototype:**
    ```c
    void ft_striter(char *s, void (*f)(char *));
    ```
    **Description** *Applies the function f to each character of the string passed
    as argument. Each character is passed by address to f to be
    modified if necessary.*
    
    **Param. 1:** *The string to iterate.*
    
    **Param. 2:** *The function to apply to each character of s.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *None.*
  - `ft_striteri`
  
    **Prototype:**
    ```c
    void ft_striteri(char *s, void (*f)(unsigned int, char *));
    ```
    **Description** *Applies the function f to each character of the string passed
    as argument, and passing its index as first argument. Each
    character is passed by address to f to be modified if necessary.*
    
    **Param. 1:** *The string to iterate.*
    
    **Param. 2:** *The function to apply to each character of s and its index.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *None.*
  - `ft_strmap`
  
    **Prototype:**
    ```c
    char * ft_strmap(char const *s, char (*f)(char));
    ```
    **Description** *Applies the function f to each character of the string given
    as argument to create a “fresh” new string (with malloc(3))
    resulting from the successive applications of f.*
    
    **Param. 1:** *The string to map.*
    
    **Param. 2:** *The function to apply to each character of s.*
    
    **Return value:** *The “fresh” string created from the successive applications of f.*
    
    **Allowed libc functions:** *malloc(3).*
  - `ft_strmapi`
  
    **Prototype:**
    ```c
    char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
    ```
    **Description** *Applies the function f to each character of the string passed
    as argument by giving its index as first argument to create a
    “fresh” new string (with malloc(3)) resulting from the successive
    applications of f.*
    
    **Param. 1:** *The string to map.*
    
    **Param. 2:** *The function to apply to each character of s and its index.*
    
    **Return value:** *The “fresh” string created from the successive applications of f.*
    
    **Allowed libc functions:** *malloc(3).*
  - `ft_strequ`
  
    **Prototype:**
    ```c
    int ft_strequ(char const *s1, char const *s2);
    ```
    **Description** *Lexicographical comparison between s1 and s2. If the 2
    strings are identical the function returns 1, or 0 otherwise.*
    
    **Param. 1:** *The first string to be compared.*
    
    **Param. 2:** *The second string to be compared.*
    
    **Return value:** *1 or 0 according to if the 2 strings are identical or not.*
    
    **Allowed libc functions:** *None.*
  - `ft_strnequ`
  
    **Prototype:**
    ```c
    int ft_strnequ(char const *s1, char const *s2, size_t n);
    ```
    **Description** *Lexicographical comparison between s1 and s2 up to n characters
    or until a ’\0’ is reached. If the 2 strings are identical,
    the function returns 1, or 0 otherwise.*
    
    **Param. 1:** *The first string to be compared.*
    
    **Param. 2:** *The second string to be compared.*
    
    **Param. 3:** *The maximum number of characters to be compared.*
    
    **Return value:** *1 or 0 according to if the 2 strings are identical or not.*
    
    **Allowed libc functions:** *None.*
  - `ft_strsub`
  
    **Prototype:**
    ```c
    char * ft_strsub(char const *s, unsigned int start, size_t len);
    ```
    **Description** *Allocates (with malloc(3)) and returns a “fresh” substring
    from the string given as argument. The substring begins at
    indexstart and is of size len. If start and len aren’t refering
    to a valid substring, the behavior is undefined. If the
    allocation fails, the function returns NULL.*
    
    **Param. 1:** *The string from which create the substring.*
    
    **Param. 2:** *The start index of the substring.*
    
    **Param. 3:** *The size of the substring.*
    
    **Return value:** *The substring.*
    
    **Allowed libc functions:** *malloc(3).*
  - `ft_strjoin`
  
    **Prototype:**
    ```c
    char * ft_strjoin(char const *s1, char const *s2);
    ```
    **Description** *Allocates (with malloc(3)) and returns a “fresh” string ending
    with ’\0’, result of the concatenation of s1 and s2. If
    the allocation fails the function returns NULL.*
    
    **Param. 1:** *The prefix string.*
    
    **Param. 2:** *The suffix string.*
    
    **Return value:** *The “fresh” string result of the concatenation of the 2 strings.*
    
    **Allowed libc functions:** *malloc(3).*
  - `ft_strtrim`
  
    **Prototype:**
    ```c
    char * ft_strtrim(char const *s);
    ```
    **Description** *Allocates (with malloc(3)) and returns a copy of the string
    given as argument without whitespaces at the beginning or at
    the end of the string. Will be considered as whitespaces the
    following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
    at the beginning or at the end, the function returns a
    copy of s. If the allocation fails the function returns NULL.*
    
    **Param. 1:** *The string to be trimed.*
    
    **Return value:** *The “fresh” trimmed string or a copy of s.*
    
    **Allowed libc functions:** *malloc(3).*
  - `ft_strsplit`
  
    **Prototype:**
    ```c
    char ** ft_strsplit(char const *s, char c);
    ```
    **Description** *Allocates (with malloc(3)) and returns an array of “fresh”
    strings (all ending with ’\0’, including the array itself) obtained
    by spliting s using the character c as a delimiter.
    If the allocation fails the function returns NULL.*
    
    **Param. 1:** *The string to split.*
    
    **Param. 2:** *The delimiter character.*
    
    **Return value:** *The array of “fresh” strings result of the split.*
    
    **Allowed libc functions:** *malloc(3), free(3).*
  - `ft_itoa`
  
    **Prototype:**
    ```c
    char * ft_itoa(int n);
    ```
    **Description** *Allocate (with malloc(3)) and returns a “fresh” string ending
    with ’\0’ representing the integer n given as argument.
    Negative numbers must be supported. If the allocation fails,
    the function returns NULL.*
    
    **Param. 1:** *The integer to be transformed into a string.*
    
    **Return value:** *The string representing the integer passed as argument.*
    
    **Allowed libc functions:** *malloc(3).*
  - `ft_putchar`
  
    **Prototype:**
    ```c
    void ft_putchar(char c);
    ```
    **Description** *Outputs the character c to the standard output.*
    
    **Param. 1:** *The character to output.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putstr`
  
    **Prototype:**
    ```c
    void ft_putstr(char const *s);
    ```
    **Description** *Outputs the string s to the standard output.*
    
    **Param. 1:** *The string to output.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putendl`
  
    **Prototype:**
    ```c
    void ft_putendl(char const *s);
    ```
    **Description** *Outputs the string s to the standard output followed by a ’\n’.*
    
    **Param. 1:** *The string to output.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putnbr`
  
    **Prototype:**
    ```c
    void ft_putnbr(int n);
    ```
    **Description** *Outputs the integer n to the standard output.*
    
    **Param. 1:** *The integer to output.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putchar_fd`
  
    **Prototype:**
    ```c
    void ft_putchar_fd(char c, int fd);
    ```
    **Description** *Outputs the char c to the file descriptor fd.*
    
    **Param. 1:** *The character to output.*
    
    **Param. 2:** *The file descriptor.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putstr_fd`
  
    **Prototype:**
    ```c
    void ft_putstr_fd(char const *s, int fd);
    ```
    **Description** *Outputs the string s to the file descriptor fd.*
    
    **Param. 1:** *The string to output.*
    
    **Param. 2:** *The file descriptor.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putendl_fd`
  
    **Prototype:**
    ```c
    void ft_putendl_fd(char const *s, int fd);
    ```
    **Description** *Outputs the string s to the file descriptor fd followed by a ’\n’.*
    
    **Param. 1:** *The string to output.*
    
    **Param. 2:** *The file descriptor.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
  - `ft_putnbr_fd`
  
    **Prototype:**
    ```c
    void ft_putnbr_fd(int n, int fd);
    ```
    **Description** *Outputs the integer n to the file descriptor fd.*
    
    **Param. 1:** *The integer to print.*
    
    **Param. 2:** *The file descriptor.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *write(2).*
    
### Part 3 - Bonus part

  - `ft_lstnew`
    
    **Prototype:**
    ```c
    t_list * ft_lstnew(void const *content, size_t content_size);
    ```
    **Description:** *Allocates (with malloc(3)) and returns a “fresh” link. The
    variables content and content_size of the new link are initialized
    by copy of the parameters of the function. If the parameter
    content is nul, the variable content is initialized to
    NULL and the variable content_size is initialized to 0 even
    if the parameter content_size isn’t. The variable next is
    initialized to NULL. If the allocation fails, the function returns
    NULL.*
    
    **Param. 1:** *The content to put in the new link.*
    
    **Param. 2:** *The size of the content of the new link.*
    
    **Return value:** *The new link.*
    
    **Allowed libc functions:** *malloc(3), free(3).*
  - `ft_lstdelone`
    
    **Prototype:**
    ```c
    void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
    ```
    **Description:** *Takes as a parameter a link’s pointer address and frees the
    memory of the link’s content using the function del given as
    a parameter, then frees the link’s memory using free(3). The
    memory of next musnt not be freed under any circumstance.
    Finally, the pointer to the link that was just freed must be
    set to NULL (quite similar to the function ft_memdel in the
    mandatory part).*
    
    **Param. 1:** *The adress of a pointer to a link that needs to be freed.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *free(3).*
  - `ft_lstdel`
    
    **Prototype:**
    ```c
    void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
    ```
    **Description:** *Takes as a parameter the adress of a pointer to a link and
    frees the memory of this link and every successors of that link
    using the functions del and free(3). Finally the pointer to
    the link that was just freed must be set to NULL (quite similar
    to the function ft_memdel from the mandatory part).*
    
    **Param. 1:** *The address of a pointer to the first link of a list that needs
    to be freed.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *free(3).*
  - `ft_lstadd`
    
    **Prototype:**
    ```c
    void ft_lstadd(t_list **alst, t_list *new);
    ```
    **Description:** *Adds the element new at the beginnning of the list.*
    
    **Param. 1:** *The address of a pointer to the first link of a list.*
    
    **Param. 2:** *The link to add at the beginning of the list.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *None.*
  - `ft_lstiter`
    
    **Prototype:**
    ```c
    void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
    ```
    **Description:** *Iterates the list lst and applies the function f to each link.*
    
    **Param. 1:** *A pointer to the first link of a list.*
    
    **Param. 2:** *The address of a function to apply to each link of a list.*
    
    **Return value:** *None.*
    
    **Allowed libc functions:** *None.*
  - `ft_lstmap`
    
    **Prototype:**
    ```c
    t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
    ```
    **Description:** *Iterates a list lst and applies the function f to each link to
    create a “fresh” list (using malloc(3)) resulting from the successive
    applications of f. If the allocation fails, the function
    returns NULL.*
    
    **Param. 1:** *A pointer’s to the first link of a list.*
    
    **Param. 2:** *The address of a function to apply to each link of a list.*
    
    **Return value:** *New list.*
    
    **Allowed libc functions:** *malloc(3), free(3).*


