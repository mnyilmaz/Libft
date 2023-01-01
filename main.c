#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <fcntl.h>
#include "libft.h"

void    del(void *content)
{
    free(content);
}

void    f(void *content)
{
    printf("HarryPotter\n");
}

void    *f1(void *content)
{
    return(0);
}

int main(void)
{

/****** BZERO Output ******
    ft_bzero(a + 3, 8);
    ft_bzero(b + 2, 2);

    int i = 0;

    while(i < sizeof(a))
    {
        if(i%4 == 0)
            printf("\n");
        data = *((unsigned char *)a + i);
        printf("%02hhu ", data);
        i++;
    }
    printf("BZERO RESULT = %s\n", b);
****** BZERO Output ******/

/****** MEMSET Output ******
    printf("MY_MEMSET = %s\n", ft_memset(a, 100, 16));
    printf("RL_MEMSET = %s\n", memset(a, 100, 8));
    printf("MY_MEMSET CHAR = %s\n", ft_memset(b, 100, 5));
    printf("RL_MEMSET CHAR = %s\n", memset(b, 100, 5));

        int a[] = {1, 3, 4, 5};

    void *result;
    result = ft_memset(a, 115, 13);

    printf("0 INT: = %d\n", a[0]);
    printf("0 CHAR: = %c\n", a[0]);
    printf("---------------\n");

    printf("1 INT: = %d\n", a[1]);
    printf("1 CHAR: = %c\n", a[1]);
    printf("---------------\n");

    printf("2 INT: = %d\n", a[2]);
    printf("2 CHAR: = %c\n", a[2]);
    printf("---------------\n");

    printf("3 INT: = %d\n", a[3]);
    printf("3 CHAR: = %c\n", a[3]);

****** MEMSET Output ******/

/****** MEMMOVE Output ******
    printf("RL_MEMMOVE = %s\n", memmove(dst + 1, dst, 3));
    printf("MY_MEMMOVE = %s\n", ft_memmove(dst + 1, dst, 3));
****** MEMMOVE Output ******/

/****** STRLCPY Output ******
    printf("RL_STRLCPY = %lu\n", strlcpy(dst, src, 4));
    printf("RL_DST = %s\n\n", dst);
    printf("MY_STRLCPY = %lu\n", ft_strlcpy(dst, src, 4));
    printf("MY_DST = %s\n", dst);
****** STRLCPY Output ******/

/****** STRLCAT Output ******
    printf("RL_STRLCAT = %lu\n", strlcat(dst, src, 3));
    printf("MY_STRLCAT = %zu\n", ft_strlcat(dst, src, 3));

    BUS ERROR
    char *new_dst = "";
    char *new_src = "abcd";
    printf("RL_STRLCAT = %lu\n", strlcat(new_dst, new_src, 3));

    Working just fine
    char *new_dst = "abcd";
    char *new_src = "";
    printf("RL_STRLCAT = %lu\n", strlcat(new_dst, new_src, 3));
****** STRLCAT Output ******/

/****** TOUPPER Output ******
    printf("RL_TOUPPER = %d\n", toupper(1));
    printf("MY_TOUPPER = %d\n", ft_toupper(1));
****** TOUPPER Output ******/

/****** TOLOWER Output ******
    printf("RL_TOLOWER = %d\n", tolower(1));
    printf("MY_TOLOWER = %d\n", ft_tolower(1));
****** TOLOWER Output ******/

/****** STRCHR Output ******
    printf("RL_STRCHR = %s\n", strchr(dst, 103));
    printf("MY_STRCHR = %s\n", ft_strchr(dst, 103));
****** STRCHR Output ******/

/****** STRRCHR Output ******
    printf("RL_STRRCHR = %s\n", strrchr(dst, 'a'));
    printf("MY_STRRCHR = %s\n", ft_strrchr(dst, 'a'));
****** STRRCHR Output ******/

/****** STRNCMP Output ******
    printf("RL_STRNCMP = %d\n", strncmp(dst, src, 5));
    printf("MY_STRNCMP = %d\n", ft_strncmp(dst, src, 5));
****** STRNCMP Output ******/

/****** MEMCHR Output ******
    printf("RL_MEMCHR = %s\n", memchr(src, 115, 3));
    printf("MY_MEMCHR = %s\n", ft_memchr(src, 's', 3));
    int m[] = {1, 3};
    int *ı = memchr(m, 1, 8);
    printf("MY_MEMCHR = %d\n", *ı);
****** MEMCHR Output ******/

/****** MEMCMP Output ******
    printf("RL_MEMCMP = %d\n", memcmp(src, dst, 6));
    printf("MY_MEMCMP = %d\n", ft_memcmp(src, dst, 6));
****** MEMCMP Output ******/

/****** STRNSTR Output ******
    printf("RL_STRNSTR = %d\n", strnstr(haystack, needle, 5));
    printf("MY_STRNSTR = %d\n", ft_strnstr(haystack, needle, 5));
****** STRNSTR Output ******/

/****** STRDUP Output ******
    printf("RL_STRDUP = %s\n", strdup(src));
    printf("MY_STRDUP = %s\n", ft_strdup(src));
****** STRDUP Output ******/

/****** CALLOC Output *******
    unsigned char data;
    int m1[] = {1, 3, 2, 4};
    void *c1;
    int x1 = 5;

    printf("MY_CALLOC == %p\n", &x1);
    c1 = (void *)ft_calloc(2, x1);
    printf("MY_CALLOC == %p\n", c1);

    int i = 0;

    while(i < sizeof(c1))
    {
        if(i%4 == 0)
            printf("\n");
        data = *((unsigned char *)c1 + i);
        printf("%03hhu ", data);
        i++;
    }
    free(c1);
****** CALLOC Output ******/

/****** ATOI Output ******
    char at[] = "  -+-23324er";
    printf("RL_ATOI = %d\n", atoi(at));
    printf("MY_ATOI = %d\n", ft_atoi(at));
****** ATOI Output ******/

/****** SUBSTR Output ******
    printf("MY_SUBSTR = %s\n", ft_substr(src));
    printf("MY_SUBSTR = %s\n", ft_substr(dst, 1, 3));
****** SUBSTR Output ******/

/****** FD Output ******
    int fd = open("foo.txt", O_RDONLY | O_CREAT);
    int fd1 = open("test.txt", O_WRONLY);
    close(fd1);
****** FD Output ******/

/****** SPLIT Output ******
    char s[] = "silent_hill_remake";
    char c = '_';
    printf("%s\n", ft_split(s, c)[0]);
    printf("%s\n", ft_split(s, c)[1]);
****** SPLIT Output ******/

/****** STRMAPI Output ******
    printf("%s", ft_strmapi("ecem", upper));
****** STRMAPI Output ******/

/****** LSTNEW Output ******
	t_list	*sam;
	t_list	*bridges;
	char	package[6] = "silent";
	char	supplies[5] = "hill";
	sam = ft_lstnew(package);
	bridges = ft_lstnew(supplies);
	sam->next = bridges;

    printf("%s\n", sam->content);
    printf("%s\n", bridges->content);
****** LSTNEW Output ******/

/****** LST Output ******
	t_list	*lotr1;
	t_list	*lotr2;
	t_list	*lotr3;
    t_list  *hobbit;
    t_list  *earendil;

    lotr1 = ft_lstnew(ft_strdup("Fellowship of the Ring"));
    lotr2 = ft_lstnew(ft_strdup("Two Towers"));
    lotr3 = ft_lstnew(ft_strdup("Return of the King"));
    hobbit = ft_lstnew(ft_strdup("Horrible triology"));
    earendil = ft_lstnew(ft_strdup("morning star"));

    lotr1 -> next = lotr2;
    lotr2 -> next = lotr3;

    print("%d\n", ft_lstsize(lotr1));
    ------------------------------------------------------------
    print("%s\n", ft_lstlast(lotr1)->content);
    ------------------------------------------------------------
    ft_lstadd_back(&lotr1, hobbit);
    print("%s\n", hobbit->content));
    ------------------------------------------------------------
    ft_lstadd_front(&lotr1, earendil);
    print("%s\n", earendil->content));
    ------------------------------------------------------------
    ft_lstadd_front(&lotr1, earendil);
    print("%p\n", earendil->content));
    ------------------------------------------------------------
    ft_lstiter(earendil, upper);
    print("%s\n", earendil->content));
    ------------------------------------------------------------
    ft_lstiter(hobbit, lowerr, del);
    print("%s\n", hobbit->content));
****** LST Output ******/

    // char *haystack = "silent hill 2";
    // char *needle = "";
    // char *out = strnstr(haystack, needle, 11);
    // char *out2 = ft_strnstr(haystack, needle, 8);

    // printf("%s\n", out);
    // printf("%s\n", out2);

    t_list  *lotr1;
    t_list  *lotr2;
    t_list  *lotr3;
    t_list  *beg;
    t_list  *end;

    lotr1 = ft_lstnew(ft_strdup("Fellowship of the Ring"));
    lotr2 = ft_lstnew(ft_strdup("Two Towers"));
    lotr3 = ft_lstnew(ft_strdup("Return of the King"));
    beg = ft_lstnew(ft_strdup("Earendil"));
    end = ft_lstnew(ft_strdup("Hobbit"));

    lotr1 -> next = lotr2;
    lotr2 -> next = lotr3;

    ft_lstadd_front(&lotr1, beg);
    printf("%s\n", beg->next->content);

    ft_lstadd_back(&lotr3, end);
    printf("%s\n", lotr3->next->content);

    printf("%s\n", ft_lstlast(beg)->content);

    //ft_lstdelone(beg, del);
    //printf("%s\n", beg->content);

    //ft_lstdelone(beg, del);
    //printf("%s\n", beg->content);

    ft_lstiter(end, &f);
    printf("%s\n", end->content);

    ft_lstmap(beg, f1, del);
    printf("%s\n", beg -> content);

    return (0);
}


