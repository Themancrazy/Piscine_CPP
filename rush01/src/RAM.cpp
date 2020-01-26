// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RAM.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/28 03:25:05 by kradoste          #+#    #+#             //
//   Updated: 2019/07/28 21:42:30 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RAM.hpp"

RAM::RAM(void) :
	_physMem(0), _bytes(0), _pFree(0), _pActive(0), _pInactive(0), _pSpecul(0),
	_pWire(0), _pPurgebl(0), _pPurged(0), _pAnony(0), _pComp(0), _pOcomp(0),
	_decomp(0), _comp(0), _pins(0), _pout(0), _sins(0), _sout(0) {}
RAM::RAM(RAM const &obj) { (void)obj; }
RAM::~RAM(void) {}
RAM	&RAM::operator=(RAM const &rhs) { (void)rhs; return (*this); }

void	RAM::setAllValues()
{
	FILE *f = popen("vm_stat", "r");

	size_t length = sizeof(this->_physMem);
	sysctlbyname("hw.memsize", &this->_physMem, &length, NULL, 0);

	char buf[4096];

	while (fgets(buf, 4096, f) != NULL)
	{
		std::string line = buf;
		if (line.compare(0, 4, "Mach") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_bytes;
		}
		else if (line.compare(0, 11, "Pages free:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pFree;
		}
		else if (line.compare(0, 13, "Pages active:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pActive;
		}
		else if (line.compare(0, 15, "Pages inactive:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pInactive;
		}
		else if (line.compare(0, 18, "Pages speculative:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pSpecul;
		}
		else if (line.compare(0, 17, "Pages wired down:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pWire;
		}
		else if (line.compare(0, 16, "Pages purgeable:") == 0)
        {
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
            ss >> this->_pPurgebl;
        }
		else if (line.compare(0, 17, "Pages purged:") == 0)
        {
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
            ss >> this->_pPurged;
        }
		else if (line.compare(0, 16, "Anonymous pages:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pAnony;
		}
		else if (line.compare(0, 27, "Pages stored in compressor:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pComp;
		}
		else if (line.compare(0, 29, "Pages occupide by compressor:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_pOcomp;
		}
		else if (line.compare(0, 15, "Decompressions:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			ss >> this->_decomp;
		}
		else if (line.compare(0, 13, "Compressions:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
            ss >> this->_comp;
        }
		else if (line.compare(0, 8, "Pageins:") == 0)
		 {
			 std::stringstream ss(line.substr(line.find_first_of("0123456789")));
			 ss >> this->_pins;
		 }
		else if (line.compare(0, 9, "Pageouts:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
            ss >> this->_pout;
        }
		else if (line.compare(0, 8, "Swapins:") == 0)
		{
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
            ss >> this->_sins;
        }
		else if (line.compare(0, 9, "Swapouts:") == 0)
        {
			std::stringstream ss(line.substr(line.find_first_of("0123456789")));
            ss >> this->_sout;
        }
	}
	pclose(f);
}

int64_t		RAM::getPhysicalMemory() const
{ return (this->_physMem); }

long		RAM::getUsedMemory() const
{ return ((this->_pActive + this->_pInactive + this->_pFree) * this->_bytes); }

long		RAM::getWiredMemory() const
{ return (this->_pWire * this->_bytes); }

long		RAM::getComprMemory() const
{ return (this->_pComp + this->_pOcomp + this->_comp); }

long		RAM::getDecompMemory() const
{ return (this->_decomp); }

long		RAM::getSwapMemory() const
{ return ((this->_sins + this->_sout) * this->_bytes); }

long		RAM::getPurgeMemory() const
{ return ((this->_pPurgebl + this->_pPurged) * this->_bytes); }

long		RAM::getFreeMemory() const
{ return (this->_pFree * this->_bytes); }

long		RAM::getSpeculMemory() const
{ return (this->_pSpecul * this->_bytes); }

long		RAM::getAnonymousMemory() const
{ return (this->_pAnony * this->_bytes); }

long		RAM::getPageinMemory() const
{ return (this->_pins * this->_bytes); }

long		RAM::getPageoutMemory() const
{ return (this->_pout * this->_bytes); }
