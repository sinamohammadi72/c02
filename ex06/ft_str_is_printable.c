/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:21:56 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/31 11:08:26 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			++i;
		else
			return (0);
	}
	return (1);
}

/*
int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    
    printf("%d\n", ft_str_is_printable(str1)); // Should print 1
    printf("%d\n", ft_str_is_printable(str2)); // Should print 0
    
    return 0;
}
*/