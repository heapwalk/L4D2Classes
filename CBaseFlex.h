#include "CBaseAnimatingOverlay.h"

#pragma pack(push,1)
	class CBaseFlex : 
		 public CBaseAnimatingOverlay // 0x20
	{
	public:
		unsigned char _0x20[0xb80];
		vector3	m_viewtarget; // 0xba0
		unsigned char _0xbac[0x2c];
		int    	m_flexWeight[96]; // 0xbd8
		unsigned char _0xd58[0x2c];
		int    	m_blinktoggle; // 0xd84
	};
#pragma pack(pop)
