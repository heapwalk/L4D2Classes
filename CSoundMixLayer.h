#include "CBaseEntity.h"

#pragma pack(push,1)
	class CSoundMixLayer : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		char*  	m_iszMixLayerName; // 0x638
		unsigned char _0x63c[0x100];
		float  	m_fMixLayerLevel; // 0x73c
	};
#pragma pack(pop)
