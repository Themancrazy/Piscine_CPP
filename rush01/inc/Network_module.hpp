#ifndef NETWORKTHROUGHPUT_HPP
# define NETWORKTHROUGHPUT_HPP
# include "Gkrellm.h"

class NetworkThroughput : public IMonitorModule {
public:
	NetworkThroughput( void );
	~NetworkThroughput( void );

	long long int   getIpsReceived( void ) const;
	long long int   getIpsSent( void ) const;
};


# endif
