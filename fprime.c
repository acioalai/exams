/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 15:38:03 by acioalai          #+#    #+#             */
/*   Updated: 2016/01/27 16:45:27 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		fprime(int nbr)
{
	int		i;

	i = 2;
	if (nbr == 1)
	{
		printf("%d", nbr);
		return (0);
	}
	if (nbr == 0)
	{
		printf("%d", 0);
		return (0);
	}
	while (nbr != 1)
	{
		while ((nbr % i) == 0)
		{
			printf("%d", i);
			if ((nbr / i) != 1)
				printf("*");
			nbr /= i;
		}
		i++;
	}
	printf("\n");
	return (0);
}

int		main(int argc, char **argv)
{
	int		nbr;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	nbr = atoi(argv[1]);
	fprime(nbr);
	return (0);
}
