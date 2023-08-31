/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:10:46 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/31 11:05:34 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
    
    printf("%d\n", ft_str_is_uppercase(str1)); // Should print 1
    printf("%d\n", ft_str_is_uppercase(str2)); // Should print 0
    
    return 0;
}
*/