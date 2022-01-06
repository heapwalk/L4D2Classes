#include "CDynamicProp.h"

#pragma pack(push,1)
	class CBasePropDoor : 
		 public CDynamicProp // 0x964
	{
	public:
		unsigned char _0x964[0x1c];
		int    	m_eDoorState; // 0x980
		int    	m_spawnflags; // 0x984
		unsigned char _0x988[0x1];
		int    	m_bLocked; // 0x989
		int    	m_isRescueDoor; // 0x98a
		int    	m_hMaster; // 0x98c
	};
#pragma pack(pop)
