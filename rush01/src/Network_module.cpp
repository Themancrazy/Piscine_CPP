/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Network_module.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <anjansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 13:46:38 by kradoste          #+#    #+#             */
/*   Updated: 2019/07/28 21:23:57 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Network_module.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string> 
#include <sstream>

NetworkThroughput::NetworkThroughput( void ) {}
NetworkThroughput::~NetworkThroughput( void ) {}

long long int   NetworkThroughput::getIpsReceived( void ) const {
    void *op[1024];
	size_t oldlen = sizeof(struct ipstat), newlen = 0;
	void * newp = NULL;
    sysctlbyname("net.inet.ip.stats", op, &oldlen, newp, newlen);
    
    struct ipstat * g = (struct ipstat *) op;
    
    return g->ips_total;   
}

long long int   NetworkThroughput::getIpsSent( void ) const {
    void *op[1024];
	size_t oldlen = sizeof(struct ipstat), newlen = 0;
	void * newp = NULL;
    sysctlbyname("net.inet.ip.stats", op, &oldlen, newp, newlen);
    
    struct ipstat * g = (struct ipstat *) op;
    
    return g->ips_localout;
}
