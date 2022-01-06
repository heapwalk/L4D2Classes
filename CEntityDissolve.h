#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEntityDissolve : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x40];
		float  	m_flStartTime; // 0x63c
		float  	m_flFadeOutStart; // 0x640
		float  	m_flFadeOutLength; // 0x644
		float  	m_flFadeOutModelStart; // 0x648
		float  	m_flFadeOutModelLength; // 0x64c
		float  	m_flFadeInStart; // 0x650
		float  	m_flFadeInLength; // 0x654
		int    	m_nDissolveType; // 0x658
		unsigned char _0x65c[0x4];
		vector3	m_vDissolverOrigin; // 0x660
		int    	m_nMagnitude; // 0x66c
	};
#pragma pack(pop)
