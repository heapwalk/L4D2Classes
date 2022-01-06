#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFireSmoke : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_flStartScale; // 0x638
		float  	m_flScale; // 0x63c
		float  	m_flScaleTime; // 0x640
		int    	m_nFlags; // 0x644
		int    	m_nFlameModelIndex; // 0x648
		int    	m_nFlameFromAboveModelIndex; // 0x64c
	};
#pragma pack(pop)
