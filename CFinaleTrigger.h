#include "CBreakableProp.h"

#pragma pack(push,1)
	class CFinaleTrigger : 
		 public CBreakableProp // 0x95d
	{
	public:
		unsigned char _0x95d[0x3];
		int    	m_bDisabled; // 0x960
		int    	m_triggerState; // 0x964
	};
#pragma pack(pop)
