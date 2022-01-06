#include "CNextBot.h"
#include "_ST_m_clientAnimatedOverlay_6.h"

#pragma pack(push,1)
	class CInfected : 
		 public CNextBot // 0x0
	{
	public:
		_ST_m_clientAnimatedOverlay_6	m_clientAnimatedOverlay; // 0x0
		unsigned char _0x24[0xcc];
		int    	m_fFlags; // 0xf0
		unsigned char _0xf4[0x24];
		float  	m_angRotation_0; // 0x118
		float  	m_angRotation_1; // 0x11c
		float  	m_angRotation_2; // 0x120
		vector2	m_vecOrigin; // 0x124
		float  	m_vecOrigin_2; // 0x12c
		unsigned char _0x130[0x16];
		int    	m_nWaterLevel; // 0x146
		unsigned char _0x14a[0x1032];
		vector3	m_gibbedLimbForce; // 0x117c
		int    	m_originalBody; // 0x1188
		int    	m_mobRush; // 0x118c
		int    	m_bIsBurning; // 0x118d
		unsigned char _0x1191[0x7];
		int    	m_nFallenFlags; // 0x1198
		unsigned char _0x119c[0xa0];
		int    	m_iRequestedWound1; // 0x123c
		int    	m_iRequestedWound2; // 0x1240
		unsigned char _0x1244[0x10];
		float  	m_sequenceStartTime; // 0x1254
		unsigned char _0x1258[0x54];
		int    	m_clientLookatTarget; // 0x12ac
		float  	m_clientLeanYaw; // 0x12b0
	};
#pragma pack(pop)
