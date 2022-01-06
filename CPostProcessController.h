#include "CBaseEntity.h"

#pragma pack(push,1)
	class CPostProcessController : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_fLocalContrastStrength; // 0x638
		float  	m_fLocalContrastEdgeStrength; // 0x63c
		float  	m_fVignetteStart; // 0x640
		float  	m_fVignetteEnd; // 0x644
		float  	m_fVignetteBlurStrength; // 0x648
		float  	m_fFadeToBlackStrength; // 0x64c
		float  	m_fGrainStrength; // 0x650
		float  	m_fTopVignetteStrength; // 0x654
		float  	m_fFadeTime; // 0x658
		int    	m_bMaster; // 0x65c
	};
#pragma pack(pop)
