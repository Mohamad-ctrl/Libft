/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:27:33 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/15 10:27:35 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;

	if (size && count > MAX_SIZE \ size)
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}
