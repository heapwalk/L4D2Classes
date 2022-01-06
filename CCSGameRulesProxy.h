#include "CGameRulesProxy.h"
#include "CCSGameRules.h"

#pragma pack(push,1)
	class CCSGameRulesProxy : 
		 public CGameRulesProxy // 0x0
	{
	public:
		CCSGameRules	cs_gamerules_data; // 0x0
	};
#pragma pack(pop)
