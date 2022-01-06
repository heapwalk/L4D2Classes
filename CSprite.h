#include "CBaseEntity.h"

#pragma pack(push,1)
	class CSprite : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x4c];
		int    	m_hAttachedToEntity; // 0x648
		int    	m_nAttachment; // 0x64c
		float  	m_flSpriteFramerate; // 0x650
		float  	m_flFrame; // 0x654
		unsigned char _0x658[0x4];
		int    	m_nBrightness; // 0x65c
		float  	m_flBrightnessTime; // 0x660
		float  	m_flSpriteScale; // 0x664
		float  	m_flScaleTime; // 0x668
		int    	m_bWorldSpaceScale; // 0x66c
		float  	m_flGlowProxySize; // 0x670
		float  	m_flHDRColorScale; // 0x674
	};
#pragma pack(pop)
