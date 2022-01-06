#include "CLocal.h"

#pragma pack(push,1)
	class CLocalPlayerExclusive
	{
	public:
		unsigned char _0x0[0xe8];
		int    	m_nNextThinkTick; // 0xe8
		unsigned char _0xec[0x14];
		float  	m_vecVelocity_0; // 0x100
		float  	m_vecVelocity_1; // 0x104
		float  	m_vecVelocity_2; // 0x108
		vector3	m_vecBaseVelocity; // 0x10c
		unsigned char _0x118[0x18];
		float  	m_flFriction; // 0x130
		unsigned char _0x134[0xdf0];
		int    	m_iAmmo[32]; // 0xf24
		unsigned char _0xfa4[0x200];
		CLocal	m_Local; // 0x11a4
		unsigned char _0x1374[0x4];
		int    	m_hTonemapController; // 0x1378
		unsigned char _0x137c[0x9c];
		int    	m_fOnTarget; // 0x1418
		unsigned char _0x141c[0x14];
		int    	m_hConstraintEntity; // 0x1430
		vector3	m_vecConstraintCenter; // 0x1434
		float  	m_flConstraintRadius; // 0x1440
		float  	m_flConstraintWidth; // 0x1444
		float  	m_flConstraintSpeedFactor; // 0x1448
		int    	m_bConstraintPastRadius; // 0x144c
		unsigned char _0x1450[0x24];
		float  	m_flDeathTime; // 0x1474
		unsigned char _0x1478[0x54];
		int    	m_nTickBase; // 0x14cc
		unsigned char _0x14d0[0x154];
		float  	m_flLaggedMovementValue; // 0x1624
	};
#pragma pack(pop)
