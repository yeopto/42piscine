/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunykim <gunykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:58:02 by gunykim           #+#    #+#             */
/*   Updated: 2021/09/16 18:16:53 by gunykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && (s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (s1[i] - s2[i]);
	else if (s1[i] == '\0' && s2[i] == '\0')
		return (s1[i] - s2[i]);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
