/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:23:50 by simohamm          #+#    #+#             */
/*   Updated: 2023/08/31 12:43:45 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}

/*
int main() {
    char source[] = "Hello, world!";
    char destination[20];  // Make sure the destination array has enough space
    
    unsigned int n = 20;   // Number of characters to copy
    
    // Copy characters from source to destination using ft_strncpy
    ft_strncpy(destination, source, n);
    
    // Print the result
    printf("Source: %s\n", source);
    printf("Copied: %s\n", destination);

    return 0;
}
*/