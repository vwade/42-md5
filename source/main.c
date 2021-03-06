/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:16:15 by viwade            #+#    #+#             */
/*   Updated: 2019/12/15 20:11:03 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

int
	main(argc, argv)
int		argc;
char	**argv;
{
	t_config	config;

	ft_bzero(&config, sizeof(config));
	config.argc = argc;
	config.argv = argv;
	config.prgnm = ft_basename(argv[0]);
	if (argc > 1 || ((config.error = no_param) && 0))
		return (ft_ssl(&config));
	else
		return (ssl_error(&config));
}

/*
**	RETURN VALUES
**	0	-	Normal.
**	1	-	Unknown option '%c'
*/
