/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:12:42 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/31 12:43:48 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
    char str1[] = "";
    char str2[] = "Hello123";
    
    printf("%d\n", ft_str_is_alpha(str1)); // Should print 1
    printf("%d\n", ft_str_is_alpha(str2)); // Should print 0
    
    return 0;
}
*/