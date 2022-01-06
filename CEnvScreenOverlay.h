#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvScreenOverlay : 
		 public CBaseEntity // 0x5fc
	{
	public:
		bool   	m_iszOverlayNames[1]; // 0x0
		unsigned char _0x0[0x638];
		char*  	m_iszOverlayNames_0; // 0x638
		unsigned char _0x63c[0x9f4];
		float  	m_flOverlayTimes_0; // 0x1030
		unsigned char _0x1034[0x24];
		float  	m_flStartTime; // 0x1058
		int    	m_iDesiredOverlay; // 0x105c
		int    	m_bIsActive; // 0x1060
	};
#pragma pack(pop)
