/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:31:39 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/27 21:15:03 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(const char *s, char c)
{
	int		count;
	int		words;

	count = 0;
	words = 0;
	while (*s)
	{
		if (*s != '\0' && *s != c)
		{
			if (!words)
			{
				words = 1;
				count++;
			}
		}
		else
		{
			words = 0;
		}
		s++;
	}
	return (count);
}

static	int	ft_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static	char	**ft_allocate_words(int words)
{
	char		**array;
	int			i;

	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i <= words)
	{
		array[i] = NULL;
		i++;
	}
	return (array);
}

static	int	ft_fill_words(char **array, const char *str, char c, int words)
{
	int		i;
	int		len;

	i = 0;
	while (i < words)
	{
		while (*str == c)
			str++;
		len = ft_word_len(str, c);
		array[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!array[i])
		{
			while (i > 0)
				free(array[--i]);
			free(array);
			return (0);
		}
		ft_strlcpy(array[i], str, len + 1);
		str += len;
		i++;
	}
	return (1);
}

char	**ft_split(const char *str, char c)
{
	int			words;
	char		**array;

	words = ft_count_words(str, c);
	array = ft_allocate_words(words);
	if (!array)
		return (NULL);
	if (!(ft_fill_words(array, str, c, words)))
		return (NULL);
	array[words] = NULL;
	return (array);
}

/**int main()
{
    char *str1 = "hello world";
    char *str2 = "    hello   world   ";
    char *str3 = "hello";
    char *str4 = "";
    char *str5 = "    ";
    char *str6 = "abc:def:ghi";
    char *str7 = "abc::def:ghi";
    char *str8 = "::abc::def::ghi::";

    printf("Testing ft_split:\n");

    // Test 1: Basic split
    char **split1 = ft_split(str1, ' ');
    if (split1)
    {
        printf("Split result:\n");
        for (int i = 0; split1[i]; i++)
        {
            printf("%s\n", split1[i]);
        }
        free(split1);
    }

    // Test 2: Split with multiple delimiters
    char **split2 = ft_split(str2, ' ');
    if (split2)
    {
        printf("Split result:\n");
        for (int i = 0; split2[i]; i++)
        {
            printf("%s\n", split2[i]);
        }
        free(split2);
    }

    // Test 3: Split with no delimiter
    char **split3 = ft_split(str3, ' ');
    if (split3)
    {
        printf("Split result:\n");
        for (int i = 0; split3[i]; i++)
        {
            printf("%s\n", split3[i]);
        }
        free(split3);
    }

    // Test 4: Empty string
    char **split4 = ft_split(str4, ' ');
    if (split4)
    {
        printf("Split result:\n");
        for (int i = 0; split4[i]; i++)
        {
            printf("%s\n", split4[i]);
        }
        free(split4);
    }

    // Test 5: String with only delimiters
    char **split5 = ft_split(str5, ' ');
    if (split5)
    {
        printf("Split result:\n");
        for (int i = 0; split5[i]; i++)
        {
            printf("%s\n", split5[i]);
        }
        free(split5);
    }

    // Test 6: Split with different delimiter
    char **split6 = ft_split(str6, ':');
    if (split6)
    {
        printf("Split result:\n");
        for (int i = 0; split6[i]; i++)
        {
            printf("%s\n", split6[i]);
        }
        free(split6);
    }

    // Test 7: Split with consecutive delimiters
    char **split7 = ft_split(str7, ':');
    if (split7)
    {
        printf("Split result:\n");
        for (int i = 0; split7[i]; i++)
        {
            printf("%s\n", split7[i]);
        }
        free(split7);
    }

    // Test 8: Split with leading and trailing delimiters
    char **split8 = ft_split(str8, ':');
    if (split8)
    {
        printf("Split result:\n");
        for (int i = 0; split8[i]; i++)
        {
            printf("%s\n", split8[i]);
        }
        free(split8);
    }

    return 0;
}*/