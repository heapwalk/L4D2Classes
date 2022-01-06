#include "CBaseEntity.h"

#pragma pack(push,1)
	class CSlideshowDisplay : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_bEnabled; // 0x638
		char*  	m_szDisplayText; // 0x639
		unsigned char _0x63d[0x7c];
		char*  	m_szSlideshowDirectory; // 0x6b9
		unsigned char _0x6bd[0x93];
		bool   	m_chCurrentSlideLists[16]; // 0x750
		unsigned char _0x760[0x8];
		float  	m_fMinSlideTime; // 0x768
		float  	m_fMaxSlideTime; // 0x76c
		unsigned char _0x770[0x4];
		int    	m_iCycleType; // 0x774
		int    	m_bNoListRepeats; // 0x778
	};
#pragma pack(pop)
