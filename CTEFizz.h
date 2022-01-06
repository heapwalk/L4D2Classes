#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEFizz : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		int    	m_nEntity; // 0x10
		int    	m_nModelIndex; // 0x14
		int    	m_nDensity; // 0x18
		int    	m_nCurrent; // 0x1c
	};
#pragma pack(pop)
