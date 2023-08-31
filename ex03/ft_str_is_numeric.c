/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:15:25 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/31 11:02:12 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
    char str1[] = "12345";
    char str2[] = "123abc";
    
    printf("%d\n", ft_str_is_numeric(str1)); // Should print 1
    printf("%d\n", ft_str_is_numeric(str2)); // Should print 0
    
    return 0;
}
*/