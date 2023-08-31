/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:30:30 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/31 11:03:42 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			++i;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int main()
{
    char str1[] = " ";
    char str2[] = "Hello123";
    
    printf("%d\n", ft_str_is_lowercase(str1)); // Should print 1
    printf("%d\n", ft_str_is_lowercase(str2)); // Should print 0
    
    return 0;
}
*/