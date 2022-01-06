#include "CAbilityBase.h"

#pragma pack(push,1)
	class CSelfDestruct : 
		 public CAbilityBase // 0x658
	{
	public:
		int    	m_bHasBeenActivated; // 0x658
	};
#pragma pack(pop)
