#include "get_next_line.h"

size_t	ft_strlen(char *s)//contabiliza o tamanho da string
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)//busca la aparicion de un caracter en una cadena
{
	if (!s)
		return (NULL);
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)//concatena dos cadenas, y devuelve una nueva cadena con el contenido de las dos
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s2)
		return (NULL);
	s = malloc(sizeof(char *) * ((ft_strlen((char *)s1) + ft_strlen((char *)s2))
				+ 1));
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (free((char *)s1), s);
}

char	*ft_strdup(const char *s)// crea una nueva cadena que es una copia exacta de la cadena original
{
	char	*cpy;
	size_t	i;

	if (s == NULL)
		return (NULL);
	cpy = malloc(sizeof(char *) * (ft_strlen((char *)s) + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)// crea una nueva cadena que es una subcadena de la cadena original
{
	char	*ss;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		len = 0;
	else if ((start + len) > slen)
		len = slen - start;
	ss = malloc(sizeof(char *) + (len + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
