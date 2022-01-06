#include "CBaseEntity.h"

#pragma pack(push,1)
	class CVGuiScreen : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x44];
		float  	m_flWidth; // 0x640
		float  	m_flHeight; // 0x644
		int    	m_nPanelName; // 0x648
		unsigned char _0x64c[0x18];
		int    	m_nAttachmentIndex; // 0x664
		int    	m_nOverlayMaterial; // 0x668
		int    	m_fScreenFlags; // 0x66c
		unsigned char _0x670[0x58];
		int    	m_hPlayerOwner; // 0x6c8
	};
#pragma pack(pop)
