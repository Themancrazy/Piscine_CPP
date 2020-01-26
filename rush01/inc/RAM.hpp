/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAM.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <anjansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 02:46:01 by kradoste          #+#    #+#             */
/*   Updated: 2019/07/28 13:45:34 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAM_HPP
# define RAM_HPP
#include "IMonitorModule.hpp"
#include "Gkrellm.h"

class RAM : public IMonitorModule {
public:
	RAM(void);
	RAM(RAM const &obj);
	~RAM(void);

	RAM	&operator=(RAM const &rhs);

	void		setAllValues();

	//use these get to get value of memory
	//these are global memory indicators
	int64_t		getPhysicalMemory() const;
	long		getUsedMemory() const;
	long		getWiredMemory() const;
	long		getComprMemory() const;
	long		getDecompMemory() const;
	long		getSwapMemory() const;
	long		getPurgeMemory() const;

	//these are minor (filler memory indicators)
	long		getFreeMemory() const;
	long		getSpeculMemory() const;
	long		getAnonymousMemory() const;
	long		getPageinMemory() const;
	long		getPageoutMemory() const;

private:
	int64_t	_physMem;
	long	_bytes;
	long	_pFree;
	long	_pActive;
	long	_pInactive;
	long	_pSpecul;
	long	_pWire;
	long	_pPurgebl;
	long	_pPurged;
	long	_pAnony;
	long	_pComp;
	long	_pOcomp;
	long	_decomp;
	long	_comp;
	long	_pins;
	long	_pout;
	long	_sins;
	long	_sout;
};

#endif
