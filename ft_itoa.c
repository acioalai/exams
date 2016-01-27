/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:49:24 by acioalai          #+#    #+#             */
/*   Updated: 2016/01/27 18:27:14 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_itoa(int nbr)
{
	int		i, j, aux, negative;
	char	*str;

	i = 0;
	j = 1;
	negative = 0;	
	if (nbr == (1<<31))
	{
		printf("%s", "-2147483648");
		return(0);
	}
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		negative = 1;
	}
	aux = nbr;
	while (aux >= 10)
	{
		aux /= 10;
		j++;
	}
	str = (char *)malloc(sizeof(char) * j + 1);
	str[j--] = '\0';
	while (nbr > 0) 
	{
		str[j] = nbr % 10 + '0';
		nbr /= 10;
		j--;
	}
	if (negative == 1)
		write(1, "-", 1);
	while (str[i] != '\0')
	{
		write(1, str+i, 1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{

	ft_itoa(-1234567);	
	//printf("%d", 1<<31);
	return (0);
}
