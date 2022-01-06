#include "CBaseEntity.h"
#include "CProxyToggle_ProxiedData.h"

#pragma pack(push,1)
	class CProxyToggle : 
		 public CBaseEntity // 0x5fc
	{
	public:
		CProxyToggle_ProxiedData	blah; // 0x0
	};
#pragma pack(pop)
