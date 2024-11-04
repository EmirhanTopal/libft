#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void)
{
   int val;
   char *str; 
   str = "  1234A509.10E";
   val = ft_atoi(str); 
   printf("integral number = %d", val);
}

int main()
{
    char a[20] = "Emirhan";
    int i = 0;
    ft_bzero(a, 2);
    printf("%s", a);
    while (i < 20)
    {
        printf("%c", a[i] ? a[i] : '.');
        i++;
    }
    return (0);
}


int main(void)
{
    int *ip;
	int id;

    ip = (int *) ft_calloc(10, sizeof(int));

    for (id=0; id<10; id++) 
    {
        ip[id] = id + 1;
        printf("%p adresindeki deger: %d\n", ip[id], ip[id]);
    }

    free(ip);
}

int main()
{
    char result = ft_isalnum('a');
    printf("%d", result);  
}

int main()
{
    char result = ft_isalpha('2');
    printf("%d", result);  
}

int main()
{
    char result = 's';
    printf("%d", ft_isascii(result));
}

int main()
{
    char result = 'a';
    printf("%d", ft_isdigit(result));
}

int main()
{
    char result = 'a';
    printf("%d", ft_isprint(result));
}


int main()
{
	int a3 = 2; // 2147483647
    char *result3 = ft_itoa(a3);
    printf("%s", result3);
}

int main()
{
    int a[] = {1030,23,34};
	int c = 4;
	int *r = ft_memchr(a,c,6);
	printf("%p", r);
}


int main()
{
    int str[] = {65, 0000, 0000, 0001};
    int str1[] ={0, 0001, 0000, 0000};

    printf("%c\n", ft_memcmp(str, str1, 2)); 
    printf("%c\n", memcmp(str, str1, 2)); 
    
	char a[] = "buali"; 
    char b[] = "burak"; 

	printf("%d\n", ft_memcmp(a, b, 2)); 
    printf("%d\n", memcmp(a, b, 2));

    return 0;
}


int main()
{
    const char *str = "  Emi234rhan Topal";
    char dest[20];
    ft_memcpy(dest, str, 3);
    printf("%s", dest);
}

int main()
{
    char *src = {2, 3 , 18};
    char dest[] = "selam, asdalskdjaslda";

    // ft_memmove test ediliyor
    ft_memmove(dest, src, 5);
    printf("Sonuc: %s\n", dest);

    return 0;
}
int main(void)
{
    int cdizi[] = {18, 0, 0, 0}; // 4 elemanlı bir dizi tanımladım

    // Dizi içeriğini yazdır
    printf("cdizi bellek icerigi (once): ");
    for (int i = 0; i < 4; i++)
        printf("%d ", cdizi[i]);
    printf("\n");

    // cdizi'nin 4 byte'ını 3 ile doldur
    ft_memset(cdizi, 212, 4);

    // Dizi içeriğini yeniden yazdır
    printf("cdizi bellek icerigi (sonra): ");
    for (int i = 0; i < 4; i++)
        printf("%d ", cdizi[i]);
    printf("\n");

    return 0;
}


int main()
{
	int fd = open("emirhan.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putchar_fd('c', fd);
}


int main()
{
	ft_putnbr_fd(12, 1);
}


int main()
{
	int fd = open("emirhan.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putchar_fd('c', fd);
}

int main(void)
{
    char **result;
    char str[] = "   test.      ";
    char delimiter = ' ';

    result = ft_split(str, delimiter);

    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Parca %d: %s\n", i + 1, result[i]);
            i++;
        }
    }
}

int main()
{
	char *arr = "Emirhan";
	int adr = 109;

	printf("%p", strchr(arr, adr));
}


int main()
{
	const char *cp1 = "Bilgisayar";
	char *p2 = ft_strdup(cp1);

	printf("%s", cp1);
	printf("%s", p2);
}


void	change_case(unsigned int i, char *c)
{
    c[i] = 'B';
}
int main()
{
    char str[] = "abcde";
    ft_striteri(str, change_case);

    printf("Dönüştürülmüş String: %s\n", str);

    return 0;
}

int main()
{
	char *s = "emirhan";
	char *a = "topal";

	printf("%s", ft_strjoin(s, a));
}



