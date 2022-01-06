#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEKillPlayerAttachments : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		int    	m_nPlayer; // 0x10
	};
#pragma pack(pop)
