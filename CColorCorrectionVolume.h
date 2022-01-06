#include "CBaseTrigger.h"

#pragma pack(push,1)
	class CColorCorrectionVolume : 
		 public CBaseTrigger // 0x63c
	{
	public:
		unsigned char _0x63c[0x14];
		int    	m_bEnabled; // 0x650
		float  	m_MaxWeight; // 0x654
		float  	m_FadeDuration; // 0x658
		unsigned char _0x65c[0x4];
		char*  	m_lookupFilename; // 0x660
	};
#pragma pack(pop)