void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int		main()
{
	int i = 0;
	char dest[10] = "a";
	i = ft_strlcat(dest, "lorem ipsum dolor sit amet", 10);
	printf("%d\n", i);
	printf("%s\n", dest);
	return (0);
}

char static	change_case(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

int main() 
{
    char str[] = "abcde";
    char *result = ft_strmapi(str, change_case); 

    if (result) 
	{
        printf("Orijinal String: %s\n", str);
        printf("Dönüştürülmüş String: %s\n", result);
        free(result);
    }
    return 0;
}

int main() {
    char dest[10];
    const char *src = "Hel";
    size_t size = 10;

    size_t len = ft_strlcpy(dest, src, size);
    printf("Copied string: %s\n", dest);
    printf("Length of source string: %zu\n", len);

    return 0;
}


int main()
{
	char *s1 = "aa";
	char *s2 = "aa ";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d", strncmp(s1, s2, 4));
}

int main()
{
    const char *big = "Hello, world!";
    const char *little = "world";
    size_t len = 14;

    char *result = ft_strnstr(big, little, len);
    int i = 0;

    
	printf("%s\n",result);

    return 0;
}


int main()
{
	char *arr = "EmirhanE";
	int adr = 109;

	printf("%p", strrchr(arr, adr));
}


int main()
{
	const char *a = "abc Emirhan abc";
	const char *b = "abc";

	printf("%s", ft_strtrim(a, b));
}


int main()
{
	char *str = "Emirhan";
	printf("%s", ft_substr(str, 3, 2));
	//printf("%s", ft_substr(str, 10, 2));
	//printf("%s", ft_substr(str, 3, 9));
}

int main()
{
	void *str = {"ello"};
	t_list *n_node = ft_lstnew(str);
	printf("%s", (char *) n_node -> content);
}


int main()
{
	t_list *lst = ft_lstnew("asd"); // ilk node
	t_list *new = ft_lstnew("emirhan"); // node un önüne node ekliyoruz.
	ft_lstadd_front(&lst, new);
	t_list *new2 = ft_lstnew("emirhan2"); //node un önüne node ekliyoruz.
	ft_lstadd_front(&lst, new2);
	int lenght = ft_lstsize(lst); // uzunluk.
	printf("%d", lenght);
}


int main()
{
	void *str = "emirhan";
	t_list *lst = ft_lstnew(str);
	
	void *str2 = "emirhan2";
	t_list *lst2 = ft_lstnew(str2);
	
	void *str3 = "emirhan3";
	t_list *lst3 = ft_lstnew(str3);
	
	void *str4 = "emirhan4";
	t_list *lst4 = ft_lstnew(str4);

	ft_lstadd_front(&lst, lst2);
	ft_lstadd_front(&lst, lst3);
	ft_lstadd_front(&lst, lst4);
	
	int a = ft_lstsize(lst);

	printf("%d\n", a);
	printf("%p\n", lst);
}

void delete_content(void *content)
{
	free(content);
}
int main()
{
	void *c = malloc(8); 
	strcpy(c, "emirhan");
	t_list *str = ft_lstnew(c);
	
	void *c2 = malloc(9); 
	strcpy(c2, "emirhan2");
	t_list *str2 = ft_lstnew(c2);
	

	ft_lstadd_front(&str, str2);
	//ft_lstdelone(str, &delete_content);
	printf("%s", str2 -> content);
	return 0;
}

void delete_content(void *content)
{
	free(content);
}
int main()
{
	void *a = malloc(4);
	strcpy(a, "emr");
	t_list *str = ft_lstnew(a);
	
	void *b = malloc(4);
	strcpy(b, "emr2");
	t_list *str2 = ft_lstnew(b);

	ft_lstadd_front(&str, str2);
	ft_lstclear(&str, delete_content);
	//printf("%s", str -> content);
}

int main()
{
	t_list *str = NULL;
	t_list *new = ft_lstnew("emirhan");
	ft_lstadd_front(&str, new);
	printf("%s", (char *) str -> content);
}

void f(void *content)
{
	char *a = (char *) content;
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		a[i] = ft_toupper((int) a[i]);
		i++;	
	}
	
}

int main()
{
	void *a = malloc(2);
	strcpy(a, "aaaaa");
	t_list *lst = ft_lstnew(a);
	
	ft_lstiter(lst, f);
	printf("%s", (char *) lst -> content);
	return (0);
}

