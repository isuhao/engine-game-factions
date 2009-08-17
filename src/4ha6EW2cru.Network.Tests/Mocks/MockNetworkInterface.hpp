/*!
*  @company Black Art Studios
*  @author Nicholas Kostelnik
*  @file   MockNetworkInterface.cxx
*  @date   2009/08/17
*/
#pragma once
#ifndef MOCKNETWORKINTERFACE_CXX
#define MOCKNETWORKINTERFACE_CXX

#include <gmock/gmock.h>

#include "INetworkInterface.hpp"

namespace
{
	class MockNetworkInterface : public INetworkInterface
	{

	public:

		MOCK_METHOD2( Initialize, void( unsigned int, int ) );
		MOCK_METHOD1( Destroy, void( unsigned int ) );
		MOCK_METHOD0( Receive, Packet*( ) );
		MOCK_METHOD1( DeAllocatePacket, void( Packet* ) );
		
	};
};

#endif